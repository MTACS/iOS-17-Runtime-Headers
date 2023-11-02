
@interface NLLanguageModel : NSObject {
    NLLexicon * _lexicon;
    NSString * _localization;
    void * _model;
    NLTokenizer * _tokenizer;
}

@property (readonly, copy) NLLexicon *lexicon;
@property (readonly, copy) NSString *localization;

+ (id)languageModelWithOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (double)conditionalProbabilityForEntry:(id)arg1 context:(id)arg2;
- (double)conditionalProbabilityForWord:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)enumeratePredictionsForContext:(id)arg1 maxEntriesPerPrediction:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumeratePredictionsForContext:(id)arg1 maxWordsPerPrediction:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (bool)generatesPredictions;
- (bool)getConditionalProbabilityForTokenID:(unsigned int)arg1 context:(const unsigned int*)arg2 length:(unsigned long long)arg3 probability:(double*)arg4;
- (long long)granularity;
- (id)initWithLocalization:(id)arg1;
- (id)language;
- (id)languages;
- (id)lexicon;
- (id)locale;
- (id)localization;
- (id)sessionWithOptions:(id)arg1;
- (id)stringForTokenID:(unsigned int)arg1;
- (id)tokenIDConverter;
- (unsigned int)tokenIDForString:(id)arg1;

@end
