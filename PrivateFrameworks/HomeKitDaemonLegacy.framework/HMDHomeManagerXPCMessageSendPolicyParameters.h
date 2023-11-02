
@interface HMDHomeManagerXPCMessageSendPolicyParameters : HMDXPCMessageSendPolicyParameters <NSCopying, NSMutableCopying> {
    bool  _active;
    unsigned long long  _options;
}

@property (getter=isActive) bool active;
@property (nonatomic, readonly) unsigned long long options;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithEntitlements:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)options;
- (void)setActive:(bool)arg1;
- (id)signature;

@end
