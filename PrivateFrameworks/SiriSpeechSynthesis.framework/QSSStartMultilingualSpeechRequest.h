
@interface QSSStartMultilingualSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct StartMultilingualSpeechRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *language_parameters_by_id;
@property (nonatomic, readonly) QSSStartSpeechRequest *start_speech_request;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::StartMultilingualSpeechRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartMultilingualSpeechRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartMultilingualSpeechRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language_parameters_by_id;
- (id)start_speech_request;

@end
