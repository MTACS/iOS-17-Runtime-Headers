
@interface HMDLegacyModelContainer : HMBModelContainer {
    HMFPairingIdentity * _pairingIdentity;
}

@property (nonatomic, readonly) HMFPairingIdentity *pairingIdentity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodePropertyValueFromData:(id)arg1 forProperty:(id)arg2 field:(id)arg3 storageLocation:(unsigned long long)arg4 error:(id*)arg5;
- (id)decryptData:(id)arg1 decompress:(bool)arg2 error:(id*)arg3;
- (id)encodePropertyValue:(id)arg1 forProperty:(id)arg2 field:(id)arg3 storageLocation:(unsigned long long)arg4 error:(id*)arg5;
- (id)encryptData:(id)arg1 compress:(bool)arg2 error:(id*)arg3;
- (id)initWithDataVersion:(id)arg1 legacyDataVersion:(id)arg2 pairingIdentity:(id)arg3;
- (Class)modelClassForTypeName:(id)arg1;
- (id)modelFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 type:(id)arg4 error:(id*)arg5;
- (id)pairingIdentity;

@end
