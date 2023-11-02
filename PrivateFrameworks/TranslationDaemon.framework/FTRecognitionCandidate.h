
@interface FTRecognitionCandidate : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionCandidate { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) FTAudioAnalytics *audio_analytics;
@property (nonatomic, readonly) long long fingerprint_detection;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) FTLatnnMitigatorResult *latnn_mitigator_result;
@property (nonatomic, readonly) FTRecognitionResult *recognition_result;
@property (nonatomic, readonly) NSString *request_locale;
@property (nonatomic, readonly) NSString *result_candidate_id;
@property (nonatomic, readonly) NSString *result_id;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) double snr;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) bool speech_profile_used;
@property (nonatomic, readonly) long long watermark_detection;
@property (nonatomic, readonly) double watermark_peak_average;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RecognitionCandidate> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)audio_analytics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)fingerprint_detection;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionCandidate { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionCandidate { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)latnn_mitigator_result;
- (id)recognition_result;
- (id)request_locale;
- (id)result_candidate_id;
- (id)result_id;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (double)snr;
- (id)speech_id;
- (bool)speech_profile_used;
- (long long)watermark_detection;
- (double)watermark_peak_average;

@end
