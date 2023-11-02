
@interface HMAccessorySetupPayload : NSObject <NSCopying, NSSecureCoding> {
    HMSetupAccessoryPayload * _internalSetupPayload;
    HMAccessoryOwnershipToken * _ownershipToken;
}

@property (readonly) HMSetupAccessoryPayload *internalSetupPayload;
@property (readonly, copy) HMAccessoryOwnershipToken *ownershipToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalSetupPayload:(id)arg1 ownershipToken:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 ownershipToken:(id)arg2;
- (id)internalSetupPayload;
- (bool)isEqual:(id)arg1;
- (id)ownershipToken;

@end
