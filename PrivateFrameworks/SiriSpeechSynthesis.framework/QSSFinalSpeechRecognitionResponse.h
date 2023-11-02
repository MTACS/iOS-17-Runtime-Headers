
@interface QSSFinalSpeechRecognitionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct FinalSpeechRecognitionResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSAudioAnalytics *audio_analytics;
@property (nonatomic, readonly) bool has_result;
@property (nonatomic, readonly) long long lang_profile_recreate_codes;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) QSSLatnnMitigatorResult *latnn_mitigator_result;
@property (nonatomic, readonly) QSSRecognitionResult *recognition_result;
@property (nonatomic, readonly) NSString *request_locale;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) long long watermark_detection;
@property (nonatomic, readonly) double watermark_peak_average;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::FinalSpeechRecognitionResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)audio_analytics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (bool)has_result;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalSpeechRecognitionResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalSpeechRecognitionResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)lang_profile_recreate_codes;
- (id)language;
- (id)latnn_mitigator_result;
- (id)recognition_result;
- (id)request_locale;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (id)speech_id;
- (long long)watermark_detection;
- (double)watermark_peak_average;

@end
