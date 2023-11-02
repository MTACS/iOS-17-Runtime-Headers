
@interface VTKeywordAnalyzerQuasar : NSObject <_EARSpeechRecognitionResultStream> {
    unsigned long long  _activeChannel;
    NSDictionary * _ctcKwdToPhIdMap;
    <VTKeywordAnalyzerQuasarScoreDelegate> * _delegate;
    NSMutableArray * _previousUtteranceTokens;
    NSObject<OS_dispatch_queue> * _queue;
    _EARSpeechRecognizer * _recognizer;
    _EARSpeechRecognitionAudioBuffer * _recognizerBuffer;
    double  _triggerConfidence;
    NSArray * _triggerTokenList;
    bool  _useKeywordSpotting;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic, retain) NSDictionary *ctcKwdToPhIdMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VTKeywordAnalyzerQuasarScoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double triggerConfidence;

- (void).cxx_destruct;
- (double)_getConfidence:(id)arg1;
- (id)_phIdToCtcScoreMap;
- (void)_recognizeWavData:(const short*)arg1 length:(unsigned long long)arg2;
- (unsigned long long)activeChannel;
- (id)ctcKwdToPhIdMap;
- (void)dealloc;
- (id)delegate;
- (void)endAudio;
- (id)initWithConfigPath:(id)arg1 triggerTokens:(id)arg2 useKeywordSpotting:(bool)arg3;
- (void)processAudioBuffer:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)reset;
- (void)runRecognition;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setCtcKwdToPhIdMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (double)triggerConfidence;

@end
