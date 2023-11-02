
@interface QSSLanguageParameters : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct LanguageParameters { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSString *fork_id;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *request_locale;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::LanguageParameters> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)fork_id;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageParameters { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageParameters { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)language;
- (id)request_locale;

@end
