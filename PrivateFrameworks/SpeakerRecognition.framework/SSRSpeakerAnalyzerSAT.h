
@interface SSRSpeakerAnalyzerSAT : NSObject {
    NSURL * _configFilePath;
    SSRSpeakerRecognitionContext * _context;
    <SSRSpeakerAnalyzerSATDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _desRecordQueue;
    void * _novDetect;
    unsigned long long  _numSamplesProcessed;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _resourceFilePath;
    NSArray * _satScorers;
    NSDictionary * _scoreCard;
    bool  _triggerPhraseDetectedOnTap;
    NSDictionary * _voiceProfilesExpModelFilePaths;
    NSDictionary * _voiceProfilesModelFilePaths;
}

@property (nonatomic, retain) NSURL *configFilePath;
@property (nonatomic, retain) SSRSpeakerRecognitionContext *context;
@property (nonatomic) <SSRSpeakerAnalyzerSATDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *desRecordQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSURL *resourceFilePath;
@property (nonatomic, retain) NSArray *satScorers;
@property (nonatomic, retain) NSDictionary *scoreCard;
@property (nonatomic, retain) NSDictionary *voiceProfilesExpModelFilePaths;
@property (nonatomic, retain) NSDictionary *voiceProfilesModelFilePaths;

- (void).cxx_destruct;
- (id)_getAnalyzedResult;
- (id)_getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)_processSuperVector:(id)arg1 withSize:(unsigned long long)arg2 processedAudioDurationMs:(unsigned long long)arg3 isFinal:(bool)arg4;
- (id)_updateScoreCardForFinalResult:(bool)arg1;
- (id)configFilePath;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)desRecordQueue;
- (void)endAudio;
- (id)getVoiceRecognizerResults;
- (id)initWithVoiceRecognitionContext:(id)arg1 delegate:(id)arg2;
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)queue;
- (id)resetForNewRequest;
- (id)resourceFilePath;
- (id)satScorers;
- (id)scoreCard;
- (void)setConfigFilePath:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesRecordQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResourceFilePath:(id)arg1;
- (void)setSatScorers:(id)arg1;
- (void)setScoreCard:(id)arg1;
- (void)setVoiceProfilesExpModelFilePaths:(id)arg1;
- (void)setVoiceProfilesModelFilePaths:(id)arg1;
- (id)voiceProfilesExpModelFilePaths;
- (id)voiceProfilesModelFilePaths;

@end
