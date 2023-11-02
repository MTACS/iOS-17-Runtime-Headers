
@protocol HMAccessoryCapabilities <NSObject>

@required

- (bool)supportsAnnounce;
- (bool)supportsAssistantAccessControl;
- (bool)supportsAudioAnalysis;
- (bool)supportsAudioReturnChannel;
- (bool)supportsCaptiveNetworks;
- (bool)supportsCloudDataSync;
- (bool)supportsCompanionInitiatedRestart;
- (bool)supportsCoordinationDoorbellChime;
- (bool)supportsDeviceSetup;
- (bool)supportsDoorbellChime;
- (bool)supportsDropIn;
- (bool)supportsHomeHub;
- (bool)supportsHomeInvitation;
- (bool)supportsHomeLevelLocationServiceSetting;
- (bool)supportsJustSiri;
- (bool)supportsKeyTransferClient;
- (bool)supportsKeyTransferServer;
- (bool)supportsKeychainSync;
- (bool)supportsManagedConfigurationProfile;
- (bool)supportsMediaActions;
- (bool)supportsMessagedHomePodSettings;
- (bool)supportsMultiUser;
- (bool)supportsMusicAlarm;
- (bool)supportsPreferredMediaUser;
- (bool)supportsRMVonAppleTV;
- (bool)supportsStandaloneMode;
- (bool)supportsTargetControl;
- (bool)supportsThirdPartyMusic;
- (bool)supportsThreadBorderRouter;
- (bool)supportsUserMediaSettings;
- (bool)supportsWholeHouseAudio;

@end
