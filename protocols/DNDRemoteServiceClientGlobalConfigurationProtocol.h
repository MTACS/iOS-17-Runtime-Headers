
@protocol DNDRemoteServiceClientGlobalConfigurationProtocol <NSObject>

@required

- (oneway void)deliverUpdatedPairSyncState:(NSNumber *)arg1;
- (oneway void)deliverUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg1;
- (oneway void)deliverUpdatedPreventAutoReplySetting:(NSNumber *)arg1;

@end
