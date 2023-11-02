
@interface VUIMediaLibraryFetchController : NSObject {
    NSOperation * _fetchOperation;
    NSString * _identifier;
    NSString * _logName;
    NSString * _logNameSuffix;
    VUIMediaLibrary * _mediaLibrary;
    unsigned long long  _mediaLibraryRevision;
    unsigned long long  _pauseCount;
    NSOperationQueue * _serialFetchOperationQueue;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    long long  _state;
}

@property (nonatomic, retain) NSOperation *fetchOperation;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *logName;
@property (nonatomic, copy) NSString *logNameSuffix;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic) unsigned long long mediaLibraryRevision;
@property (nonatomic) unsigned long long pauseCount;
@property (nonatomic, retain) NSOperationQueue *serialFetchOperationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property long long state;

+ (id)_logStringWithFetchControllers:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelFetch;
- (void)_didCompleteFetchOperation:(id)arg1;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_enqueueFetchWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_enqueueProcessingQueueBlock:(id /* block */)arg1 synchronous:(bool)arg2;
- (void)_enqueueSyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_fetchOperationCompleted:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_fetchOperationForFetchReason:(long long)arg1;
- (void)_moveToPausedState;
- (bool)_shouldFetchForMediaLibraryRevision:(unsigned long long)arg1;
- (void)_startFetchIfNeededWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_startFetchWithCompletionHandler:(id /* block */)arg1;
- (bool)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changeSet:(id)arg3 updateOnNoChanges:(bool)arg4;
- (void)beginFetchWithMediaLibraryRevision:(unsigned long long)arg1 completionHandler:(id /* block */)arg2 completionQueue:(id)arg3;
- (void)cancelFetch;
- (id)fetchOperation;
- (id)identifier;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1;
- (id)logName;
- (id)logNameSuffix;
- (id)mediaLibrary;
- (unsigned long long)mediaLibraryRevision;
- (void)pause;
- (unsigned long long)pauseCount;
- (void)resume;
- (id)serialFetchOperationQueue;
- (id)serialProcessingDispatchQueue;
- (void)setFetchOperation:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLogName:(id)arg1;
- (void)setLogNameSuffix:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setMediaLibraryRevision:(unsigned long long)arg1;
- (void)setPauseCount:(unsigned long long)arg1;
- (void)setSerialFetchOperationQueue:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
