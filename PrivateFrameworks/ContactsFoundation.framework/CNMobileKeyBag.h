
@interface CNMobileKeyBag : NSObject

+ (const char *)firstUnlockNotificationID;
+ (bool)isDevicePasscodeProtected;
+ (bool)isDeviceUnlockedSinceBoot;

@end
