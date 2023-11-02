
@interface OPTTSMutableTextToSpeechMeta : OPTTSTextToSpeechMeta

@property (nonatomic, copy) OPTTSTextToSpeechResource *resource;
@property (nonatomic, copy) OPTTSTextToSpeechVoice *voice;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)resource;
- (void)setResource:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)voice;

@end
