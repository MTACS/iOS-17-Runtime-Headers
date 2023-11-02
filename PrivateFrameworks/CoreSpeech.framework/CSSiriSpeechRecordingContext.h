
@interface CSSiriSpeechRecordingContext : NSObject {
    CSSiriAudioFileWriter * _audioFileWriter;
    CSSiriAudioMessageRequestClient * _audioMessageRequestClient;
    CSAudioRecordContext * _audioRecordContext;
    CSAudioRecordDeviceInfo * _audioRecordDeviceInfo;
    bool  _isCurrent;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _recordedAudioFileURL;
    NSObject<OS_dispatch_group> * _recordingAudioGroup;
    CSSiriRecordingInfo * _recordingInfo;
    NSDictionary * _recordingSettings;
    NSString * _selectedResultCandidateId;
    NSString * _sessionUUID;
    bool  _shouldUseLocalFileWriter;
    <AFRelinquishableAssertion> * _startRecordingAudioSessionAssertion;
    NSString * _startSpeechId;
    bool  _stopRecordingInstrumented;
    NSUUID * _turnIdentifier;
    <AFRelinquishableAssertion> * _twoShotDetectionAudioSessionAssertion;
    NSMutableSet * _voiceIdentificationTraining_allowedResultCandidateIds;
    bool  _voiceIdentificationTraining_allowsWithoutResultCandidate;
    NSMutableDictionary * _voiceIdentificationTraining_resultCandidateToSharedUserIdMap;
    NSString * _voiceIdentificationTraining_withoutResultCandidateSharedUserId;
    NSDictionary * _voiceTriggerInfo;
    bool  _wantsRecordedAudioBufferLogs;
}

@property (nonatomic, readonly, copy) NSString *sessionUUID;
@property (nonatomic, readonly) bool wantsRecordedAudioBufferLogs;

- (void).cxx_destruct;
- (id)_createRequestLinkInfo:(id)arg1 component:(int)arg2;
- (void)_didBecomeCurrent;
- (void)_didResignCurrent;
- (void)_donateRecordedAudioForVoiceIdentificationTrainingWithCompletion:(id /* block */)arg1;
- (void)_finalizeAudioFileWriterWithCompletion:(id /* block */)arg1;
- (void)_initializeAudioFileWriterWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)_instrumentSiriCue:(int)arg1;
- (void)_removeRecordedAudio;
- (void)acquireRecordedAudioWithHandler:(id /* block */)arg1;
- (bool)allowContinuousConversation;
- (void)appendRecordedAudioBuffer:(id)arg1;
- (void)becomeCurrent;
- (void)beginRecordingAudioWithAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1;
- (void)dealloc;
- (id)description;
- (void)didDetectTwoShotWithAudioActivationInfo:(id)arg1 atTime:(double)arg2;
- (void)didStopRecordingWithError:(id)arg1;
- (void)emitRequestLinkEventForMHUUID:(id)arg1;
- (void)endRecordingAudio;
- (void)getAudioRecordRouteAndDeviceIdentificationWithCompletion:(id /* block */)arg1;
- (id)initWithSessionUUID:(id)arg1 turnIdentifier:(id)arg2;
- (void)instrumentSiriCue:(int)arg1;
- (void)instrumentSiriCueForAlertType:(long long)arg1;
- (void)relinquishAudioSessionAssertionsWithContext:(id)arg1;
- (void)relinquishAudioSessionAssertionsWithError:(id)arg1;
- (void)resignCurrent;
- (id)sessionUUID;
- (void)updateAccessToRecordedAudioForVoiceIdentificationTraining:(bool)arg1 forResultCandidateId:(id)arg2 sharedUserId:(id)arg3;
- (void)updateAudioRecordContext:(id)arg1;
- (void)updateAudioRecordDeviceInfo:(id)arg1;
- (void)updateRecordingInfo:(id)arg1;
- (void)updateRecordingSettings:(id)arg1;
- (void)updateSelectedResultCandidateId:(id)arg1;
- (void)updateStartSpeechId:(id)arg1;
- (void)updateVoiceTriggerInfo:(id)arg1;
- (bool)wantsRecordedAudioBufferLogs;
- (void)willPrepareAndStartRecordingWithAudioActivationInfo:(id)arg1;
- (void)willStopRecordingAtHostTime:(unsigned long long)arg1;

@end
