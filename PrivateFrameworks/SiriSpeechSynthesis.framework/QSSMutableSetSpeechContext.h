
@interface QSSMutableSetSpeechContext : QSSSetSpeechContext

@property (nonatomic, copy) NSArray *context_with_pron_hints;
@property (nonatomic, copy) NSArray *contextual_text;
@property (nonatomic, copy) NSString *left_context;
@property (nonatomic, copy) NSString *right_context;

- (id)context_with_pron_hints;
- (id)contextual_text;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)left_context;
- (id)right_context;
- (void)setContext_with_pron_hints:(id)arg1;
- (void)setContextual_text:(id)arg1;
- (void)setLeft_context:(id)arg1;
- (void)setRight_context:(id)arg1;

@end
