
@interface SSRSpeakerRecognizerPSR : NSObject <SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer> {
    <SSRSpeakerRecognizerDelegate> * _delegate;
    unsigned long long  _endInSampleCount;
    unsigned long long  _extraSamplesAtStart;
    NSString * _invocationStyleStr;
    NSDictionary * _lastSpeakerInfo;
    unsigned long long  _numSamplesProcessed;
    bool  _processingEnded;
    SSRSpeakerAnalyzerPSR * _psrAnalyzer;
    NSString * _sessionId;
    SSRSpeakerRecognitionContext * _spIdCtx;
    unsigned long long  _totalNumSamplesReceived;
    unsigned long long  _vtEndInSampleCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSRSpeakerRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long endInSampleCount;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invocationStyleStr;
@property (nonatomic, readonly) NSDictionary *lastScoreCard;
@property (nonatomic, retain) NSDictionary *lastSpeakerInfo;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) bool processingEnded;
@property (nonatomic, retain) SSRSpeakerAnalyzerPSR *psrAnalyzer;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, retain) SSRSpeakerRecognitionContext *spIdCtx;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long totalNumSamplesReceived;
@property (nonatomic) unsigned long long vtEndInSampleCount;

- (void).cxx_destruct;
- (void)_initializeWithContext:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endAudio;
- (unsigned long long)endInSampleCount;
- (unsigned long long)extraSamplesAtStart;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)invocationStyleStr;
- (id)lastScoreCard;
- (id)lastSpeakerInfo;
- (unsigned long long)numSamplesProcessed;
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (bool)processingEnded;
- (id)psrAnalyzer;
- (void)resetWithContext:(id)arg1;
- (id)sessionId;
- (void)setDelegate:(id)arg1;
- (void)setEndInSampleCount:(unsigned long long)arg1;
- (void)setExtraSamplesAtStart:(unsigned long long)arg1;
- (void)setInvocationStyleStr:(id)arg1;
- (void)setLastSpeakerInfo:(id)arg1;
- (void)setNumSamplesProcessed:(unsigned long long)arg1;
- (void)setProcessingEnded:(bool)arg1;
- (void)setPsrAnalyzer:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSpIdCtx:(id)arg1;
- (void)setTotalNumSamplesReceived:(unsigned long long)arg1;
- (void)setVtEndInSampleCount:(unsigned long long)arg1;
- (id)spIdCtx;
- (unsigned long long)totalNumSamplesReceived;
- (void)voiceRecognitionPSRAnalyzer:(id)arg1 hasVoiceRecognitionInfo:(id)arg2;
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)arg1 withVoiceRecognitionInfo:(id)arg2;
- (unsigned long long)vtEndInSampleCount;

@end
