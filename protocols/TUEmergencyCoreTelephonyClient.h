
@protocol TUEmergencyCoreTelephonyClient <TUCoreTelephonyClient>

@required

- (bool)inEmergencyMode;
- (bool)isEmergencyNumberForDigits:(NSString *)arg1 subscriptionUUID:(NSUUID *)arg2 error:(id*)arg3;
- (bool)isWhitelistedEmergencyNumberForDigits:(NSString *)arg1 subscriptionUUID:(NSUUID *)arg2 error:(id*)arg3;
- (bool)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(NSUUID *)arg1 error:(id*)arg2;
- (TUHandle *)testEmergencyHandleForSubscriptionLabelIdentifier:(NSString *)arg1 error:(id*)arg2;

@end
