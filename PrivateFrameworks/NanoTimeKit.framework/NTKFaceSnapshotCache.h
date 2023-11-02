
@interface NTKFaceSnapshotCache : NSObject {
    NSMapTable * _callCountsByFace;
    NSMutableOrderedSet * _highPriorityRequests;
    NSMutableOrderedSet * _lowPriorityRequests;
    NSMutableDictionary * _requestsBySnapshotKey;
    NTKFaceSnapshotCacheRequest * _servicingRequest;
    NSObject<OS_dispatch_queue> * _snapshotQueue;
    NSMutableDictionary * _snapshots;
}

@property (nonatomic, readonly) NSMapTable *callCountsByFace;
@property (nonatomic, retain) NSMutableOrderedSet *highPriorityRequests;
@property (nonatomic, retain) NSMutableOrderedSet *lowPriorityRequests;
@property (nonatomic, readonly) NSMutableDictionary *requestsBySnapshotKey;
@property (nonatomic, retain) NTKFaceSnapshotCacheRequest *servicingRequest;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *snapshotQueue;
@property (nonatomic, readonly) NSMutableDictionary *snapshots;

+ (id)snapshotCache;

- (void).cxx_destruct;
- (void)_attemptSnapshotForRequest:(id)arg1;
- (void)_invokeCallbacksMatchingRequest:(id)arg1 withSnapshot:(id)arg2;
- (void)_serviceRequestsIfIdle;
- (void)_snapshotProcessInterrupted:(id)arg1;
- (id)cachedSnapshotOfFace:(id)arg1;
- (id)callCountsByFace;
- (void)cancelSnapshotRequest:(id)arg1;
- (void)dealloc;
- (void)fetchSnapshotWithRequest:(id)arg1;
- (id)highPriorityRequests;
- (id)init;
- (id)lowPriorityRequests;
- (id)requestsBySnapshotKey;
- (id)servicingRequest;
- (void)setHighPriorityRequests:(id)arg1;
- (void)setLowPriorityRequests:(id)arg1;
- (void)setServicingRequest:(id)arg1;
- (id)snapshotQueue;
- (id)snapshots;

@end
