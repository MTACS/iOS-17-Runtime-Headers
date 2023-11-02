
@interface QSSMutableRecognitionResult : QSSRecognitionResult

@property (nonatomic, copy) NSArray *choice_alignments;
@property (nonatomic, copy) QSSRecognitionSausage *post_itn;
@property (nonatomic, copy) NSArray *post_itn_nbest_choices;
@property (nonatomic, copy) QSSRecognitionSausage *pre_itn;
@property (nonatomic, copy) NSArray *pre_itn_nbest_choices;
@property (nonatomic, copy) NSArray *pre_itn_token_to_post_itn_char_alignment;

- (id)choice_alignments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)post_itn;
- (id)post_itn_nbest_choices;
- (id)pre_itn;
- (id)pre_itn_nbest_choices;
- (id)pre_itn_token_to_post_itn_char_alignment;
- (void)setChoice_alignments:(id)arg1;
- (void)setPost_itn:(id)arg1;
- (void)setPost_itn_nbest_choices:(id)arg1;
- (void)setPre_itn:(id)arg1;
- (void)setPre_itn_nbest_choices:(id)arg1;
- (void)setPre_itn_token_to_post_itn_char_alignment:(id)arg1;

@end
