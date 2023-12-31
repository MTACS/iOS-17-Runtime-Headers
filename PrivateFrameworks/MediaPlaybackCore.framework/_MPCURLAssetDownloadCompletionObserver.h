
@interface _MPCURLAssetDownloadCompletionObserver : NSObject {
    AVURLAsset * _asset;
    id /* block */  _completionHandler;
}

@property (nonatomic, readonly) AVURLAsset *asset;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)_downloadCompleteFailedNotification:(id)arg1;
- (void)_downloadCompleteSuccessNotification:(id)arg1;
- (void)_notifyCompletionHandlerWithSuccess:(bool)arg1 error:(id)arg2;
- (id)asset;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
