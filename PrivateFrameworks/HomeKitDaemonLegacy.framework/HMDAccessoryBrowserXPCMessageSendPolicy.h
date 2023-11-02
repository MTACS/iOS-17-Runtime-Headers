
@interface HMDAccessoryBrowserXPCMessageSendPolicy : HMDXPCMessageSendPolicy {
    unsigned long long  _requiredEntitlements;
}

@property (readonly) unsigned long long requiredEntitlements;

- (id)attributeDescriptions;
- (bool)canSendWithPolicyParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithRequiredEntitlements:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)requiredEntitlements;

@end
