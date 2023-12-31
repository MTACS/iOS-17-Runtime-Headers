
@protocol CoreTelephonyClientSuppServicesDelegateInternal <NSObject>

@optional

- (void)phoneBookError:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookFetched:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookSelected:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneBookWritten:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneNumberAvailable:(CTXPCServiceSubscriptionContext *)arg1;
- (void)phoneNumberChanged:(CTXPCServiceSubscriptionContext *)arg1;
- (void)spcUnlockSuccessful:(CTXPCServiceSubscriptionContext *)arg1;
- (void)suppServicesCompleted:(CTXPCServiceSubscriptionContext *)arg1;
- (void)suppServicesError:(CTXPCServiceSubscriptionContext *)arg1 error:(NSError *)arg2;
- (void)suppServicesEvent:(CTXPCServiceSubscriptionContext *)arg1 event:(int)arg2 settingsType:(int)arg3 data:(CTSuppServicesNotificationData *)arg4;
- (void)suppServicesStarted:(CTXPCServiceSubscriptionContext *)arg1;

@end
