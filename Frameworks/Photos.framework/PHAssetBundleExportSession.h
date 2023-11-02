
@interface PHAssetBundleExportSession : NSObject {
    PHAsset * _asset;
    NSString * _customFilenameBase;
    NSDictionary * _fileURLs;
    NSString * _sessionUUID;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, copy) NSString *customFilenameBase;
@property (nonatomic, readonly) NSDictionary *fileURLs;
@property (nonatomic, readonly) NSString *sessionUUID;

- (void).cxx_destruct;
- (id)_createAssetBundleFromAsset:(id)arg1 withFileURLs:(id)arg2 atURL:(id)arg3 withError:(id*)arg4;
- (id)_filenameBaseForAsset:(id)arg1;
- (id)asset;
- (id)customFilenameBase;
- (id)fileURLs;
- (id)initWithAsset:(id)arg1 withAssetExportRequestFileURLs:(id)arg2;
- (id)sessionUUID;
- (void)setCustomFilenameBase:(id)arg1;
- (void)writeToDirectoryURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
