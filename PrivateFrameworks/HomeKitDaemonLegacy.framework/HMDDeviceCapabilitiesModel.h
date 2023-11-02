
@interface HMDDeviceCapabilitiesModel : HMDBackingStoreModelObject {
    NSNumber * _supportsAudioAnalysis;
    NSNumber * _supportsDropIn;
}

@property (nonatomic, copy) NSNumber *remoteGatewayCapable;
@property (nonatomic, copy) NSNumber *residentCapable;
@property (nonatomic, copy) NSNumber *supportsAccessCodes;
@property (nonatomic, copy) NSNumber *supportsAnnounce;
@property (nonatomic, copy) NSNumber *supportsAssistantAccessControl;
@property (nonatomic, copy) NSNumber *supportsAudioAnalysis;
@property (nonatomic, copy) NSNumber *supportsAudioReturnChannel;
@property (nonatomic, copy) NSNumber *supportsCHIP;
@property (nonatomic, copy) NSNumber *supportsCameraActivityZones;
@property (nonatomic, copy) NSNumber *supportsCameraPackageDetection;
@property (nonatomic, copy) NSNumber *supportsCameraRecording;
@property (nonatomic, copy) NSNumber *supportsCameraRecordingReachabilityNotifications;
@property (nonatomic, copy) NSNumber *supportsCaptiveNetworks;
@property (nonatomic, copy) NSNumber *supportsCloudDataSync;
@property (nonatomic, copy) NSNumber *supportsCompanionInitiatedRestart;
@property (nonatomic, copy) NSNumber *supportsCoordinationDoorbellChime;
@property (nonatomic, copy) NSNumber *supportsCustomMediaApplicationDestination;
@property (nonatomic, copy) NSNumber *supportsDeviceSetup;
@property (nonatomic, copy) NSNumber *supportsDoorbellChime;
@property (nonatomic, copy) NSNumber *supportsDropIn;
@property (nonatomic, copy) NSNumber *supportsFaceClassification;
@property (nonatomic, copy) NSNumber *supportsFirmwareUpdate;
@property (nonatomic, copy) NSNumber *supportsHomeHub;
@property (nonatomic, copy) NSNumber *supportsHomeInvitation;
@property (nonatomic, copy) NSNumber *supportsHomeLevelLocationServiceSetting;
@property (nonatomic, copy) NSNumber *supportsIDSActivityMonitorPresence;
@property (nonatomic, copy) NSNumber *supportsJustSiri;
@property (nonatomic, copy) NSNumber *supportsKeyTransferClient;
@property (nonatomic, copy) NSNumber *supportsKeyTransferServer;
@property (nonatomic, copy) NSNumber *supportsKeychainSync;
@property (nonatomic, copy) NSNumber *supportsLockNotificationContext;
@property (nonatomic, copy) NSNumber *supportsManagedConfigurationProfile;
@property (nonatomic, copy) NSNumber *supportsMatterSharedAdminPairing;
@property (nonatomic, copy) NSNumber *supportsMediaActions;
@property (nonatomic, copy) NSNumber *supportsMessagedHomePodSettings;
@property (nonatomic, copy) NSNumber *supportsModernTransport;
@property (nonatomic, copy) NSNumber *supportsMultiUser;
@property (nonatomic, copy) NSNumber *supportsMusicAlarm;
@property (nonatomic, copy) NSNumber *supportsNaturalLighting;
@property (nonatomic, copy) NSNumber *supportsPreferredMediaUser;
@property (nonatomic, copy) NSNumber *supportsRMVonAppleTV;
@property (nonatomic, copy) NSNumber *supportsResidentFirmwareUpdate;
@property (nonatomic, copy) NSNumber *supportsResidentFirstAccessoryCommunication;
@property (nonatomic, copy) NSNumber *supportsRouterManagement;
@property (nonatomic, copy) NSNumber *supportsShortcutActions;
@property (nonatomic, copy) NSNumber *supportsSiriEndpointSetup;
@property (nonatomic, copy) NSNumber *supportsStandaloneMode;
@property (nonatomic, copy) NSNumber *supportsTargetControl;
@property (nonatomic, copy) NSNumber *supportsThirdPartyMusic;
@property (nonatomic, copy) NSNumber *supportsThreadBorderRouter;
@property (nonatomic, copy) NSNumber *supportsThreadNetworkCredentialSharing;
@property (nonatomic, copy) NSNumber *supportsUnifiedMediaNotifications;
@property (nonatomic, copy) NSNumber *supportsUserMediaSettings;
@property (nonatomic, copy) NSNumber *supportsWakeOnLAN;
@property (nonatomic, copy) NSNumber *supportsWalletKey;
@property (nonatomic, copy) NSNumber *supportsWholeHouseAudio;

+ (id)properties;
+ (id)schemaHashRoot;

- (void).cxx_destruct;
- (void)setSupportsAudioAnalysis:(id)arg1;
- (void)setSupportsDropIn:(id)arg1;
- (id)supportsAudioAnalysis;
- (id)supportsDropIn;

@end
