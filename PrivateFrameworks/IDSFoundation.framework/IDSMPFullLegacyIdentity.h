
@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>

@property (nonatomic, readonly) struct _SecMPFullIdentity { }*fullIdentity;

+ (struct _SecMPPublicIdentity { }*)_copyPublicIdentityFromFullIdentity:(struct _SecMPFullIdentity { }*)arg1 error:(id*)arg2;
+ (struct _SecMPFullIdentity { }*)_createFullIdentityFromData:(id)arg1 error:(id*)arg2;
+ (struct _SecMPFullIdentity { }*)_createFullIdentityWithDataProtectionClass:(unsigned int)arg1 error:(id*)arg2;
+ (struct _SecMPFullIdentity { }*)_createFullIdentityWithError:(id*)arg1;
+ (id)identityWithData:(id)arg1 error:(id*)arg2;
+ (id)identityWithDataProtectionClass:(unsigned int)arg1 error:(id*)arg2;
+ (id)identityWithError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (unsigned int)dataProtectionClassWithError:(id*)arg1;
- (id)dataRepresentationWithError:(id*)arg1;
- (bool)didDataRepresentationFormatChangeFromDataRepresentation:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (struct _SecMPFullIdentity { }*)fullIdentity;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullIdentity:(struct _SecMPFullIdentity { }*)arg1;
- (id)protectedHashOfMessageData:(id)arg1 error:(id*)arg2;
- (id)publicIdentityWithError:(id*)arg1;
- (bool)purgeFromKeychain:(id*)arg1;
- (bool)updateIdentityToDataProtectionClass:(unsigned int)arg1 error:(id*)arg2;
- (id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id*)arg3;

@end
