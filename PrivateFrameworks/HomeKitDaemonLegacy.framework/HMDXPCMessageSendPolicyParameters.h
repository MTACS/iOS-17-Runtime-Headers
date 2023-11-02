
@interface HMDXPCMessageSendPolicyParameters : HMFObject {
    unsigned long long  _entitlements;
}

@property (nonatomic, readonly) unsigned long long entitlements;
@property (readonly, copy) NSString *signature;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)entitlements;
- (unsigned long long)hash;
- (id)initWithEntitlements:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)signature;

@end
