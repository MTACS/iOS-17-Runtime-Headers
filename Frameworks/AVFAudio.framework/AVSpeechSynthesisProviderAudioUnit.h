
@interface AVSpeechSynthesisProviderAudioUnit : AUAudioUnit {
    id /* block */  _speechSynthesisOutputMetadataBlock;
    NSArray * _speechVoices;
}

@property (nonatomic, copy) id /* block */ speechSynthesisOutputMetadataBlock;
@property (nonatomic, retain) NSArray *speechVoices;

+ (void)initialize;

- (void).cxx_destruct;
- (void)cancelSpeechRequest;
- (void)setSpeechSynthesisOutputMetadataBlock:(id /* block */)arg1;
- (void)setSpeechVoices:(id)arg1;
- (id /* block */)speechSynthesisOutputMetadataBlock;
- (id)speechVoices;
- (void)synthesizeSpeechRequest:(id)arg1;

@end
