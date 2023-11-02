
@interface VUIMediaLibraryFetchControllerQueue : NSObject <VUINowPlayingObserverDelegate> {
    VUIMediaLibraryFetchControllerQueueOperation * _currentFetchOperation;
    VUIDelayOperation * _delayContentsChangeOperation;
    <VUIMediaLibraryFetchControllerQueueDelegate> * _delegate;
    VUIMediaLibrary * _mediaLibrary;
    unsigned long long  _mediaLibraryRevision;
    NSMutableArray * _mutableFetchControllers;
    VUINowPlayingObserver * _nowPlayingObserver;
    bool  _paused;
    NSOperationQueue * _serialFetchOperationQueue;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    bool  _shouldFetchOnResume;
}

@property (nonatomic, retain) VUIMediaLibraryFetchControllerQueueOperation *currentFetchOperation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) VUIDelayOperation *delayContentsChangeOperation;
@property (nonatomic) <VUIMediaLibraryFetchControllerQueueDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *fetchControllers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic) unsigned long long mediaLibraryRevision;
@property (nonatomic, retain) NSMutableArray *mutableFetchControllers;
@property (nonatomic, retain) VUINowPlayingObserver *nowPlayingObserver;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, retain) NSOperationQueue *serialFetchOperationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic) bool shouldFetchOnResume;
@property (readonly) Class superclass;

+ (id)defaultQueueWithMediaLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_addStateObserverForFetchControllers:(id)arg1;
- (void)_delayContentsChangeOperationDidComplete:(id)arg1;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_enqueueControllerFetchOperation;
- (void)_enqueueProcessingQueueBlock:(id /* block */)arg1 synchronous:(bool)arg2;
- (void)_enqueueSyncProcessingQueueBlock:(id /* block */)arg1;
- (void)_handleMediaLibraryContentsChange;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_notifyDelegateFetchDidComplete;
- (void)_queueOperationDidComplete:(id)arg1;
- (void)_removeStateObserverForFetchControllers:(id)arg1;
- (void)addFetchController:(id)arg1;
- (void)addFetchControllers:(id)arg1;
- (id)currentFetchOperation;
- (void)dealloc;
- (id)delayContentsChangeOperation;
- (id)delegate;
- (id)fetchControllers;
- (id)init;
- (id)initWithMediaLibrary:(id)arg1;
- (bool)isPaused;
- (id)mediaLibrary;
- (unsigned long long)mediaLibraryRevision;
- (id)mutableFetchControllers;
- (id)nowPlayingObserver;
- (void)nowPlayingObserver:(id)arg1 latestObservationDidChange:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseFetching;
- (void)removeFetchController:(id)arg1;
- (void)removeFetchControllers:(id)arg1;
- (void)resumeFetching;
- (id)serialFetchOperationQueue;
- (id)serialProcessingDispatchQueue;
- (void)setCurrentFetchOperation:(id)arg1;
- (void)setDelayContentsChangeOperation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setMediaLibraryRevision:(unsigned long long)arg1;
- (void)setMutableFetchControllers:(id)arg1;
- (void)setNowPlayingObserver:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSerialFetchOperationQueue:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setShouldFetchOnResume:(bool)arg1;
- (bool)shouldFetchOnResume;

@end
