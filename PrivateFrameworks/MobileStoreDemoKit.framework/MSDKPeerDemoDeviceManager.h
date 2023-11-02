
@interface MSDKPeerDemoDeviceManager : NSObject <MSDDemoPeerServiceConsumerProtocol> {
    <MSDKPeerEventsObserverProtocol> * _observer;
    NSMutableDictionary * _peers;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *discoveredPeers;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MSDKPeerEventsObserverProtocol> *observer;
@property (nonatomic, retain) NSMutableDictionary *peers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cleanUpUponXPCDisconnection;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)_setUpXPCConnectionIfNeeded;
- (void)adjustVolumeOnPeer:(id)arg1 toValue:(float)arg2 forCategory:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)attemptPairingWithPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)discoveredPeers;
- (void)enumerateTestScriptsOnPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchDeviceInfoFromPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)initiateAirPlayAssistedFromPeer:(id)arg1 usingParameters:(id)arg2 discoveryMode:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)invokeInputRecoveryOnPeer:(id)arg1 forType:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)launchAppOnPeer:(id)arg1 appIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)launchTestScriptOnPeer:(id)arg1 ofIdentifier:(id)arg2 asRoot:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)launchTestScriptOnPeer:(id)arg1 ofIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)listAppsOnPeer:(id)arg1 appKind:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)listAvailableEnvironmentsOnPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)loadLSMeasurementsOnPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)observer;
- (void)obtainGKMetricsFromPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)obtainGKResultsFromPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)peers;
- (void)providerDidDiscoverNewPeer:(id)arg1;
- (void)providerDidLoseExistingPeerOfID:(id)arg1;
- (void)providerDidUpdateDeviceInfoOnPeerOfID:(id)arg1 withNewProperties:(id)arg2;
- (bool)registerPeerEventsObserver:(id)arg1;
- (void)resetToPassThroughOnPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)retrieveHSCoachingSuggestionFromPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setActiveEnvironmentOnPeer:(id)arg1 environmentID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setObserver:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)startPeerDiscoveryWithCompletion:(id /* block */)arg1;
- (void)subscribeDeviceInfoFromPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)terminateAppOnPeer:(id)arg1 appIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)triggerSnapshotRevertOnPeer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)unregisterPeerEventsObserver;
- (id)xpcConnection;

@end
