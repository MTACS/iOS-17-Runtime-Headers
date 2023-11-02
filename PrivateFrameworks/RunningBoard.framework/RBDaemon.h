
@interface RBDaemon : NSObject <RBAssertionManagerDelegate, RBBundlePropertiesManagerDelegate, RBDaemonContextProviding, RBPowerAssertionManagerDelegate, RBProcessManagerDelegate> {
    RBAssertionDescriptorValidator * _assertionDescriptorValidator;
    RBAssertionManager * _assertionManager;
    RBAssertionOriginatorPidStore * _assertionOriginatorPidStore;
    RBBundlePropertiesManager * _bundlePropertiesManager;
    RBDomainAttributeManager * _domainAttributeManager;
    RBEntitlementManager * _entitlementManager;
    <RBExtensionDataProviding> * _extensionDataProvider;
    RBHistoricalStatistics * _historicalStatistics;
    RBJetsamPropertyManager * _jetsamPropertyManager;
    RBConnectionListener * _listener;
    RBPowerAssertionManager * _powerAssertionManager;
    RBProcessManager * _processManager;
    RBProcessMonitor * _processMonitor;
    RBProcessReconnectManager * _reconnectManager;
    <RBRequestManaging> * _requestManager;
    RBStateCaptureManager * _stateCaptureManager;
    RBThermalResponseManager * _thermalResponseManager;
    RBThrottleBestEffortNetworkingManager * _throttleBestEffortNetworkingManager;
}

@property (nonatomic, readonly) <RBAssertionManaging> *assertionManager;
@property (nonatomic, readonly) <RBAssertionOriginatorPidPersisting> *assertionOriginatorPidStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <RBDomainAttributeManaging> *domainAttributeManager;
@property (nonatomic, readonly) <RBEntitlementManaging> *entitlementManager;
@property (nonatomic, readonly) <RBExtensionDataProviding> *extensionDataProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <RBHistoricalStatisticsMaintaining> *historicalStatistics;
@property (nonatomic, readonly) <RBJetsamPropertyManaging> *jetsamPropertyManager;
@property (nonatomic, readonly) RBProcess *process;
@property (nonatomic, readonly) <RBProcessManaging> *processManager;
@property (nonatomic, readonly) <RBProcessMonitoring> *processMonitor;
@property (nonatomic, readonly) <RBRequestManaging> *requestManager;
@property (nonatomic, readonly) <RBStateCaptureManaging> *stateCaptureManager;
@property (readonly) Class superclass;

+ (void)run;

- (void).cxx_destruct;
- (id)assertionManager;
- (void)assertionManager:(id)arg1 didAddProcess:(id)arg2 withState:(id)arg3;
- (void)assertionManager:(id)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(id)arg2;
- (void)assertionManager:(id)arg1 didBeginTrackingStateForProcessIdentity:(id)arg2;
- (void)assertionManager:(id)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(id)arg2;
- (void)assertionManager:(id)arg1 didEndTrackingStateForProcessIdentity:(id)arg2;
- (void)assertionManager:(id)arg1 didInvalidateAssertions:(id)arg2;
- (void)assertionManager:(id)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)arg2;
- (void)assertionManager:(id)arg1 didRemoveProcess:(id)arg2 withState:(id)arg3;
- (void)assertionManager:(id)arg1 didResolveSystemState:(id)arg2;
- (void)assertionManager:(id)arg1 didUpdateProcessStates:(id)arg2 completion:(id /* block */)arg3;
- (void)assertionManager:(id)arg1 willExpireAssertionsSoonForProcess:(id)arg2 expirationTime:(double)arg3;
- (void)assertionManager:(id)arg1 willInvalidateAssertion:(id)arg2;
- (id)assertionOriginatorPidStore;
- (void)bundlePropertiesManager:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2;
- (id)debugDescription;
- (id)description;
- (id)domainAttributeManager;
- (id)entitlementManager;
- (id)extensionDataProvider;
- (id)historicalStatistics;
- (id)init;
- (id)jetsamPropertyManager;
- (void)powerAssertionManagerDidAllowIdleSleep:(id)arg1;
- (void)powerAssertionManagerDidPreventIdleSleep:(id)arg1;
- (id)process;
- (id)processManager;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didReconnectProcesses:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (id)processMonitor;
- (id)requestManager;
- (id)stateCaptureManager;

@end
