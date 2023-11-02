
@interface IDSMPFullDeviceIdentityContainer : NSObject {
    NSData * _cachedLegacySerializedData;
    IDSMPFullLegacyIdentity * _legacyFullIdentity;
    IDSNGMFullDeviceIdentity * _ngmFullDeviceIdentity;
    NSNumber * _ngmVersion;
}

@property (nonatomic, retain) NSData *cachedLegacySerializedData;
@property (nonatomic, readonly) IDSMPFullLegacyIdentity *legacyFullIdentity;
@property (nonatomic, readonly) IDSNGMFullDeviceIdentity *ngmFullDeviceIdentity;
@property (nonatomic, readonly) NSNumber *ngmVersion;

+ (id)_identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4 error:(id*)arg5;
+ (id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (id)identityWithLegacyFullIdentity:(id)arg1 ngmFullDeviceIdentity:(id)arg2 ngmVersion:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_legacyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3;
- (id)_ngmSynchronouslyUnsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3;
- (id)_ngmUnsealMessage:(id)arg1 guid:(id)arg2 signedByPublicIdentity:(id)arg3;
- (id)_ngmValidateEncryptingAndSigningIdentity:(id)arg1 forMessage:(id)arg2;
- (id)cachedLegacySerializedData;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithFullLegacyIdentity:(id)arg1 ngmFullDeviceidentity:(id)arg2 ngmVersion:(id)arg3 legacyFullIdentitySerializedData:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)legacyFullIdentity;
- (id)ngmFullDeviceIdentity;
- (id)ngmVersion;
- (id)publicIdentityWithError:(id*)arg1;
- (void)setCachedLegacySerializedData:(id)arg1;
- (id)unsealMessage:(id)arg1 guid:(id)arg2 signedByPublicIdentity:(id)arg3 usingIdentityWithIdentifier:(id)arg4;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 usingIdentityWithIdentifier:(id)arg3 error:(id*)arg4;

@end
