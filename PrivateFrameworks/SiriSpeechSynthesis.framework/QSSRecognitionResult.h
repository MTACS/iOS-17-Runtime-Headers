
@interface QSSRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionResult { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *choice_alignments;
@property (nonatomic, readonly) QSSRecognitionSausage *post_itn;
@property (nonatomic, readonly) NSArray *post_itn_nbest_choices;
@property (nonatomic, readonly) QSSRecognitionSausage *pre_itn;
@property (nonatomic, readonly) NSArray *pre_itn_nbest_choices;
@property (nonatomic, readonly) NSArray *pre_itn_token_to_post_itn_char_alignment;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RecognitionResult> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)choice_alignments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionResult { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionResult { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)post_itn;
- (id)post_itn_nbest_choices;
- (id)pre_itn;
- (id)pre_itn_nbest_choices;
- (id)pre_itn_token_to_post_itn_char_alignment;

@end
