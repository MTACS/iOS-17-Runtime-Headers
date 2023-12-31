
@interface HMAccessoryCapabilities : NSObject <HMAccessoryCapabilities> {
    struct _HMAccessoryCapabilitiesStruct { 
        unsigned int supportsKeychainSync : 1; 
        unsigned int supportsDeviceSetup : 1; 
        unsigned int supportsKeyTransferClient : 1; 
        unsigned int supportsKeyTransferServer : 1; 
        unsigned int supportsStandaloneMode : 1; 
        unsigned int supportsCloudDataSync : 1; 
        unsigned int supportsWholeHouseAudio : 1; 
        unsigned int supportsAssistantAccessControl : 1; 
        unsigned int supportsHomeInvitation : 1; 
        unsigned int supportsTargetControl : 1; 
        unsigned int supportsMultiUser : 1; 
        unsigned int supportsHomeLevelLocationServiceSetting : 1; 
        unsigned int supportsCompanionInitiatedRestart : 1; 
        unsigned int supportsMusicAlarm : 1; 
        unsigned int supportsAnnounce : 1; 
        unsigned int supportsAudioAnalysis : 1; 
        unsigned int supportsThirdPartyMusic : 1; 
        unsigned int supportsPreferredMediaUser : 1; 
        unsigned int supportsThreadBorderRouter : 1; 
        unsigned int supportsDoorbellChime : 1; 
        unsigned int supportsUserMediaSettings : 1; 
        unsigned int supportsCoordinationDoorbellChime : 1; 
        unsigned int supportsHomeHub : 1; 
        unsigned int supportsAudioReturnChannel : 1; 
        unsigned int supportsManagedConfigurationProfile : 1; 
        unsigned int supportsCaptiveNetworks : 1; 
        unsigned int supportsMessagedHomePodSettings : 1; 
        unsigned int supportsMediaActions : 1; 
        unsigned int supportsDropIn : 1; 
        unsigned int supportsRMVonAppleTV : 1; 
        unsigned int supportsJustSiri : 1; 
    }  _capabilities;
    NSString * _tag;
}

@property (nonatomic, readonly) struct _HMAccessoryCapabilitiesStruct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; } capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnnounce;
@property (nonatomic, readonly) bool supportsAssistantAccessControl;
@property (nonatomic, readonly) bool supportsAudioAnalysis;
@property (nonatomic, readonly) bool supportsAudioReturnChannel;
@property (nonatomic, readonly) bool supportsCaptiveNetworks;
@property (nonatomic, readonly) bool supportsCloudDataSync;
@property (nonatomic, readonly) bool supportsCompanionInitiatedRestart;
@property (nonatomic, readonly) bool supportsCoordinationDoorbellChime;
@property (nonatomic, readonly) bool supportsDeviceSetup;
@property (nonatomic, readonly) bool supportsDoorbellChime;
@property (nonatomic, readonly) bool supportsDropIn;
@property (nonatomic, readonly) bool supportsHomeHub;
@property (nonatomic, readonly) bool supportsHomeInvitation;
@property (nonatomic, readonly) bool supportsHomeLevelLocationServiceSetting;
@property (nonatomic, readonly) bool supportsJustSiri;
@property (nonatomic, readonly) bool supportsKeyTransferClient;
@property (nonatomic, readonly) bool supportsKeyTransferServer;
@property (nonatomic, readonly) bool supportsKeychainSync;
@property (nonatomic, readonly) bool supportsManagedConfigurationProfile;
@property (nonatomic, readonly) bool supportsMediaActions;
@property (nonatomic, readonly) bool supportsMessagedHomePodSettings;
@property (nonatomic, readonly) bool supportsMultiUser;
@property (nonatomic, readonly) bool supportsMusicAlarm;
@property (nonatomic, readonly) bool supportsPreferredMediaUser;
@property (nonatomic, readonly) bool supportsRMVonAppleTV;
@property (nonatomic, readonly) bool supportsStandaloneMode;
@property (nonatomic, readonly) bool supportsTargetControl;
@property (nonatomic, readonly) bool supportsThirdPartyMusic;
@property (nonatomic, readonly) bool supportsThreadBorderRouter;
@property (nonatomic, readonly) bool supportsUserMediaSettings;
@property (nonatomic, readonly) bool supportsWholeHouseAudio;
@property (nonatomic, readonly) NSString *tag;

- (void).cxx_destruct;
- (struct _HMAccessoryCapabilitiesStruct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; })capabilities;
- (unsigned long long)hash;
- (id)initWithProtoCapabilities:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithTagUUID:(id)arg1 capabilities:(struct _HMAccessoryCapabilitiesStruct { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; })arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLocalEqual:(id)arg1;
- (id)pbCapabilities;
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
- (id)tag;

@end
