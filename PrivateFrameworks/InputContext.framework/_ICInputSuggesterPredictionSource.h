
@interface _ICInputSuggesterPredictionSource : NSObject <_ICFeedbackAccepting, _ICPredictionSourcing> {
    PSGInputSuggester * _inputSuggester;
    NSString * _name;
    NSMutableArray * _offered;
    NSCondition * _peopleSuggestorLoadedCondition;
    NSArray * _prevOffered;
}

@property (retain) PSGInputSuggester *inputSuggester;

- (void).cxx_destruct;
- (id)_getPredictedItemFromStructuredInfo:(id)arg1;
- (bool)_populateError:(id*)arg1 withExplanations:(id)arg2;
- (id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id*)arg5;
- (bool)doesSupportTriggerSourceType:(unsigned char)arg1;
- (id)getPeopleSuggester;
- (void)hibernate;
- (id)init;
- (id)inputSuggester;
- (void)logEngagementForPredictedValues:(id)arg1 position:(unsigned long long)arg2;
- (void)logImpressionForPredictedValues:(id)arg1;
- (id)name;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)propogateMetrics:(id)arg1 data:(id)arg2;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (id)requestFromTrigger:(id)arg1 searchContext:(id)arg2;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)setInputSuggester:(id)arg1;
- (void)warmUp;

@end
