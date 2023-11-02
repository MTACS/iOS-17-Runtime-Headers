
@interface QSSMutableEndPointCandidate : QSSEndPointCandidate

@property (nonatomic) int end_point_likelihood;
@property (nonatomic) int processed_audio_duration_ms;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)end_point_likelihood;
- (id)init;
- (int)processed_audio_duration_ms;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (void)setEnd_point_likelihood:(int)arg1;
- (void)setProcessed_audio_duration_ms:(int)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (id)speech_id;

@end
