
@interface MNSpeechResourceController : NSObject {
    unsigned int  _audioSessionID;
    long long  _cachedVoiceGender;
    NSString * _cachedVoiceLanguage;
    NSString * _cachedVoiceName;
    unsigned long long  _charactersSpokenCount;
    double  _charactersSpokenDuration;
    bool  _currentlySpeaking;
    <MNSpeechControllerDelegate> * _delegate;
    NSCache * _durations;
    SiriTTSSpeechRequest * _onGoingRequest;
    SiriTTSDaemonSession * _session;
    NSTimer * _timer;
    NSString * _utterance;
}

@property (nonatomic) <MNSpeechControllerDelegate> *delegate;
@property (nonatomic, readonly) bool speaking;

- (void).cxx_destruct;
- (void)_addDurationToCache:(double)arg1 forUtterance:(id)arg2;
- (void)_audioSessionInterruption:(id)arg1;
- (void)_cachingTimeoutOccurred:(id)arg1;
- (void)_cancelTimer;
- (bool)_createDurationCacheIfNecessary;
- (void)_createTimerForUtterance:(id)arg1 andIsCaching:(bool)arg2;
- (double)_estimateDurationForUtterance:(id)arg1;
- (void)_markVoiceForDownloadingWithLanguage:(id)arg1 andVoiceName:(id)arg2 andGender:(long long)arg3;
- (void)_mediaSessionServicesWereReset:(id)arg1;
- (void)_prepareSynthesizerWithLanguage:(id)arg1 andVoiceName:(id)arg2 andGender:(long long)arg3 andAudioSessionID:(unsigned int)arg4;
- (void)_registerForObservation;
- (void)_speakingTimeoutOccurred:(id)arg1;
- (id)_speechRequestForUtterance:(id)arg1 withLanguage:(id)arg2 andVoiceName:(id)arg3 andAudioSessionID:(unsigned int)arg4 andPrivacySensitive:(bool)arg5;
- (id)_synthesisRequestForUtterance:(id)arg1 withLanguage:(id)arg2 andVoiceName:(id)arg3 andPrivacySensitive:(bool)arg4;
- (void)_updateEstimatorWithDuration:(double)arg1 andUtterance:(id)arg2;
- (double)_volumeFromUserPreference;
- (void)_warmUpTTSForLanguage:(id)arg1 andVoiceName:(id)arg2 andGender:(long long)arg3 andAudioSessionID:(unsigned int)arg4;
- (bool)cache:(id)arg1 withDisclosure:(unsigned long long)arg2 andReport:(out id*)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didFinishSpeakingRequest:(id)arg1 withError:(id)arg2;
- (void)didFinishSynthesisRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3;
- (void)didReceiveSpeakingRequest:(id)arg1 withInstrumentMetrics:(id)arg2;
- (void)didStartSpeakingRequest:(id)arg1;
- (double)durationOf:(id)arg1;
- (id)initWithLanguage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)speak:(id)arg1 withDisclosure:(unsigned long long)arg2 andReport:(out id*)arg3;
- (bool)speaking;
- (bool)stopSpeakingAndReport:(out id*)arg1;

@end
