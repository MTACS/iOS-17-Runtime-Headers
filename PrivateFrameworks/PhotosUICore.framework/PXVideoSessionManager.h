
@interface PXVideoSessionManager : PXObservable <PXChangeObserver> {
    NSObject<OS_dispatch_queue> * _ivarQueue;
    bool  _ivarQueue_canStoreReusablePlayers;
    PXReusableObjectPool * _ivarQueue_playerPool;
    NSCountedSet * _ivarQueue_sessionCounts;
    NSMutableDictionary * _ivarQueue_sessionsByIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSArray *activeSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isLivePhotoStabilizationEnabled;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoCrossfadeDuration;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleMediaServicesWereResetNotification:(id)arg1;
- (void)_ivarQueue_flushReusablePlayerPool;
- (void)_updateCanStoreReusablePlayers;
- (id)activeSessions;
- (void)checkInVideoSession:(id)arg1;
- (id)checkOutSessionWithContentProvider:(id)arg1;
- (id)contentProviderForAsset:(id)arg1 withOptions:(id)arg2 mediaProvider:(id)arg3 requestURLOnly:(bool)arg4;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)videoSessionForAsset:(id)arg1 withOptions:(id)arg2 mediaProvider:(id)arg3;

@end
