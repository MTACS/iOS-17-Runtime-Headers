
@interface CNAutocompleteSourceInclusionPolicy : NSObject

+ (id)defaultPolicyWithFetchRequest:(id)arg1;
+ (id)policyForNoContactsAccess;
+ (id)policyWithCurrentProcessEntitlements;
+ (id)policyWithFetchRequest:(id)arg1;
+ (id)policyWithPolicies:(id)arg1;
+ (id)policyWithUserDefaults:(id)arg1;
+ (id)policyWithValue:(bool)arg1;

@end
