
@protocol CoreTelephonyClientVoicemailDelegateInternal <NSObject>

@optional

- (void)voicemailDatabaseReset:(CTXPCServiceSubscriptionContext *)arg1;
- (void)voicemailInfoAvailableNotification:(CTXPCServiceSubscriptionContext *)arg1 voicemailInfo:(CTVoicemailInfoType *)arg2;

@end
