
@interface FTMultiUserStartSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct MultiUserStartSpeechRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *primary_speech_id;
@property (nonatomic, readonly) FTStartSpeechRequest *start_speech_request;
@property (nonatomic, readonly) NSArray *user_parameters;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::MultiUserStartSpeechRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserStartSpeechRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserStartSpeechRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)primary_speech_id;
- (id)start_speech_request;
- (id)user_parameters;
- (unsigned long long)user_parameters_count;
- (void)user_parameters_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)user_parameters_objectAtIndex:(unsigned long long)arg1;

@end
