
@interface FTTextToSpeechVoice : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechVoice { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *gender;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *quality;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechVoice> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)gender;
- (id)identifier;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoice { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoice { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)name;
- (id)quality;
- (id)type;
- (id)version;

@end
