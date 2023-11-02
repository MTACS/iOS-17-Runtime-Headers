
@interface FTRecognitionResult : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct RecognitionResult { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *choice_alignments;
@property (nonatomic, readonly) FTRecognitionSausage *post_itn;
@property (nonatomic, readonly) NSArray *post_itn_nbest_choices;
@property (nonatomic, readonly) FTRecognitionSausage *pre_itn;
@property (nonatomic, readonly) NSArray *pre_itn_nbest_choices;
@property (nonatomic, readonly) NSArray *pre_itn_token_to_post_itn_char_alignment;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::RecognitionResult> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)choice_alignments;
- (unsigned long long)choice_alignments_count;
- (void)choice_alignments_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)choice_alignments_objectAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionResult { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionResult { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)post_itn;
- (id)post_itn_nbest_choices;
- (unsigned long long)post_itn_nbest_choices_count;
- (void)post_itn_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)post_itn_nbest_choices_objectAtIndex:(unsigned long long)arg1;
- (id)pre_itn;
- (id)pre_itn_nbest_choices;
- (unsigned long long)pre_itn_nbest_choices_count;
- (void)pre_itn_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)pre_itn_nbest_choices_objectAtIndex:(unsigned long long)arg1;
- (id)pre_itn_token_to_post_itn_char_alignment;
- (unsigned long long)pre_itn_token_to_post_itn_char_alignment_count;
- (void)pre_itn_token_to_post_itn_char_alignment_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)pre_itn_token_to_post_itn_char_alignment_objectAtIndex:(unsigned long long)arg1;

@end
