
@interface QSSMutableWebTranslationInfo : QSSWebTranslationInfo

@property (nonatomic, copy) NSArray *spans;
@property (nonatomic, copy) NSString *text;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setSpans:(id)arg1;
- (void)setText:(id)arg1;
- (id)spans;
- (id)text;

@end
