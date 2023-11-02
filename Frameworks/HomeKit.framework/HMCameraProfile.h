
@interface HMCameraProfile : HMAccessoryProfile <HFUserNotificationServiceSettingsProviding, HMFLogging> {
    HMCameraAudioControl * _microphoneControl;
    HMCameraSettingsControl * _settingsControl;
    HMCameraSnapshotControl * _snapshotControl;
    HMCameraAudioControl * _speakerControl;
    HMCameraStreamControl * _streamControl;
    <HMCameraProfileUserSettingsDelegate> * _userSettingsDelegate;
}

@property (nonatomic, readonly) _HMCameraProfile *cameraProfile;
@property (readonly) HMCameraClipManager *clipManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_cameraIsNotSetToRecord;
@property (nonatomic, readonly) HFCameraManager *hf_cameraManager;
@property (nonatomic, readonly) HMCharacteristic *hf_doorbellChimeMuteCharacteristic;
@property (nonatomic, readonly) HMBulletinBoardNotification *hf_doorbellNotificationBulletin;
@property (nonatomic, readonly) bool hf_hasDoorbellService;
@property (nonatomic, readonly) bool hf_shouldDisableLiveStream;
@property (nonatomic, readonly) bool hf_supportsBidirectionalAudio;
@property (nonatomic, readonly) bool hf_supportsReachabilityNotifications;
@property (nonatomic, readonly) bool hf_supportsRecordingEvents;
@property (nonatomic, readonly) bool hf_thermalShutdownModeActive;
@property (nonatomic, readonly) NSString *hf_thermalShutdownModeErrorText;
@property (nonatomic, readonly, copy) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (nonatomic, retain) HMCameraAudioControl *microphoneControl;
@property (readonly) HMCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (readonly) HMCameraRecordingEventManager *recordingEventManager;
@property (nonatomic, retain) HMCameraSettingsControl *settingsControl;
@property (nonatomic, retain) HMCameraSnapshotControl *snapshotControl;
@property (nonatomic, retain) HMCameraAudioControl *speakerControl;
@property (nonatomic, retain) HMCameraStreamControl *streamControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) HMCameraUserSettings *userSettings;
@property <HMCameraProfileUserSettingsDelegate> *userSettingsDelegate;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cameraProfile;
- (id)clipManager;
- (id)initWithCameraProfile:(id)arg1;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)microphoneControl;
- (id)reachabilityEventManager;
- (id)recordingEventManager;
- (id)services;
- (void)setMicrophoneControl:(id)arg1;
- (void)setSettingsControl:(id)arg1;
- (void)setSnapshotControl:(id)arg1;
- (void)setSpeakerControl:(id)arg1;
- (void)setStreamControl:(id)arg1;
- (void)setUserSettingsDelegate:(id)arg1;
- (id)settingsControl;
- (id)snapshotControl;
- (id)speakerControl;
- (id)streamControl;
- (id)userSettings;
- (id)userSettingsDelegate;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (unsigned long long)hf_cameraAccessModeSelectedOptionForCameraProfiles:(id)arg1 presenceType:(unsigned long long)arg2;

- (id)_hf_doorbellBulletinNotification;
- (id)_hf_legacyMotionSensorBulletinNotification;
- (id)_hf_smartDetectionBulletinNotification;
- (id)hf_bulletinNotifications;
- (bool)hf_cameraIsNotSetToRecord;
- (id)hf_cameraManager;
- (id)hf_doorbellChimeMuteCharacteristic;
- (id)hf_doorbellNotificationBulletin;
- (id)hf_faceCropImageForSignificantEvent:(id)arg1;
- (bool)hf_hasDoorbellService;
- (bool)hf_shouldDisableLiveStream;
- (id)hf_significantEventWithIdentifier:(id)arg1;
- (bool)hf_supportsBidirectionalAudio;
- (bool)hf_supportsReachabilityNotifications;
- (bool)hf_supportsRecordingEvents;
- (bool)hf_thermalShutdownModeActive;
- (id)hf_thermalShutdownModeErrorText;
- (void)hf_updateDoorbellChime:(bool)arg1;
- (id)hf_updateUserNotificationSettings:(id)arg1;
- (id)hf_userNotificationSettings;

@end
