
@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REMLModelManagerObserver, REPredictorObserver> {
    REMLSentimentAnalyzer * _sentimentAnalyzer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (void).cxx_destruct;
- (bool)_suppportsPortarit;
- (bool)_suppportsSentimentAnalysis;
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)pause;
- (void)predictorDidUpdate:(id)arg1;
- (void)resume;

@end
