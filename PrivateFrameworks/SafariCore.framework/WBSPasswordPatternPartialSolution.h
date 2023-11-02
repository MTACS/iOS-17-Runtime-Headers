
@interface WBSPasswordPatternPartialSolution : NSObject {
    double  _guessesRequiredWithPatternCountPenalty;
    double  _guessesRequiredWithoutPatternCountPenalty;
    WBSPasswordPatternMatch * _patternMatch;
}

@property (nonatomic, readonly) double guessesRequiredWithPatternCountPenalty;
@property (nonatomic, readonly) double guessesRequiredWithoutPatternCountPenalty;
@property (nonatomic, readonly) WBSPasswordPatternMatch *patternMatch;

- (void).cxx_destruct;
- (double)guessesRequiredWithPatternCountPenalty;
- (double)guessesRequiredWithoutPatternCountPenalty;
- (id)initWithPatternMatch:(id)arg1 guessesRequiredWithoutPatternCountPenalty:(double)arg2 withPatternCountPenalty:(double)arg3;
- (id)patternMatch;

@end
