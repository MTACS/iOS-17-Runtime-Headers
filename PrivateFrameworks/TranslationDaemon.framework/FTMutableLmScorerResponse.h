
@interface FTMutableLmScorerResponse : FTLmScorerResponse

@property (nonatomic) double ppl;
@property (nonatomic) int return_code;
@property (nonatomic, copy) NSString *return_str;
@property (nonatomic, copy) NSArray *tokens;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)ppl;
- (int)return_code;
- (id)return_str;
- (void)setPpl:(double)arg1;
- (void)setReturn_code:(int)arg1;
- (void)setReturn_str:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)tokens;

@end
