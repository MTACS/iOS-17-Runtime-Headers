
@interface MKMapSnapshotter : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    geo_isolater * _isolation;
    int  _loadingFlag;
    bool  _needsResume;
    MKMapSnapshotOptions * _options;
    VKMapSnapshotCreator * _snapshotCreator;
    NSXPCConnection * _snapshotService;
}

@property (getter=isLoading, nonatomic, readonly) bool loading;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_cleanupSnapshotCreator;
- (void)_deliverSnapshot:(id)arg1;
- (void)_drawAppleLogoIfNecessaryOnSnapshot:(id)arg1;
- (void)_enterBackground:(id)arg1;
- (void)_exitBackground:(id)arg1;
- (void)_failWithError:(id)arg1;
- (bool)_isWidget;
- (void)_performSnapshot;
- (void)_performSnapshotOnSnapshotQueue;
- (void)_respondWithError:(id)arg1;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (bool)_shouldRenderLogoForSnapshotDimensions;
- (void)_succeedWithSnapshot:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (bool)isLoading;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)startWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;

@end
