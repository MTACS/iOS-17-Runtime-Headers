
@interface VTUISpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate> {
    id /* block */  _playAudioFileCompletion;
    id /* block */  _speakStringCompletion;
    VSSpeechSynthesizer * _synthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ playAudioFileCompletion;
@property (nonatomic, copy) id /* block */ speakStringCompletion;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSSpeechSynthesizer *synthesizer;

- (void).cxx_destruct;
- (id)init;
- (bool)isSpeaking;
- (void)playAudioFileAtPath:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)playAudioFileCompletion;
- (void)setPlayAudioFileCompletion:(id /* block */)arg1;
- (void)setSpeakStringCompletion:(id /* block */)arg1;
- (void)setSynthesizer:(id)arg1;
- (void)speak:(id)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)speakStringCompletion;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(bool)arg3 error:(id)arg4;
- (void)stopSpeaking;
- (id)synthesizer;

@end
