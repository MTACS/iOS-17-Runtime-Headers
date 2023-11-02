
@interface CRLineWrappingContext : NSObject {
    bool  _active;
    CRLineWrappingClassifier * _classifier;
    unsigned long long  _contextSize;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _contextTokens;
    unsigned long long  _lineCount;
    double  _lineHeightSum;
    NSString * _locale;
    CRLanguageResourcesManager * _lrManager;
    NSMutableArray * _results;
    NSString * _text;
    double  _verticalSpacingSum;
    long long  _verticalSpacingSumCount;
}

@property (readonly) bool active;
@property (readonly) double averageLineHeight;
@property (readonly) double averageVerticalSpacing;
@property (readonly) NSArray *contextResults;
@property (readonly) <CRLayoutLine> *lastFeature;
@property (readonly) unsigned long long lineCount;
@property (readonly) NSString *locale;
@property (readonly) bool shouldConsiderLetterCase;
@property (readonly) NSString *text;
@property (readonly) bool usesWordTokens;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)active;
- (void)addResult:(id)arg1;
- (double)averageLineHeight;
- (double)averageVerticalSpacing;
- (double)charLMScoreByAddingString:(id)arg1 eosScore:(double*)arg2;
- (bool)classifierShouldCorrectOverwrappingWithEvaluation:(long long)arg1 correctionMode:(long long)arg2;
- (bool)classifierShouldInsertLineBreakForEvaluationResult:(id)arg1 threshold:(float)arg2;
- (id)contextResults;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;
- (bool)isClassifierAvailable;
- (bool)isValidWordString:(id)arg1;
- (id)lastFeature;
- (unsigned long long)lineCount;
- (id)locale;
- (void)resetContext;
- (bool)shouldAllowWhitespaceDelimiterForString:(id)arg1;
- (bool)shouldConsiderLetterCase;
- (void)startWithResult:(id)arg1 contextSize:(long long)arg2;
- (id)text;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })tokenizeStringIntoWords:(id)arg1;
- (bool)usesWordTokens;
- (double)wordLMScoreByAddingToken:(unsigned int)arg1;
- (double)wordLMScoreByAddingTokens:(const void*)arg1;

@end
