
@interface QSSMutableTokenProns : QSSTokenProns

@property (nonatomic, copy) NSArray *normalized_prons;
@property (nonatomic, copy) NSString *orthography;
@property (nonatomic, copy) NSArray *prons;
@property (nonatomic, copy) NSArray *sanitized_sequences;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)normalized_prons;
- (id)orthography;
- (id)prons;
- (id)sanitized_sequences;
- (void)setNormalized_prons:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setProns:(id)arg1;
- (void)setSanitized_sequences:(id)arg1;

@end
