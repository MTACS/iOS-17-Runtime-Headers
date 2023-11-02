
@interface QSSSiriTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct SiriTranslationInfo { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *itn_alignments;
@property (nonatomic, readonly) NSString *post_itn_recognition;
@property (nonatomic, readonly) NSArray *post_itn_tokens;
@property (nonatomic, readonly) NSArray *raw_nbest_choices;
@property (nonatomic, readonly) QSSRecognitionSausage *raw_sausage;
@property (nonatomic, readonly) NSArray *translation_phrase;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::SiriTranslationInfo> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriTranslationInfo { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SiriTranslationInfo { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)itn_alignments;
- (id)post_itn_recognition;
- (id)post_itn_tokens;
- (id)raw_nbest_choices;
- (id)raw_sausage;
- (id)translation_phrase;

@end
