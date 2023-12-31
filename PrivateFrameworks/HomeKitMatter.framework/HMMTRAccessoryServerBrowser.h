
@interface HMMTRAccessoryServerBrowser : HAPAccessoryServerBrowser <CBCentralManagerDelegate, HAPPowerManagerProtocol, HMFLogging, HMFTimerDelegate, HMMTRStorageDelegate> {
    <HMMTRAccessoryServerBrowserDelegate> * _accessoryServerBrowserDelegate;
    HMMTRAttestationDataStore * _attestationDataStore;
    HMMTRAttestationStatus * _attestationStatus;
    bool  _bleScanActive;
    NSObject<OS_nw_browser> * _bonjourBrowser;
    NSMutableArray * _bonjourBrowserChanges;
    unsigned long long  _browserState;
    CBCentralManager * _cbCentral;
    HMMTRAccessoryServer * _commissioneeAccessoryServer;
    NSNumber * _configuredPreWarmTargetFabricID;
    NSNumber * _currentFabricID;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    MTRDeviceController * _deviceController;
    NSDate * _diagnosticTimerStart;
    HMFTimer * _diagnosticsTimer;
    NSMutableSet * _discoveredAccessoryServers;
    NSMutableArray * _matterStackRestartHandlers;
    NSDictionary * _matterStorageItems;
    HMMTROperationalCertificateIssuer * _nocIssuer;
    HMMTRMatterKeypair * _nocSigner;
    NSMutableSet * _nodesAddedToHome;
    HMMTRMatterKeypair * _operationalKeyPair;
    HMMTROTAProviderDelegate * _otaProviderDelegate;
    bool  _pendingMatterStackRestart;
    HAPPowerManager * _powerManager;
    bool  _preWarmTargetIsSystemCommissionerFabric;
    NSNumber * _preWarmedFabricID;
    HMMTRRegulatoryInfo * _regulatoryInfo;
    bool  _requestedBLEScan;
    HMMTRResidentStateManager * _residentStateManager;
    unsigned long long  _restartCount;
    HMMTRSoftwareUpdateProvider * _softwareUpdateProvider;
    NSMutableSet * _stagedAccessoryServers;
    HMMTRStorage * _storage;
    NSNumber * _systemCommissionerFabricID;
    bool  _systemCommissionerFeatureEnabled;
    bool  _systemCommissionerMode;
    HMMTRMatterKeypair * _systemCommissionerNocSigner;
    HMMTRSystemCommissionerPairingManager * _systemCommissionerPairingManager;
    HMMTRUIDialogPresenter * _uiDialogPresenter;
    bool  _userOwnsConfiguredPreWarmTargetFabric;
    HMMTRVendorMetadataStore * _vendorMetadataStore;
}

@property (nonatomic) <HMMTRAccessoryServerBrowserDelegate> *accessoryServerBrowserDelegate;
@property (readonly) NSData *appleHomeFabricRootPublicKey;
@property (nonatomic, readonly) HMMTRAttestationDataStore *attestationDataStore;
@property (nonatomic, readonly) HMMTRAttestationStatus *attestationStatus;
@property (nonatomic) bool bleScanActive;
@property (nonatomic, retain) NSObject<OS_nw_browser> *bonjourBrowser;
@property (nonatomic, retain) NSMutableArray *bonjourBrowserChanges;
@property unsigned long long browserState;
@property (nonatomic, retain) CBCentralManager *cbCentral;
@property (nonatomic, retain) HMMTRAccessoryServer *commissioneeAccessoryServer;
@property (nonatomic, retain) NSNumber *configuredPreWarmTargetFabricID;
@property (nonatomic, retain) NSNumber *currentFabricID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAPAccessoryServerBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) MTRDeviceController *deviceController;
@property (nonatomic, retain) NSDate *diagnosticTimerStart;
@property (nonatomic, retain) HMFTimer *diagnosticsTimer;
@property (nonatomic, readonly) NSMutableSet *discoveredAccessoryServers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentDevicePrimaryResident;
@property (nonatomic, readonly) NSMutableArray *matterStackRestartHandlers;
@property (retain) NSDictionary *matterStorageItems;
@property (nonatomic, readonly) HMMTROperationalCertificateIssuer *nocIssuer;
@property (nonatomic, retain) HMMTRMatterKeypair *nocSigner;
@property (nonatomic, retain) NSMutableSet *nodesAddedToHome;
@property (nonatomic, retain) HMMTRMatterKeypair *operationalKeyPair;
@property (nonatomic, readonly) HMMTROTAProviderDelegate *otaProviderDelegate;
@property bool pendingMatterStackRestart;
@property (nonatomic, retain) HAPPowerManager *powerManager;
@property bool preWarmTargetIsSystemCommissionerFabric;
@property (nonatomic, retain) NSNumber *preWarmedFabricID;
@property (nonatomic, readonly) HMMTRRegulatoryInfo *regulatoryInfo;
@property (nonatomic) bool requestedBLEScan;
@property (nonatomic, readonly) HMMTRResidentStateManager *residentStateManager;
@property unsigned long long restartCount;
@property (nonatomic, readonly) HMMTRSoftwareUpdateProvider *softwareUpdateProvider;
@property (nonatomic, readonly) NSMutableSet *stagedAccessoryServers;
@property (nonatomic, readonly) HMMTRStorage *storage;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *systemCommissionerFabricID;
@property (readonly) NSData *systemCommissionerFabricRootPublicKey;
@property (getter=isSystemCommissionerFeatureEnabled, nonatomic, readonly) bool systemCommissionerFeatureEnabled;
@property (getter=isSystemCommissionerMode, readonly) bool systemCommissionerMode;
@property (nonatomic, retain) HMMTRMatterKeypair *systemCommissionerNocSigner;
@property (nonatomic, readonly) HMMTRSystemCommissionerPairingManager *systemCommissionerPairingManager;
@property (nonatomic, readonly) HMMTRUIDialogPresenter *uiDialogPresenter;
@property bool userOwnsConfiguredPreWarmTargetFabric;
@property (nonatomic, readonly) HMMTRVendorMetadataStore *vendorMetadataStore;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_accessoryServerForSystemCommissionerDeviceWithNodeID:(id)arg1 matterStackRestartHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_allServers;
- (void)_callMatterStackRestartHandlers;
- (void)_cleanupDisappearedServersOverBLE;
- (void)_cleanupDiscoveredServers;
- (void)_cleanupDiscoveredServersWithCompletion:(id /* block */)arg1;
- (void)_cleanupLocallyDiscoveredServers;
- (void)_cleanupStagedServers;
- (void)_clearLocallyDiscoveredFlags;
- (id)_createCHIPAccessoryForNodeID:(unsigned long long)arg1;
- (id)_createCHIPAccessoryForNodeID:(unsigned long long)arg1 ifPaired:(bool)arg2 fatalError:(id*)arg3;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_deleteOldPairings;
- (id)_discoveredServerWithDiscriminator:(id)arg1 vendorID:(id)arg2 productID:(id)arg3;
- (int)_discriminator:(id*)arg1 vendorID:(id*)arg2 productID:(id*)arg3 CM:(id*)arg4 fromTXTRecord:(id)arg5;
- (void)_fetchDevicePairingsForSystemCommissionerDeviceWithNodeID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_fetchDevicePairingsForSystemCommissionerDeviceWithNodeID:(id)arg1 matterStackRestartHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)_generateNodeID;
- (unsigned long long)_getRandomFabricId;
- (id)_getSystemCommissionerFabricRootCertificateWithIndex:(id)arg1 ipk:(id*)arg2 controllerNodeID:(id*)arg3;
- (void)_handleAddOrUpdateWithDiscriminator:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 overBLE:(bool)arg4;
- (void)_handleBLEAddOrUpdateWithDiscriminator:(id)arg1 vendorID:(id)arg2 productID:(id)arg3;
- (void)_handleBonjourAddOrUpdateWithDiscriminator:(id)arg1 vendorID:(id)arg2 productID:(id)arg3;
- (void)_handleBonjourBrowserBatchResults;
- (void)_handleBonjourRemoveWithDiscriminator:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 txtRecordRemove:(bool)arg4;
- (int)_initializeAndStartBonjourBrowser;
- (void)_invalidateAccessoryServer:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_isDevicePaired:(unsigned long long)arg1;
- (bool)_isSystemCommissionerFeaturePreferenceEnabled;
- (void)_preWarmCommissioningSession;
- (void)_prepareForPairingWithSetupPayload:(id)arg1 fabricID:(id)arg2 hasPriorSuccessfulPairing:(bool)arg3 category:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_prepareServerForBLEDiscovery;
- (void)_queueBonjourBrowserOldResult:(id)arg1 newResult:(id)arg2;
- (void)_reenumeratePairedDevices;
- (void)_reportAccessoriesKnownToSystemCommissioner;
- (void)_restartMatterStackWithFabricID:(id)arg1;
- (id)_serverFromMTSDevicePairing:(id)arg1;
- (void)_setReachability:(bool)arg1 forServer:(id)arg2;
- (void)_setupPairedDevices;
- (void)_stageAccessoryServerWithSetupPayload:(id)arg1 fabricID:(id)arg2 deviceCredentialHandler:(id /* block */)arg3 wifiScanResultsHandler:(id /* block */)arg4 threadScanResultsHandler:(id /* block */)arg5 readyToCancelHandler:(id /* block */)arg6 progressUpdateHandler:(id /* block */)arg7 scanningNetworks:(bool)arg8 hasPriorSuccessfulPairing:(bool)arg9 category:(id)arg10 completionHandler:(id /* block */)arg11;
- (void)_startChipStackWithFabricID:(id)arg1;
- (void)_stopMatterStack;
- (void)_updateCentralManager;
- (void)_updateLocallyDiscoveredServerPairedStates;
- (id)_updateSystemCommissionerFabricIDAndGetIndex;
- (id)accessoryServerBrowserDelegate;
- (void)accessoryServerForSystemCommissionerDeviceWithNodeID:(id)arg1 matterStackRestartHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)accessoryServerWithNodeID:(id)arg1;
- (void)announceOtaProviderForNodeID:(id)arg1;
- (id)appleHomeFabricRootPublicKey;
- (id)attestationDataStore;
- (id)attestationStatus;
- (bool)bleScanActive;
- (id)bonjourBrowser;
- (id)bonjourBrowserChanges;
- (unsigned long long)browserState;
- (id)cbCentral;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)cleanUpStaleSystemCommissionerPairingsWithNewlyPairedUUID:(id)arg1 vendorID:(id)arg2 productID:(id)arg3 serialNumber:(id)arg4 setupPayload:(id)arg5;
- (void)clearPreWarmTarget;
- (id)commissioneeAccessoryServer;
- (void)commitStagedAccessoryServer:(id)arg1;
- (id)configuredPreWarmTargetFabricID;
- (void)createNewFabricDataForFabricID:(id)arg1 completion:(id /* block */)arg2;
- (void)createNewFabricIDWithCompletion:(id /* block */)arg1;
- (void)createNewSystemCommissionerFabricNodeIDWithCompletion:(id /* block */)arg1;
- (id)createSystemCommissionerFabricNOCWithSigningCertificate:(id)arg1 operationalPublicKey:(struct __SecKey { }*)arg2 fabricID:(id)arg3 nodeID:(id)arg4 caseAuthenticatedTags:(id)arg5 error:(id*)arg6;
- (id)currentFabricID;
- (id)delegate;
- (id)delegateQueue;
- (id)deviceController;
- (void)devicePowerStateChanged:(unsigned long long)arg1;
- (id)diagnosticTimerStart;
- (id)diagnosticsTimer;
- (void)discardStagedAccessoryServerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)discoveredAccessoryServers;
- (void)fetchAllDevicePairingsForSystemCommissionerDeviceWithNodeID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCommissioningCertificatesForAccessoryWithOperationalPublicKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCommissioningCertificatesForSharedAdminWithDeviceNodeID:(id)arg1 publicKey:(id)arg2 fabricID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchCommissioningCertificatesForSharedAdminWithDeviceNodeID:(id)arg1 sharedUserIdentifier:(id)arg2 publicKey:(id)arg3 fabricID:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)fetchCommissioningCertificatesFromOwnerForPublicKey:(id)arg1 fabricID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchOrCreateSystemCommissionerRootCertificateWithCompletion:(id /* block */)arg1;
- (void)fetchPreferredThreadCredentialsForServer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)finishSystemCommissionerFabricCommissioningWithFabricID:(id)arg1 rootCACert:(id)arg2 ipk:(id)arg3 controllerNodeID:(id)arg4 commissoneeNodeID:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
- (void)handleDeviceNoLongerPrimaryResidentWithCompletion:(id /* block */)arg1;
- (void)handleHomeAddedAccessoryWithNodeID:(id)arg1;
- (void)handlePairingCompletionForAccessoryWithNodeID:(id)arg1 fabricID:(id)arg2 vendorID:(id)arg3 productID:(id)arg4 configNumber:(id)arg5 category:(id)arg6 topology:(id)arg7;
- (void)handlePrimaryResidentDataReady;
- (void)handleSystemKeychainStoreUpdatedNotification:(id)arg1;
- (id)initWithQueue:(id)arg1 storeDirectoryURL:(id)arg2;
- (void)invalidateAccessoryServer:(id)arg1;
- (void)invalidateAccessoryServer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)invalidateAllDiscoveredServers;
- (void)invalidateAllDiscoveredServersWithCompletion:(id /* block */)arg1;
- (bool)isCurrentDevicePrimaryResident;
- (bool)isSystemCommissionerFeatureEnabled;
- (bool)isSystemCommissionerMode;
- (long long)linkType;
- (id)logIdentifier;
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)matterStackRestartHandlers;
- (id)matterStorageItems;
- (id)nocIssuer;
- (id)nocSigner;
- (id)nodeIDForFabricID:(id)arg1 deviceIdentifier:(id)arg2;
- (id)nodesAddedToHome;
- (void)notifyPairingCompletionForAccessoryServer:(id)arg1;
- (void)openCommissioningWindowForSystemCommissionerDeviceWithNodeID:(id)arg1 duration:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)operationalKeyPair;
- (id)otaProviderDelegate;
- (bool)pendingMatterStackRestart;
- (id)powerManager;
- (bool)preWarmTargetIsSystemCommissionerFabric;
- (id)preWarmedFabricID;
- (void)prepareForPairingWithSetupPayload:(id)arg1 fabricID:(id)arg2 owner:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)readCommissioningWindowStatusForSystemCommissionerDeviceWithNodeID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)regulatoryInfo;
- (void)removeAllDevicePairingsForSystemCommissionerDeviceWithNodeID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDevicePairingFabricForSystemCommissionerDeviceWithNodeID:(id)arg1 fabric:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSystemCommissionerFabricAccessoryWithNodeID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestedBLEScan;
- (id)residentStateManager;
- (unsigned long long)restartCount;
- (void)restartMatterStackForSystemCommissionerFabricWithCompletionHandler:(id /* block */)arg1;
- (void)restartMatterStackWithFabricID:(id)arg1;
- (void)restartMatterStackWithFabricID:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccessoryServerBrowserDelegate:(id)arg1;
- (void)setBleScanActive:(bool)arg1;
- (void)setBonjourBrowser:(id)arg1;
- (void)setBonjourBrowserChanges:(id)arg1;
- (void)setBrowserState:(unsigned long long)arg1;
- (void)setCbCentral:(id)arg1;
- (void)setCommissioneeAccessoryServer:(id)arg1;
- (void)setConfiguredPreWarmTargetFabricID:(id)arg1;
- (void)setCurrentFabricID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiagnosticTimerStart:(id)arg1;
- (void)setDiagnosticsTimer:(id)arg1;
- (void)setMatterStorageItems:(id)arg1;
- (void)setNocSigner:(id)arg1;
- (void)setNodesAddedToHome:(id)arg1;
- (void)setOperationalKeyPair:(id)arg1;
- (void)setPendingMatterStackRestart:(bool)arg1;
- (void)setPowerManager:(id)arg1;
- (void)setPreWarmTargetIsSystemCommissionerFabric:(bool)arg1;
- (void)setPreWarmTargetToFabricWithID:(id)arg1 isOwner:(bool)arg2;
- (void)setPreWarmTargetToSystemCommissionerFabric;
- (void)setPreWarmedFabricID:(id)arg1;
- (void)setRequestedBLEScan:(bool)arg1;
- (void)setRestartCount:(unsigned long long)arg1;
- (void)setSystemCommissionerFabricID:(id)arg1;
- (void)setSystemCommissionerMode:(bool)arg1;
- (void)setSystemCommissionerNocSigner:(id)arg1;
- (void)setUserOwnsConfiguredPreWarmTargetFabric:(bool)arg1;
- (void)setupPairedDevices;
- (id)softwareUpdateProvider;
- (void)stageAccessoryServerWithSetupPayload:(id)arg1 fabricID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stageAccessoryServerWithSetupPayload:(id)arg1 fabricID:(id)arg2 deviceCredentialHandler:(id /* block */)arg3 wifiScanResultsHandler:(id /* block */)arg4 threadScanResultsHandler:(id /* block */)arg5 readyToCancelHandler:(id /* block */)arg6 progressUpdateHandler:(id /* block */)arg7 scanningNetworks:(bool)arg8 completionHandler:(id /* block */)arg9;
- (void)stageAccessoryServerWithSetupPayload:(id)arg1 hasPriorSuccessfulPairing:(bool)arg2 category:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)stagedAccessoryServerWithIdentifier:(id)arg1;
- (id)stagedAccessoryServers;
- (void)startBluetoothScan;
- (void)startDiscoveringAccessoryServers;
- (void)stopBluetoothScan;
- (void)stopDiscoveringAccessoryServers;
- (void)stopMatterStackWithCompletion:(id /* block */)arg1;
- (id)storage;
- (void)storageDidBecomeAvailable:(id)arg1;
- (void)storageDidUpdateData:(id)arg1 isLocalChange:(bool)arg2;
- (id)systemCommissionerFabricID;
- (id)systemCommissionerFabricRootPublicKey;
- (bool)systemCommissionerMode;
- (id)systemCommissionerNocSigner;
- (id)systemCommissionerPairingManager;
- (void)timerDidFire:(id)arg1;
- (id)uiDialogPresenter;
- (bool)userOwnsConfiguredPreWarmTargetFabric;
- (id)vendorMetadataStore;

@end
