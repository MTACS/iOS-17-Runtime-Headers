
@interface HMFPowerLogger : HMFObject

+ (id)sharedPowerLogger;

- (id)linkTypeDescription:(long long)arg1;
- (void)reportCharacteristicNotificationRegistrationEvent:(bool)arg1 clientIdentifier:(id)arg2;
- (void)reportConnection:(id)arg1 linkType:(long long)arg2;
- (void)reportConnection:(id)arg1 linkType:(long long)arg2 accessoryCategory:(id)arg3;
- (void)reportDisconnection:(id)arg1 linkType:(long long)arg2 accessoryCategory:(id)arg3;
- (void)reportIncomingAdvertisementChange:(id)arg1;
- (void)reportIncomingAdvertisementChange:(id)arg1 accessoryCategory:(id)arg2;
- (void)reportIncomingCloudPush:(id)arg1;
- (void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2;
- (void)reportIncomingIPEvent:(id)arg1;
- (void)reportIncomingIPEvent:(id)arg1 accessoryCategory:(id)arg2;
- (void)reportIncomingLoxyMessage:(id)arg1;
- (void)reportRemoteReachabilityRegistrationEvent:(bool)arg1 clientIdentifier:(id)arg2;
- (void)reportToPowerLogDestinationTable:(struct __CFString { }*)arg1 withEventDictionary:(id)arg2;
- (void)reportWakeEvent:(id)arg1 linkType:(long long)arg2 accessoryCategory:(id)arg3;

@end
