
@interface SSRSpeakerRecognitionController : NSObject <SSRSpeakerRecognitionOrchestratorDelegate> {
    SSRSpeakerRecognitionContext * _context;
    <SSRSpeakerRecognitionControllerDelegate> * _delegate;
    NSDictionary * _lastScoreCard;
    SSRSpeakerRecognitionOrchestrator * _orchestrator;
}

@property (nonatomic, retain) SSRSpeakerRecognitionContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSRSpeakerRecognitionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *lastScoreCard;
@property (nonatomic, retain) SSRSpeakerRecognitionOrchestrator *orchestrator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)delegate;
- (void)endAudio;
- (id)getLatestSpeakerInfo;
- (id)initWithContext:(id)arg1 withDelegate:(id)arg2 error:(id*)arg3;
- (id)lastScoreCard;
- (id)orchestrator;
- (void)processAudio:(id)arg1 withNumberOfSamples:(unsigned long long)arg2;
- (id)resetWithContext:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastScoreCard:(id)arg1;
- (void)setOrchestrator:(id)arg1;
- (void)voiceRecognitionOrchestrator:(id)arg1 hasVoiceRecognitionInfo:(id)arg2;
- (void)voiceRecognitionOrchestratorFinishedProcessing:(id)arg1 withFinalVoiceRecognitionInfo:(id)arg2;

@end
