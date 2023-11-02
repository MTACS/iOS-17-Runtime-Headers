
@protocol HMSiriEndpointProfileDelegate <NSObject>

@optional

- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateAssistants:(NSArray *)arg2;
- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateCurrentAssistant:(HMSiriEndpointProfileAssistant *)arg2;
- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateManuallyDisabled:(bool)arg2;
- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateMultifunctionButton:(long long)arg2;
- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateNeedsOnboarding:(bool)arg2;
- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateSessionHubIdentifier:(NSString *)arg2;
- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateSessionState:(long long)arg2;
- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateSiriEngineVersion:(NSString *)arg2;
- (void)siriEndpointProfile:(HMSiriEndpointProfile *)arg1 didUpdateSupportsOnboarding:(bool)arg2;

@end
