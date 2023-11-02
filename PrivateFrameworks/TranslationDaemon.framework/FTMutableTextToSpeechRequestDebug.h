
@interface FTMutableTextToSpeechRequestDebug : FTTextToSpeechRequestDebug

@property (nonatomic) bool disable_cache;
@property (nonatomic) bool force_use_tts_service;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disable_cache;
- (bool)force_use_tts_service;
- (id)init;
- (void)setDisable_cache:(bool)arg1;
- (void)setForce_use_tts_service:(bool)arg1;

@end
