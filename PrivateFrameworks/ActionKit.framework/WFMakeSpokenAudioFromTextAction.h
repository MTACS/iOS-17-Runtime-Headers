
@interface WFMakeSpokenAudioFromTextAction : WFAction <WFSpeechSynthesizerDelegate> {
    WFSpeechSynthesizer * _synthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFSpeechSynthesizer *synthesizer;

- (void).cxx_destruct;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFailSpeakingUtterance:(id)arg2 error:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingUtterance:(id)arg2 intoFile:(id)arg3;
- (id)synthesizer;
- (id)voicePickerParameter;

@end
