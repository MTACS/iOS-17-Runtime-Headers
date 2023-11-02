
@interface QSSKeywordFinderResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct KeywordFinderResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) QSSRecognitionSausage *corrected_sausage;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSArray *n_best_list;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::KeywordFinderResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)corrected_sausage;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct KeywordFinderResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)n_best_list;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (id)speech_id;

@end
