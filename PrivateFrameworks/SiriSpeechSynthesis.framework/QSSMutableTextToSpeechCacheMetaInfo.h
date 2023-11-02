
@interface QSSMutableTextToSpeechCacheMetaInfo : QSSTextToSpeechCacheMetaInfo

@property (nonatomic) int audio_length;
@property (nonatomic) long long audio_type;
@property (nonatomic, copy) QSSAudioDescription *decoder_description;
@property (nonatomic) bool enable_word_timing_info;
@property (nonatomic, copy) QSSTextToSpeechMeta *meta_info;
@property (nonatomic, copy) NSString *original_session_id;
@property (nonatomic, copy) QSSAudioDescription *playback_description;
@property (nonatomic, copy) NSString *text;

- (int)audio_length;
- (long long)audio_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decoder_description;
- (bool)enable_word_timing_info;
- (id)init;
- (id)meta_info;
- (id)original_session_id;
- (id)playback_description;
- (void)setAudio_length:(int)arg1;
- (void)setAudio_type:(long long)arg1;
- (void)setDecoder_description:(id)arg1;
- (void)setEnable_word_timing_info:(bool)arg1;
- (void)setMeta_info:(id)arg1;
- (void)setOriginal_session_id:(id)arg1;
- (void)setPlayback_description:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
