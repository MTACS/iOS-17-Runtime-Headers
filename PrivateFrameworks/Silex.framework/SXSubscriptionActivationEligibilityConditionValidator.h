
@interface SXSubscriptionActivationEligibilityConditionValidator : NSObject <SXConditionValidating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)validateCondition:(id)arg1 context:(id)arg2;

@end
