
@interface QSSMutableBeginTextToSpeechStreamingResponse : QSSBeginTextToSpeechStreamingResponse

@property (nonatomic) long long audio_type;
@property (nonatomic, copy) QSSAudioDescription *decoder_description;
@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic, copy) QSSTextToSpeechMeta *meta_info;
@property (nonatomic, copy) QSSAudioDescription *playback_description;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSString *stream_id;
@property (nonatomic) float streaming_playback_buffer_size_in_seconds;

- (long long)audio_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decoder_description;
- (int)error_code;
- (id)error_str;
- (id)init;
- (id)meta_info;
- (id)playback_description;
- (id)session_id;
- (void)setAudio_type:(long long)arg1;
- (void)setDecoder_description:(id)arg1;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setMeta_info:(id)arg1;
- (void)setPlayback_description:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setStream_id:(id)arg1;
- (void)setStreaming_playback_buffer_size_in_seconds:(float)arg1;
- (id)speech_id;
- (id)stream_id;
- (float)streaming_playback_buffer_size_in_seconds;

@end
