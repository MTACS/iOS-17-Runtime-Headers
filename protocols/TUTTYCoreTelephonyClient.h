
@protocol TUTTYCoreTelephonyClient <TUCoreTelephonyClient>

@required

- (bool)isRTTSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (bool)isTTYEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (bool)isTTYHardwareAvailableForSubscriptionUUID:(NSUUID *)arg1;
- (bool)isTTYHardwareEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (bool)isTTYHardwareSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (bool)isTTYSoftwareAvailableForSubscriptionUUID:(NSUUID *)arg1;
- (bool)isTTYSoftwareEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (bool)isTTYSoftwareSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (bool)isTTYSupportedForSubscriptionUUID:(NSUUID *)arg1;

@end
