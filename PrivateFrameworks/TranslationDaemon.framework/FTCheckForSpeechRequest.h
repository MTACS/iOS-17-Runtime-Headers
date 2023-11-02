
@interface FTCheckForSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct CheckForSpeechRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) long long end_speech_time;
@property (nonatomic, readonly) long long start_speech_time;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::CheckForSpeechRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)end_speech_time;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CheckForSpeechRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CheckForSpeechRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (long long)start_speech_time;

@end
