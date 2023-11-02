
@interface QSSTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long audio_type;
@property (nonatomic, readonly) QSSTextToSpeechRequestContext *context;
@property (nonatomic, readonly) NSArray *context_info;
@property (nonatomic, readonly) QSSTextToSpeechRequestDebug *debug;
@property (nonatomic, readonly) QSSTextToSpeechRequestDevConfig *dev_config;
@property (nonatomic, readonly) bool enable_word_timing_info;
@property (nonatomic, readonly) QSSTextToSpeechRequestExperiment *experiment;
@property (nonatomic, readonly) QSSTTSRequestFeatureFlags *feature_flags;
@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) QSSTextToSpeechRequestMeta *meta_info;
@property (nonatomic, readonly) long long preferred_voice_type;
@property (nonatomic, readonly) QSSTextToSpeechUserProfile *profile;
@property (nonatomic, readonly) QSSTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (nonatomic, readonly) QSSTextToSpeechRequestProsodyControlConfig *prosody_control_config;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *voice_name;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (long long)audio_type;
- (id)context;
- (id)context_info;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debug;
- (id)dev_config;
- (bool)enable_word_timing_info;
- (id)experiment;
- (id)feature_flags;
- (id)flatbuffData;
- (id)gender;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)meta_info;
- (long long)preferred_voice_type;
- (id)profile;
- (id)prosody_config;
- (id)prosody_control_config;
- (id)session_id;
- (id)speech_id;
- (id)text;
- (id)voice_name;

@end
