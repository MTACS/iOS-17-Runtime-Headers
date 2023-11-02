
@interface COStateService : COService <COEndpointMonitorDelegate, COStateAddOnDelegate, COStateManagerServiceInterface> {
    NSDictionary * _connectedClients;
    double  _doorbellDelay;
    COEndpointMonitor * _endpointMonitor;
}

@property (nonatomic, copy) NSDictionary *connectedClients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double doorbellDelay;
@property (nonatomic, copy) COEndpointMonitor *endpointMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_addOnAdded:(id)arg1;
- (void)_addOnRemoved:(id)arg1;
- (bool)_applicableToCluster:(id)arg1;
- (void)_checkinClientWithSuite:(id)arg1 clusters:(id)arg2;
- (void)_cleanupDisconnectedClient:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (void)_informClientsOfUpdates:(id)arg1 removals:(id)arg2 inCluster:(id)arg3;
- (void)_setIsWriting:(bool)arg1 forClient:(id)arg2;
- (id)_stateSetByClientsForAddOn:(id)arg1;
- (id)_stateSetByClientsForSuite:(id)arg1 cluster:(id)arg2;
- (void)addObserverWithPredicate:(id)arg1 suite:(id)arg2 interestClusters:(id)arg3;
- (void)addOn:(id)arg1 receivedUpdates:(id)arg2 removals:(id)arg3;
- (void)compositionForCluster:(id)arg1 withCallback:(id /* block */)arg2;
- (id)connectedClients;
- (double)doorbellDelay;
- (void)doorbellDelayWithCallback:(id /* block */)arg1;
- (void)endpointAvailableInHomeChanged:(bool)arg1;
- (id)endpointMonitor;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;
- (void)removeKeyPaths:(id)arg1 targetClusters:(id)arg2 withCallback:(id /* block */)arg3;
- (void)removeObserverWithPredicate:(id)arg1;
- (void)requestCompositionForCluster:(id)arg1 withCallback:(id /* block */)arg2;
- (void)setConnectedClients:(id)arg1;
- (void)setDictionary:(id)arg1 suite:(id)arg2 interestClusters:(id)arg3 targetCluster:(id)arg4 withCallback:(id /* block */)arg5;
- (void)setDoorbellDelay:(double)arg1;
- (void)setEndpointMonitor:(id)arg1;
- (void)stateForAddOn:(id)arg1 withCallback:(id /* block */)arg2;

@end
