
@interface HMDXPCMessagePolicy : HMFMessagePolicy {
    unsigned long long  _entitlements;
}

@property (readonly) unsigned long long entitlements;

+ (id)defaultPolicy;
+ (id)policyWithEntitlements:(unsigned long long)arg1;

- (id)__initWithEntitlements:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)entitlements;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
