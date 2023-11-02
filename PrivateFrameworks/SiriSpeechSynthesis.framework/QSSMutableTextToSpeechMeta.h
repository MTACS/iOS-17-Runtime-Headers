
@interface QSSMutableTextToSpeechMeta : QSSTextToSpeechMeta

@property (nonatomic, copy) QSSTextToSpeechResource *resource;
@property (nonatomic, copy) QSSTextToSpeechVoice *voice;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)resource;
- (void)setResource:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)voice;

@end
