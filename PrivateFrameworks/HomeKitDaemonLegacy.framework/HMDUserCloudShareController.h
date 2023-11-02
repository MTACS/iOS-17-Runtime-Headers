
@interface HMDUserCloudShareController : NSObject <HMFLogging, HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSHashTable * _connectedClients;
    NSMutableDictionary * _containerIdToConnectionIdentifierMap;
    <HMDUserCloudShareControllerDelegate> * _delegate;
    NSObject<OS_os_log> * _logger;
    double  _pendingRequestTimeoutInterval;
    HMFTimer * _pendingRequestTimer;
    NSMutableArray * _pendingRequests;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSHashTable *connectedClients;
@property (nonatomic, retain) NSMutableDictionary *containerIdToConnectionIdentifierMap;
@property (readonly, copy) NSString *debugDescription;
@property <HMDUserCloudShareControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double pendingRequestTimeoutInterval;
@property (nonatomic, retain) HMFTimer *pendingRequestTimer;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (readonly) Class superclass;

+ (id)identifierForConnection:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addRequestToPending:(id)arg1;
- (id)_connectionForContainerID:(id)arg1;
- (void)_deregisterXpcClient:(id)arg1;
- (void)_handlePendingRequestTimeouts;
- (void)_handleShareForRemoteClientRequest:(id)arg1;
- (void)_invalidateXpcClient:(id)arg1;
- (void)_registerWithXpcClient:(id)arg1 containerIDs:(id)arg2;
- (void)_removeTimerIfNotNeeded;
- (void)_resumeRequestsForContainerID:(id)arg1 connection:(id)arg2;
- (void)_sendRepairRequest:(id)arg1 toConnection:(id)arg2;
- (void)_sendShareRequest:(id)arg1 toConnection:(id)arg2;
- (void)_startTimerIfNeeded;
- (id)clientQueue;
- (void)configure;
- (id)connectedClients;
- (id)containerIdToConnectionIdentifierMap;
- (id)delegate;
- (void)deregisterXpcClient:(id)arg1;
- (void)handleShareForRemoteClientRequest:(id)arg1 home:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleShareRepairForRemoteClientRequest:(id)arg1 home:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 pendingRequestTimeoutInterval:(double)arg3;
- (void)invalidateXpcClient:(id)arg1;
- (double)pendingRequestTimeoutInterval;
- (id)pendingRequestTimer;
- (id)pendingRequests;
- (void)registerWithXpcClient:(id)arg1 containerIDs:(id)arg2;
- (void)setContainerIdToConnectionIdentifierMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingRequestTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
