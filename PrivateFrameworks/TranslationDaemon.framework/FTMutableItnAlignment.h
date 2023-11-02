
@interface FTMutableItnAlignment : FTItnAlignment

@property (nonatomic) int first_post_itn_char_pos;
@property (nonatomic) int first_pre_itn_token_index;
@property (nonatomic) int last_post_itn_char_pos;
@property (nonatomic) int last_pre_itn_token_index;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)first_post_itn_char_pos;
- (int)first_pre_itn_token_index;
- (id)init;
- (int)last_post_itn_char_pos;
- (int)last_pre_itn_token_index;
- (void)setFirst_post_itn_char_pos:(int)arg1;
- (void)setFirst_pre_itn_token_index:(int)arg1;
- (void)setLast_post_itn_char_pos:(int)arg1;
- (void)setLast_pre_itn_token_index:(int)arg1;

@end
