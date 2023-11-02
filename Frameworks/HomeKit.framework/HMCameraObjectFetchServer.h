
@interface HMCameraObjectFetchServer : HMFObject <HMFLogging> {
    NSUUID * _clientUUID;
    NSMutableArray * _currentlyBatchedFetchedObjects;
    unsigned long long  _fetchedObjectsBatchLimit;
    unsigned long long  _totalFetchedObjectsCount;
    unsigned long long  _totalFetchedObjectsLimit;
    HMFMessageTransport * _transport;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) bool canHandleMoreFetchedObjects;
@property (readonly, copy) NSUUID *clientUUID;
@property (readonly) NSMutableArray *currentlyBatchedFetchedObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property unsigned long long fetchedObjectsBatchLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property unsigned long long totalFetchedObjectsCount;
@property unsigned long long totalFetchedObjectsLimit;
@property HMFMessageTransport *transport;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_notifyTransport:(id)arg1 ofFetchedObjects:(id)arg2 forClientUUID:(id)arg3 responseHandler:(id /* block */)arg4;
- (bool)canHandleMoreFetchedObjects;
- (id)clientUUID;
- (id)currentlyBatchedFetchedObjects;
- (unsigned long long)fetchedObjectsBatchLimit;
- (void)handleFetchedObject:(id)arg1;
- (id)initWithClientUUID:(id)arg1 transport:(id)arg2 workQueue:(id)arg3;
- (id)initWithFetchMessage:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (void)sendCurrentlyBatchedFetchedObjectsWithCompletion:(id /* block */)arg1;
- (void)setFetchedObjectsBatchLimit:(unsigned long long)arg1;
- (void)setTotalFetchedObjectsCount:(unsigned long long)arg1;
- (void)setTotalFetchedObjectsLimit:(unsigned long long)arg1;
- (void)setTransport:(id)arg1;
- (unsigned long long)totalFetchedObjectsCount;
- (unsigned long long)totalFetchedObjectsLimit;
- (id)transport;
- (id)workQueue;

@end
