
@interface HMDAccessoryBrowserXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters {
    bool  _browsing;
}

@property (getter=isBrowsing, nonatomic) bool browsing;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithEntitlements:(unsigned long long)arg1 browsing:(bool)arg2;
- (bool)isBrowsing;
- (bool)isEqual:(id)arg1;
- (void)setBrowsing:(bool)arg1;
- (id)signature;

@end
