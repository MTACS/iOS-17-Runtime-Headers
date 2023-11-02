
@protocol SXSubscriptionActivationEligibilityProviding <NSObject>

@required

- (void)addObserver:(id <SXSubscriptionActivationEligibilityObserving>)arg1;
- (long long)eligibility;
- (void)removeObserver:(id <SXSubscriptionActivationEligibilityObserving>)arg1;

@end
