
@interface PXFlexMusicDownloader : NSObject <NSProgressReporting, PXChangeObserver> {
    PXFlexMusicAsset * _asset;
    double  _downloadFractionCompleted;
    long long  _downloadSignpostID;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _queue_completionHandler;
    PXExpectation * _queue_downloadExpectation;
    bool  _queue_isFinished;
    long long  _resource;
}

@property (nonatomic, readonly) PXFlexMusicAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double downloadFractionCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) long long resource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCancellation;
- (void)_queue_finishIfPossible;
- (void)_queue_handleDownloadFinished:(bool)arg1 error:(id)arg2;
- (void)_queue_handleDownloadProgressChanged;
- (void)_queue_startWithCompletion:(id /* block */)arg1;
- (id)asset;
- (id)description;
- (double)downloadFractionCompleted;
- (id)init;
- (id)initWithAsset:(id)arg1 resource:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)progress;
- (long long)resource;
- (void)setDownloadFractionCompleted:(double)arg1;
- (void)startWithCompletion:(id /* block */)arg1;

@end
