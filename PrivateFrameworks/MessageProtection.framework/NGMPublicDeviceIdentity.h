
@interface NGMPublicDeviceIdentity : NSObject {
    NGMECDHPublicPreKey * _echnidaRegistration;
    SigningPublicKey * _signingKey;
}

@property (nonatomic, retain) NGMECDHPublicPreKey *echnidaRegistration;
@property (nonatomic, retain) SigningPublicKey *signingKey;

+ (id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)echnidaRegistration;
- (id)identityData;
- (id)initWithEchnidaRegistration:(id)arg1 signingKey:(id)arg2;
- (bool)isSecondaryCompatible;
- (bool)isValidSignature:(id)arg1 forMessage:(id)arg2 forType:(long long)arg3 error:(id*)arg4;
- (bool)isValidSigningDestination;
- (id)prekeyData;
- (id)sealMessage:(id)arg1 forceSizeOptimizations:(bool)arg2 resetState:(bool)arg3 encryptedAttributes:(id)arg4 signedByFullIdentity:(id)arg5 errors:(id*)arg6;
- (id)sealMessage:(id)arg1 guid:(id)arg2 sendingURI:(id)arg3 sendingPushToken:(id)arg4 receivingURI:(id)arg5 receivingPushToken:(id)arg6 forceSizeOptimizations:(bool)arg7 resetState:(bool)arg8 encryptedAttributes:(id)arg9 signedByFullIdentity:(id)arg10 errors:(id*)arg11;
- (id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3;
- (id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 error:(id*)arg4;
- (void)setEchnidaRegistration:(id)arg1;
- (void)setSigningKey:(id)arg1;
- (id)signingKey;
- (bool)verifySignature:(id)arg1 formatter:(id)arg2;

@end
