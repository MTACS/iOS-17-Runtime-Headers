
@interface CVNLPTextDecodingPath : NSObject {
    long long  _characterCount;
    double  _characterLanguageModelLogProbability;
    bool  _hasProblematicMixedScriptWords;
    double  _lexiconScore;
    double  _modelLogProbability;
    long long  _pseudoSpaceCount;
    NSString * _string;
    long long  _tokenCount;
    double  _wordLanguageModelLogProbability;
}

@property (nonatomic, readonly) long long characterCount;
@property (nonatomic, readonly) double characterLanguageModelLogProbability;
@property (nonatomic, readonly) bool hasProblematicMixedScriptWords;
@property (nonatomic, readonly) double lexiconScore;
@property (nonatomic, readonly) double modelLogProbability;
@property (nonatomic, readonly) long long pseudoSpaceCount;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) long long tokenCount;
@property (nonatomic, readonly) double wordLanguageModelLogProbability;

+ (id /* block */)defaultPathScoringFunction;
+ (id /* block */)defaultPathScoringFunctionForLanguageResourceBundle:(id)arg1;
+ (id /* block */)defaultPathScoringFunctionForLanguageResourceBundle:(id)arg1 pruneProblematicMixedScriptWordPaths:(bool)arg2;
+ (id /* block */)defaultPathScoringFunctionPruneProblematicMixedScriptWordPaths:(bool)arg1;

- (void).cxx_destruct;
- (long long)characterCount;
- (double)characterLanguageModelLogProbability;
- (bool)hasProblematicMixedScriptWords;
- (id)init;
- (id)initWithCharacterLanguageModelLogProbability:(double)arg1 wordLanguageModelLogProbability:(double)arg2 lexiconScore:(double)arg3 hasProblematicMixedScriptWords:(bool)arg4 string:(id)arg5;
- (double)lexiconScore;
- (double)modelLogProbability;
- (long long)pseudoSpaceCount;
- (id)string;
- (long long)tokenCount;
- (double)wordLanguageModelLogProbability;

@end
