
@interface IDSService : NSObject <HMDIDSService> {
    _IDSService * _internal;
}

@property (nonatomic, readonly) NSArray *URIs;
@property (nonatomic, readonly) _IDSService *_internal;
@property (nonatomic, readonly, copy) NSSet *accounts;
@property (nonatomic, readonly) bool canSend;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (nonatomic, readonly) NSArray *devicesExcludingHomePods;
@property (readonly) unsigned long long hash;
@property (getter=hmd_isActive, nonatomic, readonly) bool hmd_active;
@property (readonly, copy) NSArray *hmd_handles;
@property (readonly, copy) HMDAccountHandle *hmd_preferredHandle;
@property (nonatomic, readonly) NSArray *hmu_accessories;
@property (nonatomic, readonly) NSArray *hmu_appleTVs;
@property (nonatomic, readonly) NSArray *hmu_homePods;
@property (nonatomic, readonly, retain) IDSAccount *iCloudAccount;
@property (nonatomic, readonly, copy) NSSet *internalAccounts;
@property (nonatomic, readonly) NSDictionary *pseudonymURIMap;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *uniqueIdentifiersForDevicesExcludingAppleAccessories;

// Image: /System/Library/PrivateFrameworks/IDS.framework/IDS

+ (bool)checkMessageSize:(unsigned long long)arg1 priority:(long long)arg2;
+ (id)removeSentinelFromAliases:(id)arg1;
+ (void)serviceWithIdentifier:(id)arg1 commands:(id)arg2 manuallyAckMessages:(bool)arg3 completion:(id /* block */)arg4;
+ (void)serviceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)URIs;
- (id)_accountWithAlias:(id)arg1;
- (id)_internal;
- (id)accountMatchingSim:(id)arg1;
- (id)accountMatchingSimIdentifier:(id)arg1;
- (id)accounts;
- (void)activateAlias:(id)arg1;
- (void)activateAliases:(id)arg1;
- (id)activeAliases;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addDelegate:(id)arg1 withDelegateProperties:(id)arg2 queue:(id)arg3;
- (id)aliases;
- (bool)canSend;
- (bool)cancelIdentifier:(id)arg1 error:(id*)arg2;
- (bool)cancelMessageWithOptions:(id)arg1 destination:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
- (bool)cancelMessageWithOptions:(id)arg1 identifier:(id*)arg2 error:(id*)arg3;
- (bool)cancelOpportunisticDataWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)datagramChannelForSessionDestination:(id)arg1 error:(id*)arg2;
- (id)datagramChannelForSessionDestination:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)datagramChannelForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (id)datagramConnectionForSessionDestination:(id)arg1 error:(id*)arg2;
- (id)datagramConnectionForSessionDestination:(id)arg1 uid:(unsigned int)arg2 error:(id*)arg3;
- (id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (void)deactivateAlias:(id)arg1;
- (void)deactivateAliases:(id)arg1;
- (void)dealloc;
- (id)deviceForFromID:(id)arg1;
- (id)deviceForUniqueID:(id)arg1;
- (id)devices;
- (id)devicesForBTUUID:(id)arg1;
- (id)firstRoutableInternetDestinationForSelf;
- (bool)getProgressUpdateForIdentifier:(id)arg1 error:(id*)arg2;
- (id)iCloudAccount;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 commands:(id)arg2;
- (id)initWithService:(id)arg1 commands:(id)arg2 manuallyAckMessages:(bool)arg3;
- (id)initWithService:(id)arg1 manuallyAckMessages:(bool)arg2;
- (id)initWithService:(id)arg1 serviceDomain:(id)arg2;
- (id)internal;
- (id)internalAccounts;
- (bool)isPretendingToBeFull;
- (id)linkedDeviceForFromID:(id)arg1 withRelationship:(long long)arg2;
- (id)linkedDevicesWithRelationship:(long long)arg1;
- (long long)maxEffectivePayloadSize;
- (long long)maxHomeKitPayloadSize;
- (void)performGroupTask:(id /* block */)arg1;
- (SEL)protobufActionForIncomingRequestsOfType:(unsigned short)arg1;
- (SEL)protobufActionForIncomingResponsesOfType:(unsigned short)arg1;
- (void)provisionPseudonymForURI:(id)arg1 withProperties:(id)arg2 completion:(id /* block */)arg3;
- (void)provisionPseudonymForURI:(id)arg1 withProperties:(id)arg2 requestProperties:(id)arg3 completion:(id /* block */)arg4;
- (void)provisionPseudonymWithProperties:(id)arg1 completion:(id /* block */)arg2;
- (void)provisionPseudonymWithProperties:(id)arg1 requestProperties:(id)arg2 completion:(id /* block */)arg3;
- (id)pseudonymForPseudonymURI:(id)arg1;
- (id)pseudonymPropertiesWithFeatureID:(id)arg1 expiryDurationInSeconds:(double)arg2;
- (id)pseudonymPropertiesWithFeatureID:(id)arg1 scopeID:(id)arg2 expiryDurationInSeconds:(double)arg3;
- (id)pseudonymURIMap;
- (id)pseudonymsForMaskedURI:(id)arg1;
- (id)pseudonymsForMaskedURI:(id)arg1 matchingProperties:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)renewPseudonym:(id)arg1 forUpdatedDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)renewPseudonym:(id)arg1 forUpdatedExpiryEpoch:(double)arg2 completion:(id /* block */)arg3;
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 withCompletion:(id /* block */)arg4;
- (bool)reportSpamMessage:(id)arg1;
- (void)retrieveFirewallWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)revokePseudonym:(id)arg1 completion:(id /* block */)arg2;
- (void)scheduleTransactionLogTask:(id)arg1;
- (bool)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (void)sendAckForMessageWithContext:(id)arg1;
- (bool)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendCertifiedDeliveryReceipt:(id)arg1;
- (bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendInvitation:(id)arg1 toDestination:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendInvitationUpdate:(id)arg1 toDestination:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5;
- (bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendOpportunisticData:(id)arg1 options:(id)arg2 identifier:(id)arg3 error:(id*)arg4;
- (bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;
- (id)serviceDomain;
- (id)serviceIdentifier;
- (void)setLinkPreferences:(id)arg1;
- (void)setPreferInfraWiFi:(bool)arg1;
- (void)setPretendingToBeFull:(bool)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;
- (bool)setWakingPushPriority:(long long)arg1 error:(id*)arg2;
- (void)signData:(id)arg1 withAlgorithm:(long long)arg2 completion:(id /* block */)arg3;
- (void)signData:(id)arg1 withAlgorithm:(long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)startOTRTest:(long long)arg1;
- (id)streamConnectionForSessionDestination:(id)arg1 error:(id*)arg2;
- (id)streamConnectionForSocketDescriptor:(int)arg1 error:(id*)arg2;
- (void)testCloudQRConnection;
- (void)updateSubServices:(id)arg1;
- (bool)updateSubServices:(id)arg1 forDevice:(id)arg2;
- (id)uriForFromID:(id)arg1;
- (void)verifySignedData:(id)arg1 matchesExpectedData:(id)arg2 withTokenURI:(id)arg3 forAlgorithm:(long long)arg4 completion:(id /* block */)arg5;
- (void)verifySignedData:(id)arg1 matchesExpectedData:(id)arg2 withTokenURI:(id)arg3 forAlgorithm:(long long)arg4 options:(id)arg5 completion:(id /* block */)arg6;

// Image: /System/Library/PrivateFrameworks/AnnounceDaemon.framework/AnnounceDaemon

- (id)devicesExcludingHomePods;
- (id)uniqueIdentifiersForDevicesExcludingAppleAccessories;

// Image: /System/Library/PrivateFrameworks/DropInCore.framework/DropInCore

- (id)description;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_handles;
- (bool)hmd_isActive;
- (id)hmd_preferredHandle;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)hmd_handles;
- (bool)hmd_isActive;
- (id)hmd_preferredHandle;

// Image: /System/Library/PrivateFrameworks/HomeMessagingUtils.framework/HomeMessagingUtils

- (id)hmu_accessories;
- (id)hmu_appleTVs;
- (id)hmu_homePods;
- (bool)hmu_validateDestination:(id)arg1 forHome:(id)arg2 currentAccessory:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (bool)hmu_validateFromID:(id)arg1 context:(id)arg2 currentAccessory:(id)arg3 home:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (void)_IMDTrackMetric:(long long)arg1 ForMessageGUID:(id)arg2;
- (bool)_readReceiptTrackingEnabled;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (id)_msp_IDSIdentifierFor:(id)arg1;
+ (id)_msp_IDSIdentifiersFor:(id)arg1;

- (id)_msp_accountFromIdentifier:(id)arg1;
- (id)_msp_currentAccount;
- (id)_msp_currentAccountIdentifier;
- (bool)_msp_hasValidIDSAccount;
- (id)_msp_removeSelfFrom:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

+ (id)mr_companionServiceName;
+ (id)mr_serviceName;
+ (id)mr_sharedIDSCompanionService;
+ (id)mr_sharedIDSService;

// Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash

- (id)nl_defaultPairedDeviceIDIncludingTinkerDevices;
- (id)nl_mineTinkerDevices;

// Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport

- (id)pb_defaultPairedDeviceIDIncludingTinkerDevices;
- (id)pb_mineTinkerDevices;

@end
