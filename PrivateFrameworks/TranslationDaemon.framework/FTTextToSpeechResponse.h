
@interface FTTextToSpeechResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSData *audio;
@property (nonatomic, readonly) long long audio_type;
@property (nonatomic, readonly) FTAudioDescription *decoder_description;
@property (nonatomic, readonly) FTTextToSpeechResponseDevData *dev_data;
@property (nonatomic, readonly) int error_code;
@property (nonatomic, readonly) NSString *error_str;
@property (nonatomic, readonly) FTTextToSpeechFeature *feature;
@property (nonatomic, readonly) FTTextToSpeechMeta *meta_info;
@property (nonatomic, readonly) FTAudioDescription *playback_description;
@property (nonatomic, readonly) int sample_rate;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSArray *word_timing_info;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)audio;
- (void)audio:(id /* block */)arg1;
- (long long)audio_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decoder_description;
- (id)dev_data;
- (int)error_code;
- (id)error_str;
- (id)feature;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)meta_info;
- (id)playback_description;
- (int)sample_rate;
- (id)session_id;
- (id)speech_id;
- (id)word_timing_info;
- (unsigned long long)word_timing_info_count;
- (void)word_timing_info_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)word_timing_info_objectAtIndex:(unsigned long long)arg1;

@end
