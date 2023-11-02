
@interface MKPhotoLibrary : NSObject {
    MKImportAnalytics * _analytics;
    unsigned long long  _contentType;
    <MKAssetDecoder> * _decoder;
    unsigned long long  _importCount;
    NSMutableSet * _importErrors;
    NSString * _rootPath;
}

@property (nonatomic) unsigned long long contentType;
@property (nonatomic, copy) NSString *rootPath;

- (void).cxx_destruct;
- (id)addAsset:(id)arg1;
- (void)addAsset:(id)arg1 filename:(id)arg2 originalFilename:(id)arg3 size:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)assetCollection:(id)arg1;
- (id)assetCollectionChangeRequest:(id)arg1;
- (unsigned long long)assetCount:(id)arg1;
- (void)close;
- (unsigned long long)contentType;
- (bool)copy:(id)arg1 filename:(id)arg2 error:(id*)arg3;
- (unsigned long long)countForCollection:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithContentType:(unsigned long long)arg1;
- (bool)photoLibraryDidComplete:(id)arg1 filename:(id)arg2 originalFilename:(id)arg3 success:(bool)arg4 error:(id*)arg5;
- (id)rootPath;
- (void)sendAnalytics;
- (void)setCollection:(id)arg1 forLocalIdentifiers:(id)arg2;
- (void)setContentType:(unsigned long long)arg1;
- (void)setRootPath:(id)arg1;

@end
