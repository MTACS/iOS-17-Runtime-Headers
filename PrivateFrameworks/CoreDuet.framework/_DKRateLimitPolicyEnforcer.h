
@interface _DKRateLimitPolicyEnforcer : NSObject

+ (id)rateLimitPolicyEnforcer;

- (void)creditForDeletion:(id)arg1;
- (id)filterObjectsByEnforcingRateLimit:(id)arg1;

@end
