
@interface IDSMPPublicDeviceIdentityContainer : NSObject {
    IDSMPPublicLegacyIdentity * _legacyPublicIdentity;
    IDSNGMPublicDeviceIdentity * _ngmPublicDeviceIdentity;
    NSNumber * _ngmVersion;
}

@property (nonatomic, readonly) IDSMPPublicLegacyIdentity *legacyPublicIdentity;
@property (nonatomic, readonly) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity;
@property (nonatomic, readonly) NSNumber *ngmVersion;

+ (id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)identityWithLegacyPublicIdentity:(id)arg1 ngmPublicDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_legacySealMessage:(id)arg1 signedWithFullIdentity:(id)arg2 error:(id*)arg3;
- (id)_ngmSealMessage:(id)arg1 forceSizeOptimizations:(bool)arg2 resetState:(bool)arg3 withEncryptedAttributes:(id)arg4 signedWithFullIdentity:(id)arg5 error:(id*)arg6 additionalResult:(id*)arg7;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLegacyPublicIdentity:(id)arg1 ngmPublicDeviceIdentity:(id)arg2 ngmVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)legacyPublicIdentity;
- (id)ngmPublicDeviceIdentity;
- (id)ngmVersion;
- (id)sealMessage:(id)arg1 forceSizeOptimizations:(bool)arg2 resetState:(bool)arg3 withEncryptedAttributes:(id)arg4 signedByFullIdentity:(id)arg5 usedIdentityWithIdentifier:(id*)arg6 error:(id*)arg7 additionalResult:(id*)arg8;
- (id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 usingIdentitiesWithIdentifier:(id)arg4 error:(id*)arg5;

@end
