
@interface WFSpeechSynthesizer : NSObject <AVSpeechSynthesizerDelegate, VSSpeechSynthesizerDelegate> {
    AVSpeechSynthesizer * _avSynthesizer;
    NSMapTable * _avUtteranceOutputTable;
    <WFSpeechSynthesizerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    VSSpeechSynthesizer * _vsSynthesizer;
}

@property (nonatomic, readonly) AVSpeechSynthesizer *avSynthesizer;
@property (nonatomic, readonly) NSMapTable *avUtteranceOutputTable;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFSpeechSynthesizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VSSpeechSynthesizer *vsSynthesizer;

+ (id)defaultAudioFileSettings;

- (void).cxx_destruct;
- (unsigned long long)audioFormatForSettings:(id)arg1;
- (id)avSpeechUtteranceForVoice:(id)arg1 utterance:(id)arg2 rate:(double)arg3 pitch:(double)arg4;
- (id)avSynthesizer;
- (id)avUtteranceOutputTable;
- (id)delegate;
- (void)failSpeakingAVUtterance:(id)arg1 withError:(id)arg2;
- (void)failSpeakingUtterance:(id)arg1 withError:(id)arg2;
- (id)init;
- (id)invalidAudioBufferError;
- (id)outputFileURLForUtterance:(id)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)speakUtterance:(id)arg1 usingVoice:(id)arg2 rate:(double)arg3 pitch:(double)arg4;
- (void)speakUtteranceIntoFile:(id)arg1 usingVoice:(id)arg2 rate:(double)arg3 pitch:(double)arg4;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forRequest:(id)arg3;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 utterance:(id)arg3;
- (void)stop;
- (id)vsSpeechRequestForVoice:(id)arg1 utterance:(id)arg2 rate:(double)arg3 pitch:(double)arg4 intoFile:(bool)arg5;
- (id)vsSynthesizer;

@end
