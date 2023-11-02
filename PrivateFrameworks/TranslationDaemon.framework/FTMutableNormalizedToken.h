
@interface FTMutableNormalizedToken : FTNormalizedToken

@property (nonatomic, copy) NSArray *nbest_variants;
@property (nonatomic, copy) NSString *original_token;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)nbest_variants;
- (id)original_token;
- (void)setNbest_variants:(id)arg1;
- (void)setOriginal_token:(id)arg1;

@end
