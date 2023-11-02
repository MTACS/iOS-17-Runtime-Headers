
@interface HMDAccessorySetupCoordinator : HMFObject <HMFLogging, HMFMessageReceiver> {
    HMMTRAccessoryServerBrowser * _chipAccessoryServerBrowser;
    HMDCHIPDataSource * _chipDataSource;
    NSString * _currentBundleIdentifier;
    id /* block */  _decimalStringRepresentationCHIPAccessorySetupPayloadFactory;
    HMFMessageDispatcher * _messageDispatcher;
    HMFActivity * _metricsActivity;
    id /* block */  _payloadCHIPAccessorySetupPayloadFactory;
    NSMutableDictionary * _stagingRequestsByUUID;
    id /* block */  _urlStringCHIPAccessorySetupPayloadFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser;
@property (readonly) HMDCHIPDataSource *chipDataSource;
@property (copy) NSString *currentBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ decimalStringRepresentationCHIPAccessorySetupPayloadFactory;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (retain) HMFActivity *metricsActivity;
@property (copy) id /* block */ payloadCHIPAccessorySetupPayloadFactory;
@property (readonly) NSMutableDictionary *stagingRequestsByUUID;
@property (readonly) Class superclass;
@property (copy) id /* block */ urlStringCHIPAccessorySetupPayloadFactory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createCHIPSetupAccessoryPayloadWithSetupPayloadDecimalStringRepresentation:(id)arg1 error:(id*)arg2;
- (void)_handleStagedPairingDeviceCredential:(id)arg1 completionHandler:(id /* block */)arg2 forRequest:(id)arg3 activity:(id)arg4;
- (void)_handleStagedPairingProgressState:(long long)arg1 forRequest:(id)arg2;
- (void)_handleStagedPairingReadyToCancel:(id /* block */)arg1 forRequest:(id)arg2;
- (void)_handleStagedPairingServer:(id)arg1 error:(id)arg2 forRequest:(id)arg3 activity:(id)arg4;
- (void)_handleStagedPairingThreadNetworkScanResults:(id)arg1 completionHandler:(id /* block */)arg2 forRequest:(id)arg3 activity:(id)arg4;
- (void)_handleStagedPairingWiFiNetworkScanResults:(id)arg1 completionHandler:(id /* block */)arg2 forRequest:(id)arg3 activity:(id)arg4;
- (id)_setupPayloadWithCHIPSetupPayload:(id)arg1 setupPayloadURL:(id)arg2;
- (id)chipAccessoryServerBrowser;
- (id)chipDataSource;
- (void)configure;
- (id)createCHIPSetupAccessoryPayloadWithSetupPayloadURL:(id)arg1 error:(id*)arg2;
- (id)createSetupAccessoryPayloadWithCHIPSetupPayload:(id)arg1 error:(id*)arg2;
- (id)currentBundleIdentifier;
- (id /* block */)decimalStringRepresentationCHIPAccessorySetupPayloadFactory;
- (void)handleCancelStagedCHIPAccessoryPairingMessage:(id)arg1;
- (void)handleCancelStagingMessage:(id)arg1;
- (void)handleConfirmDeviceCredentialMessage:(id)arg1;
- (void)handleCreateCHIPSetupAccessoryPayloadMessage:(id)arg1;
- (void)handleCreateCHIPSetupPayloadMessage:(id)arg1;
- (void)handleRejectDeviceCredentialMessage:(id)arg1;
- (void)handleSelectThreadNetworkAssociationMessage:(id)arg1;
- (void)handleSelectWiFiNetworkAssociationMessage:(id)arg1;
- (void)handleStageCHIPAccessoryPairingInStepsMessage:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 chipAccessoryServerBrowser:(id)arg3 chipDataSource:(id)arg4;
- (id)logIdentifier;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)metricsActivity;
- (id /* block */)payloadCHIPAccessorySetupPayloadFactory;
- (void)setCurrentBundleIdentifier:(id)arg1;
- (void)setDecimalStringRepresentationCHIPAccessorySetupPayloadFactory:(id /* block */)arg1;
- (void)setMetricsActivity:(id)arg1;
- (void)setPayloadCHIPAccessorySetupPayloadFactory:(id /* block */)arg1;
- (void)setUrlStringCHIPAccessorySetupPayloadFactory:(id /* block */)arg1;
- (id)stagingRequestsByUUID;
- (void)startMetricsForThirdPartyPairing;
- (void)stopMetricsForThirdPartyPairingWithError:(id)arg1;
- (id /* block */)urlStringCHIPAccessorySetupPayloadFactory;
- (id)workQueue;

@end
