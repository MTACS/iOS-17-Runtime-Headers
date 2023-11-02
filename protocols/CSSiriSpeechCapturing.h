
@protocol CSSiriSpeechCapturing <NSObject>

@required

- (void)cancelSpeechCaptureSuppressingAlert:(bool)arg1;
- (void)disableSpeechPacketGeneration:(bool)arg1;
- (void)enforcePreviousEndpointHint;
- (void)forceSuccessAudioAlertOnStop;
- (void)getLastStartpointTimestampAndCurrentTime:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, void*
- (id)init;
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1 speechController:(CSSpeechController *)arg2 audioSessionController:(CSAudioSessionController *)arg3 audioPlaybackService:(CSSiriAudioPlaybackService *)arg4 experimentContext:(AFExperimentContext *)arg5;
- (void)playRecordingStartAlert;
- (void)releaseAudioSession;
- (void)setDelegate:(id <CSSiriSpeechCapturingDelegate>)arg1;
- (void)setFingerprintWasRecognized;
- (void)setFingerprintingEnabled:(bool)arg1;
- (void)setHybridUODEnabled:(bool)arg1;
- (void)setIsDriving:(bool)arg1;
- (void)setSpeechRequestOptions:(AFSpeechRequestOptions *)arg1;
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(bool)arg2;
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(bool)arg2 hostTime:(unsigned long long)arg3;
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange { double x1; double x2; })arg1;
- (void)updateEndpointHintForRC:(void *)arg1 forceAccept:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: SASResultCandidate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSArray *, void*
- (void)updateServerEndpointFeatures:(CSServerEndpointFeatures *)arg1;

@end
