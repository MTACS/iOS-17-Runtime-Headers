
@interface WLPhotoLibrary : NSObject {
    unsigned long long  _contentType;
    unsigned long long  _errorCount;
    NSString * _rootPath;
}

@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long errorCount;
@property (nonatomic, copy) NSString *rootPath;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1 collection:(id)arg2;
- (void)addAsset:(id)arg1 filename:(id)arg2 size:(unsigned long long)arg3 collection:(id)arg4 completion:(id /* block */)arg5;
- (id)assetCollectionChangeRequest:(id)arg1;
- (unsigned long long)contentType;
- (bool)copy:(id)arg1 filename:(id)arg2 error:(id*)arg3;
- (unsigned long long)errorCount;
- (id)init;
- (id)initWithContentType:(unsigned long long)arg1;
- (bool)photoLibraryDidComplete:(id)arg1 filename:(id)arg2 success:(bool)arg3 error:(id*)arg4;
- (id)rootPath;
- (void)setContentType:(unsigned long long)arg1;
- (void)setErrorCount:(unsigned long long)arg1;
- (void)setRootPath:(id)arg1;

@end
