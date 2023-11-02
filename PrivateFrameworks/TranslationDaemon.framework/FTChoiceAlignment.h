
@interface FTChoiceAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct ChoiceAlignment { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSArray *post_itn_choice_indices;
@property (nonatomic, readonly) NSArray *pre_itn_token_to_post_itn_char_alignments;

- (void).cxx_destruct;
- (struct Offset<siri::speech::schema_fb::ChoiceAlignment> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ChoiceAlignment { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ChoiceAlignment { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;
- (id)post_itn_choice_indices;
- (unsigned long long)post_itn_choice_indices_count;
- (void)post_itn_choice_indices_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)post_itn_choice_indices_objectAtIndex:(unsigned long long)arg1;
- (id)pre_itn_token_to_post_itn_char_alignments;
- (unsigned long long)pre_itn_token_to_post_itn_char_alignments_count;
- (void)pre_itn_token_to_post_itn_char_alignments_enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)pre_itn_token_to_post_itn_char_alignments_objectAtIndex:(unsigned long long)arg1;

@end
