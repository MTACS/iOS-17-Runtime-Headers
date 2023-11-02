
@interface HMDHomeManagerXPCMessageSendPolicy : HMDXPCMessageSendPolicy {
    bool  _active;
    unsigned long long  _entitlements;
    unsigned long long  _options;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) unsigned long long entitlements;
@property (nonatomic, readonly) unsigned long long options;

- (id)attributeDescriptions;
- (bool)canSendWithPolicyParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)entitlements;
- (unsigned long long)hash;
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2 active:(bool)arg3;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;

@end
