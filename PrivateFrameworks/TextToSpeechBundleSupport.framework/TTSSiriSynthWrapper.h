
@interface TTSSiriSynthWrapper : NSObject {
    AVAudioConverter * _bufferConverter;
    <TTSSiriSynthWrapperDelegate> * _delegate;
    AVAudioFormat * _engineFormat;
    AVAudioFormat * _outputFormat;
    TTSSpeechString * _proccessedSpeechString;
    TTSRulesetRunner * _ruleSetRunner;
    NSObject<OS_dispatch_queue> * _synthesisQueue;
    void * _synthesizer;
    bool  _synthesizing;
    NSMutableOrderedSet * _voiceResources;
}

@property (nonatomic, retain) AVAudioConverter *bufferConverter;
@property (nonatomic, retain) <TTSSiriSynthWrapperDelegate> *delegate;
@property (nonatomic, retain) AVAudioFormat *engineFormat;
@property (nonatomic, retain) AVAudioFormat *outputFormat;
@property (nonatomic, retain) TTSSpeechString *proccessedSpeechString;
@property (nonatomic, retain) TTSRulesetRunner *ruleSetRunner;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *synthesisQueue;
@property (nonatomic) void*synthesizer;
@property bool synthesizing;
@property (nonatomic, retain) NSMutableOrderedSet *voiceResources;

- (void).cxx_destruct;
- (id)bufferConverter;
- (void)dealloc;
- (id)delegate;
- (id)engineFormat;
- (id)initWithVoicePath:(id)arg1 delegate:(id)arg2;
- (void)loadRuleset:(id)arg1;
- (bool)loadVoiceResource:(id)arg1;
- (id)outputFormat;
- (id)proccessedSpeechString;
- (id)ruleSetRunner;
- (void)setBufferConverter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEngineFormat:(id)arg1;
- (void)setOutputFormat:(id)arg1;
- (void)setProccessedSpeechString:(id)arg1;
- (void)setRuleSetRunner:(id)arg1;
- (void)setSynthesisQueue:(id)arg1;
- (void)setSynthesizer:(void*)arg1;
- (void)setSynthesizing:(bool)arg1;
- (void)setVoiceResources:(id)arg1;
- (void)stopSynthesis;
- (id)synthesisQueue;
- (void)synthesizeString:(id)arg1;
- (void*)synthesizer;
- (bool)synthesizing;
- (void)unloadAllVoiceResources;
- (bool)unloadVoiceResource:(id)arg1;
- (id)voiceResources;

@end
