
@interface HMAccessorySetupCoordinator : NSObject <HMFLogging, HMFMessageReceiver> {
    _HMContext * _context;
    id /* block */  _multiStepStageCompletionHandler;
    <HMAccessorySetupCoordinatorDelegate> * _multiStepStageDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (id)UUID;
+ (id)communicationProtocolForSetupPayloadURLString:(id)arg1;
+ (bool)isCHIPSetupPayloadURL:(id)arg1;
+ (bool)isHAPSetupPayloadURL:(id)arg1;
+ (bool)isSetupPayloadURL:(id)arg1;
+ (bool)isSetupPayloadURLString:(id)arg1;
+ (id)logCategory;
+ (id)setupPayloadURLFromSetupPayloadURLString:(id)arg1;

- (void).cxx_destruct;
- (void)cancelStagedCHIPAccessoryPairingWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelStagingForStagingRequestUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)configure;
- (void)confirmDeviceCredentialForStagingRequestUUID:(id)arg1;
- (void)createCHIPSetupPayloadStringForStagedPairingWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createSetupAccessoryPayloadWithCHIPDecimalStringRepresentation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createSetupAccessoryPayloadWithCHIPSetupCode:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createSetupAccessoryPayloadWithSetupPayloadURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createSetupAccessoryPayloadWithSetupPayloadURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)handleUpdateStagingProgressMessage:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)rejectDeviceCredentialForStagingRequestUUID:(id)arg1;
- (void)selectThreadNetworkAssociation:(id)arg1 forStagingRequestUUID:(id)arg2;
- (void)selectWiFiNetworkAssociation:(id)arg1 forStagingRequestUUID:(id)arg2;
- (void)stageCHIPAccessoryPairingInStepsWithPayload:(id)arg1 delegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stageCHIPAccessoryPairingInStepsWithPayload:(id)arg1 delegate:(id)arg2 scanningNetworks:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
