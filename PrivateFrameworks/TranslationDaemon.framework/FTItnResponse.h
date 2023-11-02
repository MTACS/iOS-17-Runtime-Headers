
@interface FTItnResponse : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ItnResponse { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *formatted_words_list;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) int return_code;
@property (nonatomic, readonly) NSString *return_str;
@property (nonatomic, readonly) NSString *session_id;
@property (nonatomic, readonly) NSString *speech_id;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ItnResponse> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)formatted_words_list;
- (unsigned long long)formatted_words_list_count;
- (void)formatted_words_list_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)formatted_words_list_objectAtIndex:(unsigned long long)arg1;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnResponse { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnResponse { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (int)return_code;
- (id)return_str;
- (id)session_id;
- (id)speech_id;

@end
