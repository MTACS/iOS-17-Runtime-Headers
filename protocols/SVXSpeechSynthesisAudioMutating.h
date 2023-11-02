
@protocol SVXSpeechSynthesisAudioMutating <NSObject>

@required

- (void)setData:(NSData *)arg1;
- (void)setDecoderASBD:(SVXAudioStreamBasicDescription *)arg1;
- (void)setPlayerASBD:(SVXAudioStreamBasicDescription *)arg1;

@end
