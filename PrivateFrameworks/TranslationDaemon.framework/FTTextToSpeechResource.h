
@interface FTTextToSpeechResource : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TextToSpeechResource { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TextToSpeechResource> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)identifier;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResource { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechResource { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)version;

@end
