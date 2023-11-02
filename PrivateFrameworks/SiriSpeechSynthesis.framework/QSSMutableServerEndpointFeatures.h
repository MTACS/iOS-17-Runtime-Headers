
@interface QSSMutableServerEndpointFeatures : QSSServerEndpointFeatures

@property (nonatomic) double eos_likelihood;
@property (nonatomic) int num_of_words;
@property (nonatomic, copy) NSArray *pause_counts;
@property (nonatomic) int processed_audio_duration_ms;
@property (nonatomic) double silence_posterior;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSString *task_name;
@property (nonatomic) int trailing_silence_duration;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)eos_likelihood;
- (id)init;
- (int)num_of_words;
- (id)pause_counts;
- (int)processed_audio_duration_ms;
- (void)setEos_likelihood:(double)arg1;
- (void)setNum_of_words:(int)arg1;
- (void)setPause_counts:(id)arg1;
- (void)setProcessed_audio_duration_ms:(int)arg1;
- (void)setSilence_posterior:(double)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setTask_name:(id)arg1;
- (void)setTrailing_silence_duration:(int)arg1;
- (double)silence_posterior;
- (id)speech_id;
- (id)task_name;
- (int)trailing_silence_duration;

@end
