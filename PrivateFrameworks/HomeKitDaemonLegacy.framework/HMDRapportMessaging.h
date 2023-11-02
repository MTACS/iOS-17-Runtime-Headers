
@interface HMDRapportMessaging : HMFObject <HMFLogging> {
    <HMDRapportMessagingClientFactory> * _clientFactory;
    NSMutableDictionary * _deviceClients;
    RPCompanionLinkClient * _discoveryClient;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMDRapportMessagingReachabilityDelegate> * _reachabilityDelegate;
    id /* block */  _requestHandler;
    NSMutableArray * _requestQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HMDRapportMessagingReachabilityDelegate> *reachabilityDelegate;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_clientForIDSIdentifier:(id)arg1 withDevice:(id)arg2;
- (void)_completeQueuedRequests;
- (void)_configureDiscoveryClientWithCompletion:(id /* block */)arg1;
- (id)_createRapportClientForDevice:(id)arg1;
- (void)_handleRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_invalidateDestinationDeviceWithIDSIdentifier:(id)arg1;
- (void)_queueRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_updateDevice:(id)arg1 reachable:(bool)arg2;
- (void)configureDiscoveryClientWithCompletion:(id /* block */)arg1;
- (id)initWithClientFactory:(id)arg1;
- (id)reachabilityDelegate;
- (void)registerRequestHandler:(id /* block */)arg1;
- (void)sendRequest:(id)arg1 destinationID:(id)arg2 options:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)setReachabilityDelegate:(id)arg1;

@end
