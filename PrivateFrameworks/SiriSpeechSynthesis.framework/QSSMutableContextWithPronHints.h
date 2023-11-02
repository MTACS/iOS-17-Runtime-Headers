
@interface QSSMutableContextWithPronHints : QSSContextWithPronHints

@property (nonatomic, copy) NSString *contextual_text;
@property (nonatomic, copy) NSArray *pron_hints;

- (id)contextual_text;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)pron_hints;
- (void)setContextual_text:(id)arg1;
- (void)setPron_hints:(id)arg1;

@end
