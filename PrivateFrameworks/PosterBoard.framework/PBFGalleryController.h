
@interface PBFGalleryController : NSObject <BSInvalidatable, PBFDataComponentRefreshStateProviding> {
    NSFileManager * _fileManager;
    NSURL * _galleryCacheURL;
    <PBFGalleryProviding> * _galleryProvider;
    BSAtomicFlag * _invalidationFlag;
    <PBFRuntimeAssertionProviding> * _runtimeAssertionProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    _PBFGalleryEnqueuedPushToProactiveRequest * _stateLock_activePushToProactive;
    _PBFGalleryEnqueuedRefreshGalleryRequest * _stateLock_activeRefreshGalleryRequest;
    _PBFGalleryEnqueuedPushToProactiveRequest * _stateLock_enqueuedPushToProactive;
    NSDictionary * _stateLock_lastSentPosterDescriptorsForExtensionBundleIdentifier;
    _PBFGalleryEnqueuedPushToProactiveRequest * _stateLock_lastSuccessfulPushToProactive;
    ATXFaceGalleryConfiguration * _stateLock_lastUsefulGalleryConfiguration;
    NSDate * _stateLock_lastUsefulGalleryConfigurationPersistDate;
    double  _stateLock_maximumIntervalBetweenProactivePush;
    double  _stateLock_minimumIntervalBetweenProactivePush;
    NSHashTable * _stateLock_observers;
    unsigned long long  _stateLock_proactiveInfractionCount;
    NSDate * _stateLock_timestampOfLastGalleryPushRequestFromProactive;
}

@property (nonatomic, readonly) ATXFaceGalleryConfiguration *currentGalleryConfiguration;
@property (nonatomic, readonly) unsigned long long currentProactiveInfractionCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *galleryCacheURL;
@property (nonatomic, readonly) <PBFGalleryProviding> *galleryProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastUpdateDate;
@property (nonatomic) double maximumIntervalBetweenProactivePush;
@property (nonatomic) double minimumIntervalBetweenProactivePush;
@property (nonatomic, readonly) <PBFRuntimeAssertionProviding> *runtimeAssertionProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pushFaceGalleryConfigurationUpdate:(id)arg1 options:(unsigned long long)arg2 fetchError:(id)arg3 sessionId:(id)arg4 completion:(id /* block */)arg5;
- (void)_stateLock_enqueueGalleryConfigurationUpdateWithOptions:(unsigned long long)arg1 powerLogReason:(long long)arg2 sessionId:(id)arg3 completion:(id /* block */)arg4;
- (void)_stateLock_enqueuePushUpdatedPosterDescriptors:(id)arg1 reason:(id)arg2 force:(bool)arg3 sessionId:(id)arg4 completion:(id /* block */)arg5;
- (bool)_stateLock_executeEnqueuedPushToProactive:(id)arg1;
- (void)_stateLock_flushProactiveUpdateQueue;
- (bool)_stateLock_isGalleryStale;
- (void)_stateLock_loadPersistedGalleryConfigurationWithLastUpdateDate:(out id*)arg1 error:(out id*)arg2;
- (void)_stateLock_notifyGalleryControllerDidUpdateCurrentGalleryConfiguration:(id)arg1;
- (void)_stateLock_notifyGalleryControllerWillUpdateGalleryConfiguration;
- (bool)_stateLock_persistGalleryConfiguration:(id)arg1 lastUpdateDate:(out id*)arg2 sessionId:(id)arg3 error:(out id*)arg4;
- (void)addObserver:(id)arg1;
- (id)currentGalleryConfiguration;
- (unsigned long long)currentProactiveInfractionCount;
- (void)dealloc;
- (id)determineRefreshStateWithContext:(id)arg1;
- (void)enqueueGalleryConfigurationUpdateWithOptions:(unsigned long long)arg1 powerLogReason:(long long)arg2 completion:(id /* block */)arg3;
- (id)galleryCacheURL;
- (id)galleryProvider;
- (id)galleryProviderWithError:(out id*)arg1;
- (id)initWithGalleryCacheURL:(id)arg1 galleryProvider:(id)arg2 runtimeAssertionProvider:(id)arg3;
- (id)initWithGalleryCacheURL:(id)arg1 runtimeAssertionProvider:(id)arg2;
- (void)invalidate;
- (id)lastUpdateDate;
- (double)maximumIntervalBetweenProactivePush;
- (double)minimumIntervalBetweenProactivePush;
- (void)pushUpdatedPosterDescriptors:(id)arg1 reason:(id)arg2 force:(bool)arg3 completion:(id /* block */)arg4;
- (void)removeObserver:(id)arg1;
- (id)runtimeAssertionProvider;
- (id)runtimeAssertionProviderWithError:(out id*)arg1;
- (void)setMaximumIntervalBetweenProactivePush:(double)arg1;
- (void)setMinimumIntervalBetweenProactivePush:(double)arg1;
- (void)updateGallery:(id)arg1 completion:(id /* block */)arg2;

@end
