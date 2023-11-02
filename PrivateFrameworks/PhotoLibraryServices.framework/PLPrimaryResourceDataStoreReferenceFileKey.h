
@interface PLPrimaryResourceDataStoreReferenceFileKey : PLPrimaryResourceDataStoreKey {
    NSURL * _cachedUrl;
    struct PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 { 
        unsigned int strategy : 8; 
        unsigned int version : 2; 
        unsigned int resourceType : 5; 
    }  _keyStruct;
}

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)fileURLForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1 inContext:(id)arg2;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithKeyStruct:(const void*)arg1;
- (id)initWithResourceType:(unsigned int)arg1;
- (id)keyData;
- (id)uniformTypeIdentifier;

@end
