
@interface _HMCameraProfile : _HMAccessoryProfile {
    HMCameraClipManager * _clipManager;
    _HMCameraAudioControl * _microphoneControl;
    HMCameraRecordingReachabilityEventManager * _reachabilityEventManager;
    HMCameraRecordingEventManager * _recordingEventManager;
    _HMCameraSettingsControl * _settingsControl;
    _HMCameraSnapshotControl * _snapshotControlInternal;
    _HMCameraAudioControl * _speakerControl;
    _HMCameraStreamControl * _streamControlInternal;
    HMCameraUserSettings * _userSettings;
}

@property (retain) HMCameraClipManager *clipManager;
@property (readonly, copy) NSArray *controls;
@property (readonly) _HMCameraAudioControl *microphoneControl;
@property (retain) HMCameraRecordingReachabilityEventManager *reachabilityEventManager;
@property (retain) HMCameraRecordingEventManager *recordingEventManager;
@property (readonly) _HMCameraSettingsControl *settingsControl;
@property (readonly) _HMCameraSnapshotControl *snapshotControlInternal;
@property (readonly) _HMCameraAudioControl *speakerControl;
@property (readonly) _HMCameraStreamControl *streamControlInternal;
@property (retain) HMCameraUserSettings *userSettings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_createControls:(id)arg1;
- (void)addUserSettings:(id)arg1;
- (id)clipManager;
- (id)controls;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 services:(id)arg2;
- (id)microphoneControl;
- (id)reachabilityEventManager;
- (id)recordingEventManager;
- (void)setClipManager:(id)arg1;
- (void)setReachabilityEventManager:(id)arg1;
- (void)setRecordingEventManager:(id)arg1;
- (void)setUserSettings:(id)arg1;
- (id)settingsControl;
- (id)snapshotControlInternal;
- (id)speakerControl;
- (id)streamControlInternal;
- (id)userSettings;

@end
