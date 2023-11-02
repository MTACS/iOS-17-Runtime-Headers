
@protocol PBFBehaviorAssertionObserver <NSObject>

@optional

- (void)assertionProviderDidAcquireEditingSessionAssertion:(id <PBFBehaviorAssertionProviding>)arg1 forExtensionIdentifier:(NSString *)arg2;
- (void)assertionProviderDidAcquireInUseAssertion:(id <PBFBehaviorAssertionProviding>)arg1;
- (void)assertionProviderDidRelinquishEditingSessionAssertion:(id <PBFBehaviorAssertionProviding>)arg1 forExtensionIdentifier:(NSString *)arg2;
- (void)assertionProviderDidRelinquishInUseAssertion:(id <PBFBehaviorAssertionProviding>)arg1;

@end
