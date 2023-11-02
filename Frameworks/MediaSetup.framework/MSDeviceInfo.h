
@interface MSDeviceInfo : NSObject

+ (bool)deviceCanManageMultiUser;
+ (bool)deviceSupportsMultipleUsers;
+ (bool)isDeviceAppleTV;
+ (bool)isDeviceAudioAccessory;
+ (bool)isDeviceiPad;
+ (bool)isDeviceiPhone;

@end
