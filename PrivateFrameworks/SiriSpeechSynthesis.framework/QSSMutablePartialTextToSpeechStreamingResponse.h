
@interface QSSMutablePartialTextToSpeechStreamingResponse : QSSPartialTextToSpeechStreamingResponse

@property (nonatomic, copy) NSData *audio;
@property (nonatomic) int current_pkt_number;
@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic, copy) QSSTextToSpeechFeature *feature;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSString *stream_id;
@property (nonatomic, copy) NSArray *word_timing_info;

- (id)audio;
- (void)audio:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)current_pkt_number;
- (int)error_code;
- (id)error_str;
- (id)feature;
- (id)init;
- (id)session_id;
- (void)setAudio:(id)arg1;
- (void)setCurrent_pkt_number:(int)arg1;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setStream_id:(id)arg1;
- (void)setWord_timing_info:(id)arg1;
- (id)speech_id;
- (id)stream_id;
- (id)word_timing_info;

@end
