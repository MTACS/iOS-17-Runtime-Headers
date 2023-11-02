
@interface SXSubscriptionActivationEligibilityDefaultProvider : NSObject <SXSubscriptionActivationEligibilityProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long eligibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addObserver:(id)arg1;
- (long long)eligibility;
- (void)removeObserver:(id)arg1;

@end
