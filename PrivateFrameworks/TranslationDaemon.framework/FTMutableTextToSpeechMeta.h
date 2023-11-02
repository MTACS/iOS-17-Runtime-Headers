
@interface FTMutableTextToSpeechMeta : FTTextToSpeechMeta

@property (nonatomic, copy) FTTextToSpeechResource *resource;
@property (nonatomic, copy) FTQSSVersionInfo *server_info;
@property (nonatomic, copy) FTTextToSpeechVoice *voice;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)resource;
- (id)server_info;
- (void)setResource:(id)arg1;
- (void)setServer_info:(id)arg1;
- (void)setVoice:(id)arg1;
- (id)voice;

@end
