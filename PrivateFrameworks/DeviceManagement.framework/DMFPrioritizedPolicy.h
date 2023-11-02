
@interface DMFPrioritizedPolicy : NSObject {
    long long  _policy;
    long long  _priority;
}

@property (nonatomic) long long policy;
@property (nonatomic) long long priority;

+ (long long)arbitratePolicyForPrioritizedPolicies:(id)arg1;
+ (id)prioritizedPoliciesForAppPolicy:(id)arg1 appCategoryPolicy:(id)arg2 bundleIdentifiers:(id)arg3 categoryPolicy:(id)arg4 categoryIdentifiers:(id)arg5 webPolicy:(id)arg6 webCategoryPolicy:(id)arg7 webDomains:(id)arg8;

- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)initWithEffectivePolicy:(id)arg1 identifier:(id)arg2 excludableIdentifiers:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPrioritizedPolicy:(id)arg1;
- (long long)policy;
- (long long)priority;
- (void)setPolicy:(long long)arg1;
- (void)setPriority:(long long)arg1;

@end
