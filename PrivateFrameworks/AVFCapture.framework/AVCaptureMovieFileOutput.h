
@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
    AVCaptureMovieFileOutputInternal * _internal;
}

@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property (nonatomic, readonly) unsigned long long primaryConstituentDeviceRestrictedSwitchingBehaviorConditionsForRecording;
@property (nonatomic, readonly) long long primaryConstituentDeviceSwitchingBehaviorForRecording;
@property (getter=isPrimaryConstituentDeviceSwitchingBehaviorForRecordingEnabled, nonatomic) bool primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;

+ (bool)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)new;
+ (long long)uniqueID;
+ (bool)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3;
- (void)_propagateBravoSwitchingBehaviorWhenRecording;
- (bool)_recordingInProgress;
- (void)_removeRecordingDelegateWrapper:(id)arg1;
- (void)_startRecording:(id)arg1;
- (int)_stopRecording;
- (void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1;
- (void)_updateBravoCameraSelectionBehaviorForSourceDevice:(id)arg1;
- (void)_updateDepthDataDeliverySupportedForSourceDevice:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_updateMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forVideoConnection:(id)arg2 dimensions:(struct CGSize { double x1; double x2; })arg3;
- (void)_updateSupportedPropertiesForSourceDevice:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableVideoCodecTypes;
- (id)bravoCameraSelectionBehaviorForRecording;
- (bool)canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)handleDidPauseRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2;
- (void)handleDidResumeRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2;
- (void)handleDidStartRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2;
- (void)handleDidStopRecordingNotificationForMomentCaptureWrapper:(id)arg1 withPayload:(id)arg2 demoof:(bool)arg3 addMetadata:(bool)arg4;
- (void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(bool)arg3 addMetadata:(bool)arg4;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (bool)isDepthCaptureEnabled;
- (bool)isPrimaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;
- (bool)isRecording;
- (bool)isRecordingPaused;
- (bool)isVirtualCaptureCardSupported;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)outputFileURL;
- (id)outputSettingsForConnection:(id)arg1;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (void)pauseRecording;
- (unsigned long long)primaryConstituentDeviceRestrictedSwitchingBehaviorConditionsForRecording;
- (long long)primaryConstituentDeviceSwitchingBehaviorForRecording;
- (bool)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)resumeRecording;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (bool)sendsLastVideoPreviewFrame;
- (void)setBravoCameraSelectionBehaviorForRecording:(id)arg1;
- (void)setConnectionsActive:(bool)arg1;
- (void)setDepthCaptureEnabled:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOutputSettings:(id)arg1 forConnection:(id)arg2;
- (void)setPrimaryConstituentDeviceSwitchingBehaviorForRecording:(long long)arg1 restrictedSwitchingBehaviorConditions:(unsigned long long)arg2;
- (void)setPrimaryConstituentDeviceSwitchingBehaviorForRecordingEnabled:(bool)arg1;
- (void)setRecordsVideoOrientationAndMirroringChanges:(bool)arg1 asMetadataTrackForConnection:(id)arg2;
- (void)setSendsLastVideoPreviewFrame:(bool)arg1;
- (void)setUsesVirtualCaptureCard:(bool)arg1;
- (void)startRecordingMovieWithSettings:(id)arg1 delegate:(id)arg2;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (id)supportedOutputSettingsKeysForConnection:(id)arg1;
- (bool)usesVirtualCaptureCard;

@end
