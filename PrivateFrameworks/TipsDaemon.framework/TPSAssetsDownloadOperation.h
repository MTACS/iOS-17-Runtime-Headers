
@interface TPSAssetsDownloadOperation : TPSAsyncOperation {
    void assetIdentifier;
    void assetURLPath;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  downloadedURL;
    void priority;
    void urlSessionItem;
}

@property (nonatomic, copy) NSString *assetIdentifier;
@property (nonatomic, copy) NSString *assetURLPath;
@property (nonatomic, copy) NSURL *downloadedURL;
@property (nonatomic) float priority;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)assetURLPath;
- (id)downloadedURL;
- (id)init;
- (id)initWithAssetIdentifier:(id)arg1 assetURLPath:(id)arg2;
- (void)main;
- (float)priority;
- (void)setAssetIdentifier:(id)arg1;
- (void)setAssetURLPath:(id)arg1;
- (void)setDownloadedURL:(id)arg1;
- (void)setPriority:(float)arg1;

@end
