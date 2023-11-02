
@interface QSSKeywordFinderRequest : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct KeywordFinderRequest { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) bool enable_sanitization;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) QSSRecognitionResult *recognition_result;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::KeywordFinderRequest> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enable_sanitization;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderRequest { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderRequest { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)keywords;
- (id)language;
- (id)recognition_result;
- (id)session_id;
- (id)speech_id;

@end
