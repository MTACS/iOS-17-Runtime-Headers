
@interface COCapabilityService : COService <COCapabilityAddOnDelegate, COCapabilityManagerServiceInterface> {
    NSDictionary * _availableCapabilities;
    NSDictionary * _capabilities;
    NSDictionary * _observers;
    NSSet * _supportedCapabilities;
}

@property (nonatomic, copy) NSDictionary *availableCapabilities;
@property (nonatomic, copy) NSDictionary *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *observers;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSSet *supportedCapabilities;

+ (id)serviceWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_addOnAdded:(id)arg1;
- (void)_addOnRemoved:(id)arg1;
- (bool)_applicableToCluster:(id)arg1;
- (void)_clientLost:(id)arg1;
- (void)_cluster:(id)arg1 availableCapabilitiesChanged:(id)arg2;
- (void)_configureServiceInterfacesOnConnection:(id)arg1;
- (void)_diffCapabilities:(id)arg1 withCapabilities:(id)arg2 result:(id /* block */)arg3;
- (void)_effectiveCapabilitiesForCluster:(id)arg1 changedFrom:(id)arg2 to:(id)arg3;
- (id)_getEffectiveCapabilitiesForCluster:(id)arg1;
- (bool)_isCapabilityAvailable:(id)arg1 inCluster:(id)arg2;
- (bool)_isCapabilitySupported:(id)arg1;
- (void)_notifyClient:(id)arg1 availability:(bool)arg2 ofCapability:(id)arg3 inCluster:(id)arg4;
- (void)_notifyObserversAvailabilityChangedOfCapability:(id)arg1 inCluster:(id)arg2;
- (id)_remoteInterfaceForClient:(id)arg1 withErrorHandler:(id /* block */)arg2;
- (void)_updateSupportedCapabilities;
- (void)addObserverForCapability:(id)arg1 inCluster:(id)arg2;
- (void)addOn:(id)arg1 availableCapabilitiesChanged:(id)arg2;
- (id)availableCapabilities;
- (id)capabilities;
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;
- (void)joinClusters:(id)arg1 usingMeshController:(id)arg2 withClusterIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)observers;
- (void)registerCapability:(id)arg1;
- (void)removeObserverForCapability:(id)arg1 inCluster:(id)arg2;
- (void)setAvailableCapabilities:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSupportedCapabilities:(id)arg1;
- (id)supportedCapabilities;
- (void)unregisterCapability:(id)arg1;

@end
