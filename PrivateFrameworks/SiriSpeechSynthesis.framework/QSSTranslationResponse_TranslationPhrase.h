
@interface QSSTranslationResponse_TranslationPhrase : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct TranslationPhrase { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) bool low_confidence;
@property (nonatomic, readonly) NSString *meta_info;
@property (nonatomic, readonly) NSArray *spans;
@property (nonatomic, readonly) NSArray *translated_tokens;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::TranslationResponse_::TranslationPhrase> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhrase { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhrase { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (bool)low_confidence;
- (id)meta_info;
- (id)spans;
- (id)translated_tokens;

@end
