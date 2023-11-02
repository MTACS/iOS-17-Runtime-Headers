
@interface FTStreamingTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StreamingTranslationRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *app_id;
@property (nonatomic, readonly) bool disable_log;
@property (nonatomic, readonly) bool final_message;
@property (nonatomic, readonly) long long opt_in_status;
@property (nonatomic, readonly) NSString *request_id;
@property (nonatomic, readonly) NSString *sequence_id;
@property (nonatomic, readonly) NSString *source_language;
@property (nonatomic, readonly) NSString *speech_id;
@property (nonatomic, readonly) NSString *target_language;
@property (nonatomic, readonly) NSString *task;
@property (nonatomic, readonly) NSString *translation_text;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StreamingTranslationRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disable_log;
- (bool)final_message;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StreamingTranslationRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)opt_in_status;
- (id)request_id;
- (id)sequence_id;
- (id)source_language;
- (id)speech_id;
- (id)target_language;
- (id)task;
- (id)translation_text;

@end
