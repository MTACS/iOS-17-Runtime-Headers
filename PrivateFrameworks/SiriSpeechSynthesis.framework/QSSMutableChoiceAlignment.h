
@interface QSSMutableChoiceAlignment : QSSChoiceAlignment

@property (nonatomic, copy) NSArray *post_itn_choice_indices;
@property (nonatomic, copy) NSArray *pre_itn_token_to_post_itn_char_alignments;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)post_itn_choice_indices;
- (id)pre_itn_token_to_post_itn_char_alignments;
- (void)setPost_itn_choice_indices:(id)arg1;
- (void)setPre_itn_token_to_post_itn_char_alignments:(id)arg1;

@end
