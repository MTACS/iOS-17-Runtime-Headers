
@interface FTLanguageDetectionResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LanguageDetectionResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *detected_locale;
@property (nonatomic, readonly) NSArray *predictions;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_string;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::LanguageDetectionResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detected_locale;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)predictions;
- (unsigned long long)predictions_count;
- (void)predictions_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)predictions_objectAtIndex:(unsigned long long)arg1;
- (int)return_code;
- (id)return_string;
- (id)session_id;
- (id)speech_id;

@end
