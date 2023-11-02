
@interface CLSAssetDownloadObserver : NSObject {
    CLSAbstractAsset * _asset;
    bool  _downloaded;
    id /* block */  _onDownloadComplete;
    id /* block */  _onDownloadProgress;
    NSError * downloadError;
    double  downloadProgress;
}

@property (nonatomic, retain) CLSAbstractAsset *asset;
@property (readonly) NSError *downloadError;
@property (readonly) double downloadProgress;
@property (getter=isDownloaded, nonatomic) bool downloaded;
@property (nonatomic, copy) id /* block */ onDownloadComplete;
@property (nonatomic, copy) id /* block */ onDownloadProgress;

- (void).cxx_destruct;
- (id)asset;
- (id)downloadError;
- (double)downloadProgress;
- (id)initWithAsset:(id)arg1;
- (bool)isDownloaded;
- (id /* block */)onDownloadComplete;
- (id /* block */)onDownloadProgress;
- (void)setAsset:(id)arg1;
- (void)setDownloaded:(bool)arg1;
- (void)setOnDownloadComplete:(id /* block */)arg1;
- (void)setOnDownloadProgress:(id /* block */)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
