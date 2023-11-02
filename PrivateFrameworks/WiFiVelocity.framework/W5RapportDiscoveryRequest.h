
@interface W5RapportDiscoveryRequest : NSObject <W5RapportRequest, W5RapportRequestTaskCreation> {
    NSMutableArray * _cachedPeerResult;
    NSDictionary * _configuration;
    RPCompanionLinkClient * _discoveryClient;
    NSObject<OS_dispatch_group> * _group;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _timeout;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void)beginPeerDiscovery;
- (id)configuration;
- (void)configureDiscoveryClientAndActivate;
- (id)init;
- (void)invalidateDiscoveryClient;
- (void)launchTaskWithQueue:(id)arg1 reply:(id /* block */)arg2;
- (void)registerCallbacksAndActivate;
- (void)setConfiguration:(id)arg1;

@end
