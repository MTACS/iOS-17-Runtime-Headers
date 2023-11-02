
@interface SSRSpeakerRecognizerSAT : NSObject <SSRSpeakerAnalyzerSATDelegate, SSRSpeakerRecognizer> {
    <SSRSpeakerRecognizerDelegate> * _delegate;
    unsigned long long  _extraSamplesAtStart;
    NSString * _invocationStyleStr;
    NSDictionary * _lastSpeakerInfo;
    unsigned long long  _numTdTiSamplesProcessed;
    bool  _processingEnded;
    SSRSpeakerAnalyzerSAT * _satAnalyzer;
    NSString * _sessionId;
    SSRSpeakerRecognitionContext * _spIdCtx;
    unsigned long long  _tdEndInSampleCount;
    unsigned long long  _totalNumSamplesReceived;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSRSpeakerRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *invocationStyleStr;
@property (nonatomic, readonly) NSDictionary *lastScoreCard;
@property (nonatomic, retain) NSDictionary *lastSpeakerInfo;
@property (nonatomic) unsigned long long numTdTiSamplesProcessed;
@property (nonatomic) bool processingEnded;
@property (nonatomic, retain) SSRSpeakerAnalyzerSAT *satAnalyzer;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, retain) SSRSpeakerRecognitionContext *spIdCtx;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tdEndInSampleCount;
@property (nonatomic) unsigned long long totalNumSamplesReceived;

- (void).cxx_destruct;
- (void)_initializeWithContext:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)endAudio;
- (unsigned long long)extraSamplesAtStart;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)invocationStyleStr;
- (id)lastScoreCard;
- (id)lastSpeakerInfo;
- (unsigned long long)numTdTiSamplesProcessed;
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (bool)processingEnded;
- (void)resetWithContext:(id)arg1;
- (id)satAnalyzer;
- (id)sessionId;
- (void)setDelegate:(id)arg1;
- (void)setExtraSamplesAtStart:(unsigned long long)arg1;
- (void)setInvocationStyleStr:(id)arg1;
- (void)setLastSpeakerInfo:(id)arg1;
- (void)setNumTdTiSamplesProcessed:(unsigned long long)arg1;
- (void)setProcessingEnded:(bool)arg1;
- (void)setSatAnalyzer:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSpIdCtx:(id)arg1;
- (void)setTdEndInSampleCount:(unsigned long long)arg1;
- (void)setTotalNumSamplesReceived:(unsigned long long)arg1;
- (id)spIdCtx;
- (unsigned long long)tdEndInSampleCount;
- (unsigned long long)totalNumSamplesReceived;
- (void)voiceRecognitionSATAnalyzer:(id)arg1 hasVoiceRecognitionInfo:(id)arg2;
- (void)voiceRecognitionSATAnalyzerFinishedProcessing:(id)arg1 withVoiceRecognitionInfo:(id)arg2;

@end
