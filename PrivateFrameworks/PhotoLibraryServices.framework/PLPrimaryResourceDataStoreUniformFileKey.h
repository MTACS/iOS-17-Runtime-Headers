
@interface PLPrimaryResourceDataStoreUniformFileKey : PLPrimaryResourceDataStoreKey <PLChooserKeyProperties> {
    struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 { 
        unsigned int strategy : 8; 
        unsigned int version : 2; 
        unsigned int resourceVersion : 2; 
        unsigned int resourceType : 5; 
        unsigned int recipeClass : 4; 
        unsigned int recipeVariationID : 15; 
        unsigned int isDerivative : 1; 
        unsigned int extensionCasing : 2; 
        unsigned int fileType : 8; 
    }  _keyStruct;
}

@property (nonatomic) struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 { unsigned int x1 : 8; unsigned int x2 : 2; unsigned int x3 : 2; unsigned int x4 : 5; unsigned int x5 : 4; unsigned int x6 : 15; unsigned int x7 : 1; unsigned int x8 : 2; unsigned int x9 : 8; } keyStruct;

+ (id)_fileURLFromKeyStruct:(struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 { unsigned int x1 : 8; unsigned int x2 : 2; unsigned int x3 : 2; unsigned int x4 : 5; unsigned int x5 : 4; unsigned int x6 : 15; unsigned int x7 : 1; unsigned int x8 : 2; unsigned int x9 : 8; }*)arg1 assetID:(id)arg2;
+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;

- (id)fileURLForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithFilePath:(id)arg1 resourceVersion:(unsigned int)arg2 resourceType:(unsigned int)arg3 recipeID:(unsigned int)arg4 bundleScope:(unsigned short)arg5 pathManager:(id)arg6;
- (id)initWithKeyStruct:(const void*)arg1;
- (bool)isDerivative;
- (id)keyData;
- (struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 { unsigned int x1 : 8; unsigned int x2 : 2; unsigned int x3 : 2; unsigned int x4 : 5; unsigned int x5 : 4; unsigned int x6 : 15; unsigned int x7 : 1; unsigned int x8 : 2; unsigned int x9 : 8; })keyStruct;
- (unsigned int)recipeIDForAssetID:(id)arg1;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (void)setKeyStruct:(struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 { unsigned int x1 : 8; unsigned int x2 : 2; unsigned int x3 : 2; unsigned int x4 : 5; unsigned int x5 : 4; unsigned int x6 : 15; unsigned int x7 : 1; unsigned int x8 : 2; unsigned int x9 : 8; })arg1;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
