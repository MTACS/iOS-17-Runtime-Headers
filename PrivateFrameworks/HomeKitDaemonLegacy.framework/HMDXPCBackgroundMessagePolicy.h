
@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy {
    bool  _requiresEntitlement;
}

@property (readonly) bool requiresEntitlement;

+ (id)defaultPolicy;
+ (id)policyWithEntitlementRequirement:(bool)arg1;

- (id)__initWithEntitlementRequirement:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)requiresEntitlement;

@end
