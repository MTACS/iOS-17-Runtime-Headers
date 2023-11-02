
@interface FTTextToSpeechResponseDevData : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechResponseDevData { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool has_click;
@property (nonatomic, readonly) NSString *log;
@property (nonatomic, readonly) FTQSSVersionInfo *server_info;
@property (nonatomic, readonly) NSString *worker_process_type;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechResponseDevData> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (bool)has_click;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResponseDevData { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResponseDevData { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)log;
- (id)server_info;
- (id)worker_process_type;

@end
