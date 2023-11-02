
@interface PLPrimaryResourceDataStoreFilePathKey : PLPrimaryResourceDataStoreKey {
    NSString * _filePathSuffix;
    struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 { 
        unsigned int strategy : 8; 
        unsigned int version : 2; 
        unsigned int relation : 3; 
    }  _keyStruct;
}

@property (nonatomic, copy) NSString *filePathSuffix;
@property (nonatomic) struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 { unsigned int x1 : 8; unsigned int x2 : 2; unsigned int x3 : 3; } keyStruct;

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)descriptionForAssetID:(id)arg1;
- (id)extension;
- (id)filePathSuffix;
- (id)fileURLForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithFilePath:(id)arg1 andLibraryID:(id)arg2;
- (id)initWithKeyStruct:(const void*)arg1;
- (id)keyData;
- (struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 { unsigned int x1 : 8; unsigned int x2 : 2; unsigned int x3 : 3; })keyStruct;
- (void)setFilePathSuffix:(id)arg1;
- (void)setKeyStruct:(struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 { unsigned int x1 : 8; unsigned int x2 : 2; unsigned int x3 : 3; })arg1;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
