
@protocol DNDRemoteServiceConnectionEventListener <NSObject>

@required

- (NSString *)clientIdentifier;

@optional

- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didChangeActiveModeAssertion:(DNDModeAssertion *)arg2 invalidation:(DNDModeAssertionInvalidation *)arg3;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveAppConfigurationContextUpdateForModeIdentifier:(NSString *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveDoNotDisturbStateUpdate:(DNDStateUpdate *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedActiveModeAssertion:(DNDModeAssertion *)arg2 stateUpdate:(DNDStateUpdate *)arg3;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedAvailableModeIdentifiers:(NSArray *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedAvailableModes:(NSArray *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedMeDeviceState:(DNDMeDeviceState *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedModeIdentifiers:(NSArray *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedModes:(NSArray *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedPairSyncState:(unsigned long long)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedPreventAutoReplySetting:(bool)arg2;
- (void)remoteService:(DNDRemoteServiceConnection *)arg1 didReceiveUpdatedScheduleSettings:(DNDScheduleSettings *)arg2;

@end
