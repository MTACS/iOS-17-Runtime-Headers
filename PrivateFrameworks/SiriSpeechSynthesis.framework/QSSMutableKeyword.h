
@interface QSSMutableKeyword : QSSKeyword

@property (nonatomic, copy) NSString *keyword_orthography;
@property (nonatomic) double posterior;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)keyword_orthography;
- (double)posterior;
- (void)setKeyword_orthography:(id)arg1;
- (void)setPosterior:(double)arg1;

@end
