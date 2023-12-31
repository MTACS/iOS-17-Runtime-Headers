
@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage {
    unsigned long long  _targetedAccountType;
}

@property (nonatomic) unsigned long long targetedAccountType;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)xpcMessageName;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (void)setTargetedAccountType:(unsigned long long)arg1;
- (unsigned long long)targetedAccountType;
- (id)xpcMessageName;

@end
