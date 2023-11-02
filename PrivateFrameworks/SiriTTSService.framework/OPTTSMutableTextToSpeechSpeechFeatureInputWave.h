
@interface OPTTSMutableTextToSpeechSpeechFeatureInputWave : OPTTSTextToSpeechSpeechFeatureInputWave

@property (nonatomic, copy) NSData *pcm_data;
@property (nonatomic) int sample_rate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)pcm_data;
- (void)pcm_data:(id /* block */)arg1;
- (int)sample_rate;
- (void)setPcm_data:(id)arg1;
- (void)setSample_rate:(int)arg1;

@end
