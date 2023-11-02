
@interface ASCLockupFetcher : NSObject {
    ASCLazy * _bundleCoordinator;
    <ASCServices> * _connection;
    ASCPendingPromises * _pendingRequests;
    ASCTaskCoordinator * _requestCoordinator;
}

@property (nonatomic, readonly) ASCLazy *bundleCoordinator;
@property (nonatomic, readonly) <ASCServices> *connection;
@property (nonatomic, readonly) ASCPendingPromises *pendingRequests;
@property (nonatomic, readonly) ASCTaskCoordinator *requestCoordinator;

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (id)bundleCoordinator;
- (id)collectionWithRequest:(id)arg1;
- (id)connection;
- (void)daemonConnectionWasLost:(id)arg1;
- (void)daemonDidRebootstrap:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)loadedLockupWithRequest:(id)arg1;
- (id)lockupForBundleID:(id)arg1 withContext:(id)arg2;
- (id)lockupWithRequest:(id)arg1;
- (id)pendingRequests;
- (id)requestCoordinator;
- (void)submitBatchRequest:(id)arg1;

@end
