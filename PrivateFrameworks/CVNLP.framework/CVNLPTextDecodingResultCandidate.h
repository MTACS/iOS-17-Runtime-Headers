
@interface CVNLPTextDecodingResultCandidate : NSObject {
    double  _activationScore;
    double  _score;
    NSArray * _tokens;
}

@property double activationScore;
@property (nonatomic, readonly, copy) NSString *fullString;
@property double score;
@property (nonatomic, readonly) NSArray *tokens;

- (void).cxx_destruct;
- (double)activationScore;
- (id)fullString;
- (id)initWithTokens:(id)arg1 score:(double)arg2 activationScore:(double)arg3;
- (double)score;
- (void)setActivationScore:(double)arg1;
- (void)setScore:(double)arg1;
- (id)tokens;

@end
