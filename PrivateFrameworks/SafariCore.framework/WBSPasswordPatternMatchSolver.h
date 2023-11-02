
@interface WBSPasswordPatternMatchSolver : NSObject {
    NSMutableDictionary * _partialSolutions;
    NSString * _password;
    NSSet * _patternMatches;
}

- (void).cxx_destruct;
- (void)_enumeratePartialSolutionsWithEndIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)_exhaustiveSearchPatternWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2;
- (id)_partialSolutionWithEndIndex:(unsigned long long)arg1 patternCount:(unsigned long long)arg2;
- (void)_setPartialSolution:(id)arg1 withEndIndex:(unsigned long long)arg2 patternCount:(unsigned long long)arg3;
- (id)_unwindSolution;
- (void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:(unsigned long long)arg1;
- (void)_updatePartialSolutionsWithPatternMatch:(id)arg1 patternCount:(unsigned long long)arg2;
- (id)initWithPassword:(id)arg1 patternMatches:(id)arg2;
- (id)optimalEvaluation;

@end
