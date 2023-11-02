
@interface IDSNGMPublicDeviceIdentity : NSObject

+ (id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id*)arg3;

- (id)dataRepresentationWithError:(id*)arg1;
- (id)identityData;
- (bool)isValidSignature:(id)arg1 forMessage:(id)arg2 forType:(long long)arg3 error:(id*)arg4;
- (id)prekeyData;
- (id)sealMessage:(id)arg1 forceSizeOptimizations:(bool)arg2 resetState:(bool)arg3 encryptedAttributes:(id)arg4 signedByFullIdentity:(id)arg5 errors:(id*)arg6;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3;
- (id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 error:(id*)arg4;

@end
