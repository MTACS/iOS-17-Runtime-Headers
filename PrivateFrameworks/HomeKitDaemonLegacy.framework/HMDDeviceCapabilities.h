
@interface HMDDeviceCapabilities : HMFObject <HMAccessoryCapabilities, HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging, HMResidentCapabilities, NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _messagedHomePodSettingsFeatureEnabled;
    HMDDeviceCapabilitiesModel * _objectModel;
    bool  _supportsAudioAnalysis;
    bool  _supportsDropIn;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isResidentCapable;
@property (getter=isMessagedHomePodSettingsFeatureEnabled, nonatomic) bool messagedHomePodSettingsFeatureEnabled;
@property (readonly) Class modelClass;
@property (nonatomic, readonly, copy) NSUUID *modelIdentifier;
@property (nonatomic, copy) NSUUID *modelParentIdentifier;
@property (getter=isRemoteGatewayCapable, nonatomic, readonly) bool remoteGatewayCapable;
@property (getter=isResidentCapable, nonatomic, readonly) bool residentCapable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAccessCodes;
@property (nonatomic, readonly) bool supportsAnnounce;
@property (nonatomic, readonly) bool supportsAssistantAccessControl;
@property (nonatomic, readonly) bool supportsAudioAnalysis;
@property (nonatomic, readonly) bool supportsAudioReturnChannel;
@property (nonatomic, readonly) bool supportsCHIP;
@property (nonatomic, readonly) bool supportsCameraActivityZones;
@property (nonatomic, readonly) bool supportsCameraPackageDetection;
@property (nonatomic, readonly) bool supportsCameraRecording;
@property (nonatomic, readonly) bool supportsCameraRecordingReachabilityNotifications;
@property (nonatomic, readonly) bool supportsCameraSignificantEventNotifications;
@property (nonatomic, readonly) bool supportsCaptiveNetworks;
@property (nonatomic, readonly) bool supportsCloudDataSync;
@property (nonatomic, readonly) bool supportsCompanionInitiatedRestart;
@property (nonatomic, readonly) bool supportsCoordinationDoorbellChime;
@property (nonatomic, readonly) bool supportsCustomMediaApplicationDestination;
@property (nonatomic, readonly) bool supportsDeviceSetup;
@property (readonly) bool supportsDoorbellChime;
@property (nonatomic, readonly) bool supportsDropIn;
@property (nonatomic, readonly) bool supportsEventLog;
@property (nonatomic, readonly) bool supportsFaceClassification;
@property (nonatomic, readonly) bool supportsFirmwareUpdate;
@property (readonly) bool supportsHomeHub;
@property (nonatomic, readonly) bool supportsHomeInvitation;
@property (nonatomic, readonly) bool supportsHomeLevelLocationServiceSetting;
@property (nonatomic, readonly) bool supportsIDSActivityMonitorPresence;
@property (readonly) bool supportsJustSiri;
@property (nonatomic, readonly) bool supportsKeyTransferClient;
@property (nonatomic, readonly) bool supportsKeyTransferServer;
@property (nonatomic, readonly) bool supportsKeychainSync;
@property (nonatomic, readonly) bool supportsLockNotificationContext;
@property (nonatomic, readonly) bool supportsManagedConfigurationProfile;
@property (nonatomic, readonly) bool supportsMatterSharedAdminPairing;
@property (nonatomic, readonly) bool supportsMediaActions;
@property (nonatomic, readonly) bool supportsMessagedHomePodSettings;
@property (nonatomic, readonly) bool supportsModernTransport;
@property (nonatomic, readonly) bool supportsMultiUser;
@property (nonatomic, readonly) bool supportsMusicAlarm;
@property (nonatomic, readonly) bool supportsNaturalLighting;
@property (readonly) bool supportsPreferredMediaUser;
@property (readonly) bool supportsRMVonAppleTV;
@property (nonatomic, readonly) bool supportsResidentFirmwareUpdate;
@property (nonatomic, readonly) bool supportsResidentFirstAccessoryCommunication;
@property (nonatomic, readonly) bool supportsRouterManagement;
@property (nonatomic, readonly) bool supportsShortcutActions;
@property (readonly) bool supportsSiriEndpointSetup;
@property (nonatomic, readonly) bool supportsStandaloneMode;
@property (nonatomic, readonly) bool supportsTargetControl;
@property (readonly) bool supportsThirdPartyMusic;
@property (nonatomic, readonly) bool supportsThreadBorderRouter;
@property (nonatomic, readonly) bool supportsThreadNetworkCredentialSharing;
@property (nonatomic, readonly) bool supportsUnifiedMediaNotifications;
@property (readonly) bool supportsUserMediaSettings;
@property (nonatomic, readonly) bool supportsWakeOnLAN;
@property (nonatomic, readonly) bool supportsWalletKey;
@property (nonatomic, readonly) bool supportsWholeHouseAudio;

+ (unsigned long long)appleMediaAccessoryVariant;
+ (id)deviceCapabilities;
+ (id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1;
+ (bool)isAppleMediaAccessory;
+ (bool)isCompanionCapable;
+ (id)logCategory;
+ (bool)requiresHomePod2ndGenPairing;
+ (bool)requiresHomePodMiniPairing;
+ (unsigned long long)supportedPairingCapabilities;
+ (bool)supportsAddingAccessory;
+ (bool)supportsAudioDestinationControllerCreation;
+ (bool)supportsAudioDestinationCreation;
+ (bool)supportsBackboard;
+ (bool)supportsBidirectionalAudioForCameraStreaming;
+ (bool)supportsBulletinBoard;
+ (bool)supportsCameraSnapshotRequestViaRelay;
+ (bool)supportsCustomerReset;
+ (bool)supportsDeviceLock;
+ (bool)supportsDismissUserNotificationAndDialog;
+ (bool)supportsHomeApp;
+ (bool)supportsHomeKitDataStream;
+ (bool)supportsHostingLocalTempAndHumiditySensor;
+ (bool)supportsIntentDonation;
+ (bool)supportsLocalization;
+ (bool)supportsReceivingRemoteCameraStream;
+ (bool)supportsRemoteAccess;
+ (bool)supportsSecureCoding;
+ (bool)supportsSiriUnsecuringActionsWithNoPasscode;
+ (bool)supportsSiriUnsecuringActionsWithWatchAuth;
+ (bool)supportsStereoPairingV1;
+ (bool)supportsStereoPairingV2;
+ (bool)supportsStereoPairingV3;
+ (bool)supportsSymptomsHandler;
+ (bool)supportsSyncingToSharedUsers;
+ (bool)supportsTargetControllerAutoConfigure;
+ (bool)supportsUserNotifications;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithProductInfo:(id)arg1;
- (id)initWithProductInfo:(id)arg1 mobileGestaltClient:(id)arg2;
- (id)initWithProductInfo:(id)arg1 mobileGestaltClient:(id)arg2 homekitVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMessagedHomePodSettingsFeatureEnabled;
- (bool)isRemoteGatewayCapable;
- (bool)isResidentCapable;
- (id)modelBackedObjects;
- (Class)modelClass;
- (id)modelIdentifier;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelParentIdentifier;
- (void)setMessagedHomePodSettingsFeatureEnabled:(bool)arg1;
- (void)setModelParentIdentifier:(id)arg1;
- (id)shortDescription;
- (bool)supportsAccessCodes;
- (bool)supportsAnnounce;
- (bool)supportsAssistantAccessControl;
- (bool)supportsAudioAnalysis;
- (bool)supportsAudioReturnChannel;
- (bool)supportsCHIP;
- (bool)supportsCameraActivityZones;
- (bool)supportsCameraPackageDetection;
- (bool)supportsCameraRecording;
- (bool)supportsCameraRecordingReachabilityNotifications;
- (bool)supportsCameraSignificantEventNotifications;
- (bool)supportsCaptiveNetworks;
- (bool)supportsCloudDataSync;
- (bool)supportsCompanionInitiatedRestart;
- (bool)supportsCoordinationDoorbellChime;
- (bool)supportsCustomMediaApplicationDestination;
- (bool)supportsDeviceSetup;
- (bool)supportsDoorbellChime;
- (bool)supportsDropIn;
- (bool)supportsEventLog;
- (bool)supportsFaceClassification;
- (bool)supportsFirmwareUpdate;
- (bool)supportsHomeHub;
- (bool)supportsHomeInvitation;
- (bool)supportsHomeLevelLocationServiceSetting;
- (bool)supportsIDSActivityMonitorPresence;
- (bool)supportsJustSiri;
- (bool)supportsKeyTransferClient;
- (bool)supportsKeyTransferServer;
- (bool)supportsKeychainSync;
- (bool)supportsLockNotificationContext;
- (bool)supportsManagedConfigurationProfile;
- (bool)supportsMatterSharedAdminPairing;
- (bool)supportsMediaActions;
- (bool)supportsMessagedHomePodSettings;
- (bool)supportsModernTransport;
- (bool)supportsMultiUser;
- (bool)supportsMusicAlarm;
- (bool)supportsNaturalLighting;
- (bool)supportsPreferredMediaUser;
- (bool)supportsRMVonAppleTV;
- (bool)supportsResidentFirmwareUpdate;
- (bool)supportsResidentFirstAccessoryCommunication;
- (bool)supportsRouterManagement;
- (bool)supportsShortcutActions;
- (bool)supportsSiriEndpointSetup;
- (bool)supportsStandaloneMode;
- (bool)supportsTargetControl;
- (bool)supportsThirdPartyMusic;
- (bool)supportsThreadBorderRouter;
- (bool)supportsThreadNetworkCredentialSharing;
- (bool)supportsUnifiedMediaNotifications;
- (bool)supportsUserMediaSettings;
- (bool)supportsWakeOnLAN;
- (bool)supportsWalletKey;
- (bool)supportsWholeHouseAudio;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end