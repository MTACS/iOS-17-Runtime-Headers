
@interface PXPhotoKitAssetFilePromise : NSObject {
    PHAsset * _asset;
    PHAssetExportRequest * _exportRequest;
    NSString * _fileType;
    long long  _playbackStyle;
    long long  _variant;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) NSString *fileType;

+ (id)filePromiseWithAsset:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)asset;
- (id)fileNameForType:(id)arg1;
- (id)fileType;
- (void)writeToURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
