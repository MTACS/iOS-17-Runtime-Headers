
@interface HMCameraClipManager : NSObject <HMFLogging, HMFMessageReceiver> {
    NSMutableDictionary * _clipsByFetchUUID;
    _HMContext * _context;
    id /* block */  _fetchClientFactory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNotificationCenter * _notificationCenter;
    NSHashTable * _observers;
    NSUUID * _profileUniqueIdentifier;
    NSMutableDictionary * _significantEventsByFetchUUID;
    NSMutableDictionary * _videoAssetContextsByClipUUID;
}

@property (readonly) NSMutableDictionary *clipsByFetchUUID;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ fetchClientFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSHashTable *observers;
@property (readonly, copy) NSUUID *profileUniqueIdentifier;
@property (readonly) NSMutableDictionary *significantEventsByFetchUUID;
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *videoAssetContextsByClipUUID;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)clipsByFetchUUID;
- (void)configure;
- (id)context;
- (void)dealloc;
- (void)deleteAllClipsWithCompletionHandler:(id /* block */)arg1;
- (void)deleteClipWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)donateClipsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAllClipsWithCompletion:(id /* block */)arg1;
- (void)fetchAllSignificantEventsWithCompletion:(id /* block */)arg1;
- (id /* block */)fetchClientFactory;
- (void)fetchClipForSignificantEventWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchClipWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchClipsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchClipsWithDateInterval:(id)arg1 quality:(long long)arg2 limit:(unsigned long long)arg3 shouldOrderAscending:(bool)arg4 completion:(id /* block */)arg5;
- (void)fetchCountOfAllClipsWithCompletion:(id /* block */)arg1;
- (void)fetchCountOfClipsWithDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCountOfClipsWithDateInterval:(id)arg1 quality:(long long)arg2 completion:(id /* block */)arg3;
- (void)fetchFaceCropDataRepresentationForSignificantEventWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchFaceCropURLForSignificantEventWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchHeroFrameDataRepresentationForClipWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchHeroFrameURLOfClipWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSignificantEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchSignificantEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchSignificantEventsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchVideoSegmentsAssetContextForClip:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDaemonReconnectedNotification:(id)arg1;
- (void)handleDidChangeClipsMessage:(id)arg1;
- (void)handleDidChangeSignificantEventsMessage:(id)arg1;
- (void)handleFaceMisclassificationForSignificantEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)importClipsWithImportData:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContext:(id)arg1 profileUniqueIdentifier:(id)arg2;
- (id)initWithContext:(id)arg1 profileUniqueIdentifier:(id)arg2 notificationCenter:(id)arg3;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationCenter;
- (id)observers;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (id)profileUniqueIdentifier;
- (void)removeObserver:(id)arg1;
- (void)setFetchClientFactory:(id /* block */)arg1;
- (id)significantEventsByFetchUUID;
- (void)subscribe;
- (void)unsubscribe;
- (void)updateVideoSegmentsAssetContextForClip:(id)arg1;
- (id)videoAssetContextsByClipUUID;
- (id)videoSegmentsAssetContextForClip:(id)arg1;

@end
