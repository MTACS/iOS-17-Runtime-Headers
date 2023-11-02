
@interface HMDAccessoryDiagnosticsManager : HMFObject <HMDNetworkRouterFirewallRuleManagerClient, HMFLogging, HMFMessageReceiver> {
    HMDHAPAccessory * _accessory;
    NSString * _clientIdentifier;
    bool  _cloudFetchCompleted;
    bool  _cloudFetchInProgress;
    HMDAccessoryDiagnosticsSession * _currentDiagnosticsSession;
    HMDService * _diagnosticsService;
    HMDAccessoryDiagnosticsSettings * _diagnosticsSettings;
    bool  _didShutDown;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (readonly) NSString *clientIdentifier;
@property bool cloudFetchCompleted;
@property bool cloudFetchInProgress;
@property (retain) HMDAccessoryDiagnosticsSession *currentDiagnosticsSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDService *diagnosticsService;
@property (retain) HMDAccessoryDiagnosticsSettings *diagnosticsSettings;
@property bool didShutDown;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__fetchCloudDiagnosticsMetadataForAccessory:(id)arg1 completion:(id /* block */)arg2;
- (void)_callCompletionHandler:(id /* block */)arg1 diagnostics:(id)arg2 error:(id)arg3;
- (void)_clearCurrentDiagnosticsSession:(id)arg1;
- (void)_fetchCloudDiagnosticsMetadata;
- (void)_fetchModelDiagnosticsMetadataForAccessory:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_handleDiagnosticsTransferRequest:(id)arg1;
- (void)_handleDiagnosticsTransferRequestWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)_invalidateCloudDiagnosticsMetadata;
- (bool)_isRequestSupported:(id)arg1;
- (void)_notifyClientsOfDiagnosticsTransferSupportUpdated;
- (void)_readDiagnosticsDataWithCloudKitMetadataRequirement:(bool)arg1 completion:(id /* block */)arg2;
- (void)_readRequiredDiagnosticCharacteristicsIfNeededWithCompletion:(id /* block */)arg1;
- (void)_registerForMessagesAndNotifications;
- (void)_shutDown;
- (void)_start;
- (void)_updateDiagnosticSettings;
- (id)accessory;
- (id)attributeDescriptions;
- (id)clientIdentifier;
- (bool)cloudFetchCompleted;
- (bool)cloudFetchInProgress;
- (id)currentDiagnosticsSession;
- (void)dealloc;
- (id)diagnosticsService;
- (id)diagnosticsSettings;
- (bool)didShutDown;
- (void)handleAccessoryConfiguredNotification:(id)arg1;
- (void)handleCharacteristicValueUpdatedNotification:(id)arg1;
- (void)handleCharacteristicsUpdatedNotification:(id)arg1;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 msgDispatcher:(id)arg3 workQueue:(id)arg4;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)setCloudFetchCompleted:(bool)arg1;
- (void)setCloudFetchInProgress:(bool)arg1;
- (void)setCurrentDiagnosticsSession:(id)arg1;
- (void)setDiagnosticsSettings:(id)arg1;
- (void)setDidShutDown:(bool)arg1;
- (void)shutDown;
- (void)start;
- (id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1;
- (id)workQueue;

@end
