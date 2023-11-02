
@interface _SVXSpeechSynthesisAudioMutation : NSObject <SVXSpeechSynthesisAudioMutating> {
    SVXSpeechSynthesisAudio * _baseModel;
    NSData * _data;
    SVXAudioStreamBasicDescription * _decoderASBD;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasData : 1; 
        unsigned int hasDecoderASBD : 1; 
        unsigned int hasPlayerASBD : 1; 
    }  _mutationFlags;
    SVXAudioStreamBasicDescription * _playerASBD;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDecoderASBD:(id)arg1;
- (void)setPlayerASBD:(id)arg1;

@end
