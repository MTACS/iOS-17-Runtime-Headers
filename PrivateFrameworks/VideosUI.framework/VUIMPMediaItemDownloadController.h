
@interface VUIMPMediaItemDownloadController : NSObject {
    MPMediaItem * _mediaItem;
    NSObject<OS_dispatch_queue> * _observerDispatchQueue;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    VUIMPMediaItemDownloadControllerState * _state;
}

@property (nonatomic, retain) MPMediaItem *mediaItem;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerDispatchQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (getter=isRestoreDownload, nonatomic, readonly) bool restoreDownload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, copy) VUIMPMediaItemDownloadControllerState *state;
@property (nonatomic, readonly) bool supportsCancellation;
@property (nonatomic, readonly) bool supportsPausing;

- (void).cxx_destruct;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(id /* block */)arg1;
- (void)_enqueueObserverQueueBlock:(id /* block */)arg1;
- (void)_notifyObservers:(id)arg1 stateDidChange:(id)arg2;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_setState:(id)arg1;
- (void)_setState:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelDownload;
- (id)init;
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (void)invalidate;
- (bool)isRestoreDownload;
- (id)mediaItem;
- (id)observerDispatchQueue;
- (id)observers;
- (void)pauseDownload;
- (void)removeObserver:(id)arg1;
- (void)resumeDownload;
- (id)serialProcessingDispatchQueue;
- (void)setMediaItem:(id)arg1;
- (void)setObserverDispatchQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (bool)supportsCancellation;
- (bool)supportsPausing;

@end
