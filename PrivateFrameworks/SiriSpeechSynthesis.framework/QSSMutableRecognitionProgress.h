
@interface QSSMutableRecognitionProgress : QSSRecognitionProgress

@property (nonatomic) int processed_audio_duration_ms;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (int)processed_audio_duration_ms;
- (void)setProcessed_audio_duration_ms:(int)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
