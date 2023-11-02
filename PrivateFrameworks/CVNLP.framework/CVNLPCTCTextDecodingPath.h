
@interface CVNLPCTCTextDecodingPath : CVNLPTextDecodingPath {
    double  _activeWordLexiconLogProbability;
    unsigned long long  _beginningCurrentWord;
    double  _blankLogProbability;
    struct CVNLPLanguageModelWithState { } * _characterLMState;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _cumulativeTokenLogProbabilities;
    CVNLPLexiconCursors * _cursors;
    bool  _hasCalculatedHasProblematicMixedScriptWords;
    bool  _hasContext;
    bool  _hasExpanded;
    bool  _hasProblematicMixedScriptWords;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _histWordTokenIDs;
    double  _historyLexiconLogProbability;
    CVNLPLanguageResourceBundle * _languageResourceBundle;
    double  _languageResourceLogProbability;
    int  _lastCodeUnitType;
    NSString * _latestExpandedSymbolIncludingPseudospace;
    double  _nonBlankLogProbability;
    double  _normalizedTotalLogProbability;
    bool  _optimizingAlignment;
    id /* block */  _scoringFunction;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _tokenBoundaryLogProbabilities;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _tokenCommitCharacterLengths;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _tokenMaxActivations;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _tokenString;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _tokenStringSegmentationPositions;
}

@property double activeWordLexiconLogProbability;
@property double blankLogProbability;
@property (nonatomic) struct CVNLPLanguageModelWithState { }*characterLMState;
@property (nonatomic, retain) CVNLPLexiconCursors *cursors;
@property (nonatomic, readonly) bool hasExpanded;
@property double historyLexiconLogProbability;
@property (nonatomic, readonly, retain) CVNLPLanguageResourceBundle *languageResourceBundle;
@property (readonly) double languageResourceLogProbability;
@property double lastTokenBoundaryLogProbability;
@property (nonatomic, readonly) NSString *latestExpandedSymbol;
@property (nonatomic, readonly) NSString *latestExpandedSymbolIncludingPseudospace;
@property double nonBlankLogProbability;
@property (readonly) double normalizedActivationLogProbability;
@property (readonly) double normalizedTotalLogProbability;
@property (readonly) bool optimizingAlignment;
@property (nonatomic, readonly) id /* block */ scoringFunction;

+ (id)_getQueue;
+ (void)applyWordLanguageModelProbabilityToPath:(id)arg1 stemmedFromPath:(id)arg2 isCommittingToken:(bool)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_currentTokenStringLength;
- (void)_updateCharacterLanguageModelLogProbabilityForString:(id)arg1 stemmingFromPath:(id)arg2 normalizedCodepoint:(unsigned int)arg3;
- (void)_updateLexiconLogProbabilityForString:(id)arg1 stemmingFromPath:(id)arg2;
- (float)_wordLanguageModelLogProbabilityForString:(id)arg1 originalWordRanges:(id)arg2 originalWordIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })arg3 wordRanges:(id)arg4 wordIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })arg5;
- (double)activeWordLexiconLogProbability;
- (double)blankLogProbability;
- (long long)characterCount;
- (struct CVNLPLanguageModelWithState { }*)characterLMState;
- (id)childPathWithBlankLogProb:(double)arg1;
- (void)commitTokenAtTimestep:(long long)arg1 currentSymbolLogProbability:(double)arg2 commitAction:(long long)arg3 string:(id)arg4 stemmingFromPath:(id)arg5;
- (long long)compare:(id)arg1;
- (id)cursors;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)hasExpanded;
- (bool)hasProblematicMixedScriptWords;
- (double)historyLexiconLogProbability;
- (id)initWithLanguageResourceBundle:(id)arg1 scoringFunction:(id /* block */)arg2 initialCharacterLMState:(struct CVNLPLanguageModelWithState { }*)arg3 characterTokenIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })arg4 wordTokenIDs:(struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })arg5 optimizingAlignment:(bool)arg6 hasContext:(bool)arg7;
- (id)languageResourceBundle;
- (double)languageResourceLogProbability;
- (double)lastTokenBoundaryLogProbability;
- (id)latestExpandedSymbol;
- (id)latestExpandedSymbolIncludingPseudospace;
- (double)lexiconScore;
- (void)merge:(id)arg1 logProbCumulator:(id /* block */)arg2;
- (double)modelLogProbability;
- (double)nonBlankLogProbability;
- (double)normalizedActivationLogProbability;
- (double)normalizedTotalLogProbability;
- (bool)optimizingAlignment;
- (id)pathByExtendingWithString:(id)arg1 extendedPathString:(id)arg2 blankLogProb:(double)arg3 nonBlankLogProb:(double)arg4 timestep:(long long)arg5 commitAction:(long long)arg6 symbolLogProb:(double)arg7;
- (long long)pseudoSpaceCount;
- (double)scoreForTokenIndex:(long long)arg1;
- (id /* block */)scoringFunction;
- (void)setActiveWordLexiconLogProbability:(double)arg1;
- (void)setBlankLogProbability:(double)arg1;
- (void)setCharacterCount:(long long)arg1;
- (void)setCharacterLMState:(struct CVNLPLanguageModelWithState { }*)arg1;
- (void)setCharacterLanguageModelLogProbability:(double)arg1;
- (void)setCursors:(id)arg1;
- (void)setHistoryLexiconLogProbability:(double)arg1;
- (void)setLastTokenBoundaryLogProbability:(double)arg1;
- (void)setNonBlankLogProbability:(double)arg1;
- (void)setPseudoSpaceCount:(long long)arg1;
- (void)setWordLanguageModelLogProbability:(double)arg1;
- (long long)tokenCount;
- (id)tokensWithTimestep:(long long)arg1 isFinalTimestep:(bool)arg2;
- (void)updateLastTokenWithMaxActivation:(long long)arg1 totalLogProbability:(double)arg2 tokenBoundaryLogProbability:(double)arg3;

@end
