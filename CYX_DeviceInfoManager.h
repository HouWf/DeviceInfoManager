//
//  CYX_DeviceInfoObject.h
//  CYX_SDK
//
//  Created by hzhy001 on 2020/4/16.
//  Copyright © 2020 hzhy001. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CYX_DeviceInfoManager : NSObject

/// 屏幕宽度
+ (CGFloat)getDeviceScreenWidth;

/// 屏幕高度
+ (CGFloat)getDeviceScreenHeight;

/// 获取设备名称
+ (NSString *)getDeviceName;

/// 获取像素
+ (NSString *)getScaleFactor;

/// 处理器的指令集
+ (NSString *)getArmSupport;

/// 获取iPhone名称
+ (NSString *)getiPhoneName;

/// 获取app版本号
+ (NSString *)getAPPVerion;

/// 获取电池电量
+ (CGFloat)getBatteryLevel;

/// 获取精准电池电量
+ (CGFloat)getCurrentBatteryLevel;

/// 当前系统名称
+ (NSString *)getSystemName;

/// 当前系统版本号
+ (NSString *)getSystemVersion;

/// 通用唯一识别码UUID
+ (NSString *)getUUID;

// 获取当前设备IP <只有当你的设备连接到WIFI时才能获取到IP地址>
+ (NSString *)getDeviceIPAdress;

// 获取当前设备IP <无论是WIFI还是流量都能获取到IP地址>
+ (NSString *)getIPAddress:(BOOL)preferIPv4;

/// 获取设备物理地址 mac地址
- (nullable NSString *)getMacAddress;

/// 获取总内存大小
+ (long long)getTotalMemorySize;

/// 获取当前语言
+ (NSString *)getDeviceLanguage;

/// 获取当前网络状态
+ (NSString *)getCurrentNetwork;

/// 获取当前详细的网络状态
+ (NSString *)getDetailCurrentNetwork;

@end

NS_ASSUME_NONNULL_END
