
@interface HMCameraRecordingEventManager : NSObject <HMCameraClipManagerObserver, HMCameraRecordingReachabilityEventManagerObserver, HMFLogging> {
    HMCameraClipManager * _clipManager;
    _HMContext * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
    HMCameraRecordingReachabilityEventManager * _reachabilityEventManager;
}

@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSHashTable *observers;
@property (readonly) HMCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)clipManager;
- (void)clipManager:(id)arg1 didRemoveClipsWithUUIDs:(id)arg2;
- (void)clipManager:(id)arg1 didUpdateClips:(id)arg2;
- (id)context;
- (void)deleteAllEventsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAllEventsWithCompletion:(id /* block */)arg1;
- (void)fetchCountOfAllEventsWithCompletion:(id /* block */)arg1;
- (void)fetchCountOfEventsWithDateInterval:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsWithDateInterval:(id)arg1 limit:(unsigned long long)arg2 shouldOrderAscending:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchEventsWithDateInterval:(id)arg1 quality:(long long)arg2 limit:(unsigned long long)arg3 shouldOrderAscending:(bool)arg4 completion:(id /* block */)arg5;
- (id)initWithContext:(id)arg1 clipManager:(id)arg2 reachabilityEventManager:(id)arg3;
- (id)mergedRecordingEventsWithRecordingEvents1:(id)arg1 recordingEvents2:(id)arg2 limit:(unsigned long long)arg3 shouldOrderAscending:(bool)arg4;
- (void)notifyObserversOfUpdatedEvents:(id)arg1 removedEventsWithUUIDs:(id)arg2;
- (id)observers;
- (void)performCloudPullWithCompletion:(id /* block */)arg1;
- (id)reachabilityEventManager;
- (void)reachabilityEventManager:(id)arg1 didRemoveReachabilityEventsWithUUIDs:(id)arg2;
- (void)reachabilityEventManager:(id)arg1 didUpdateReachabilityEvents:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
