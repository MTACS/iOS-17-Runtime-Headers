
@interface QSSMutableLmScorerToken : QSSLmScorerToken

@property (nonatomic) double log10_score;
@property (nonatomic) int ngram_used;
@property (nonatomic, copy) NSString *token_str;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)log10_score;
- (int)ngram_used;
- (void)setLog10_score:(double)arg1;
- (void)setNgram_used:(int)arg1;
- (void)setToken_str:(id)arg1;
- (id)token_str;

@end
