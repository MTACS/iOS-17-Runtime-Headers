
@protocol _HMSiriEndpointProfileDelegate <NSObject>

@required

- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateActiveIdentifier:(NSNumber *)arg2;
- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateAssistants:(NSArray *)arg2;
- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateManuallyDisabled:(bool)arg2;
- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateMultifunctionButton:(long long)arg2;
- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateNeedsOnboarding:(bool)arg2;
- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateSessionHubIdentifier:(NSUUID *)arg2;
- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateSessionState:(long long)arg2;
- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateSiriEngineVersion:(NSString *)arg2;
- (void)siriEndpointProfile:(_HMSiriEndpointProfile *)arg1 didUpdateSupportsOnboarding:(bool)arg2;

@end
