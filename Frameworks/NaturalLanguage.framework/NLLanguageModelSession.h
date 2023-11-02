
@interface NLLanguageModelSession : NSObject {
    NLLanguageModel * _languageModel;
}

@property (nonatomic, readonly, retain) NLLanguageModel *languageModel;

+ (void)performMaintenance;
+ (void)setLogLevel:(long long)arg1;

- (void).cxx_destruct;
- (void)adaptToText:(id)arg1;
- (void)adaptToToken:(id)arg1 context:(id)arg2;
- (void)addPriorText:(id)arg1 type:(long long)arg2 time:(id)arg3;
- (void)applyExponentialDecay;
- (long long)blocklistStatusForString:(id)arg1 matchType:(long long)arg2;
- (id)conditionalProbabilitiesForStrings:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilitiesForTokens:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;
- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (void)flushDynamicData;
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;
- (id)languageModel;
- (void)pruneToSize:(unsigned long long)arg1;
- (void)recordWithDifferentialPrivacy:(id)arg1;
- (void)registerNegativeEvidenceForToken:(id)arg1;
- (void)reset;
- (id)stateWithOptions:(id)arg1;
- (void)unadaptToToken:(id)arg1 context:(id)arg2;

@end
