
@interface ASKNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {
    NSMutableSet * _knownNetworks;
    NSMutableArray * _knownNetworksReadyHandlers;
    NWNetworkOfInterestManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableSet *knownNetworks;
@property (nonatomic, retain) NSMutableArray *knownNetworksReadyHandlers;
@property (nonatomic, readonly) NWNetworkOfInterestManager *manager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (bool)areKnownNetworksReady;
- (void)dealloc;
- (void)didStartTrackingNOI:(id)arg1;
- (void)didStopTrackingAllNOIs:(id)arg1;
- (void)didStopTrackingNOI:(id)arg1;
- (void)drainKnownNetworksReadyHandlers;
- (id)init;
- (void)investigateNetworksWithCompletionBlock:(id /* block */)arg1;
- (id)knownNetworks;
- (id)knownNetworksReadyHandlers;
- (id)manager;
- (void)performWhenKnownNetworksReady:(id /* block */)arg1;
- (id)queue;
- (void)setKnownNetworksReadyHandlers:(id)arg1;

@end
