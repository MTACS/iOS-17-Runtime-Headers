
@interface IDSMPPublicLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic, readonly) struct _SecMPPublicIdentity { }*publicIdentity;

+ (struct _SecMPPublicIdentity { }*)_createPublicIdentityFromData:(id)arg1 error:(id*)arg2;
+ (id)identityWithData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (id)dataRepresentationWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublicIdentity:(struct _SecMPPublicIdentity { }*)arg1;
- (struct _SecMPPublicIdentity { }*)publicIdentity;
- (id)signAndProtectData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3;

@end
