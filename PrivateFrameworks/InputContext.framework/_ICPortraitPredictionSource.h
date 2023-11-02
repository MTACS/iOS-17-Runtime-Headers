
@interface _ICPortraitPredictionSource : NSObject <_ICFeedbackAccepting, _ICPredictionSourcing> {
    NSString * _name;
    PPQuickTypeBroker * _ppBroker;
    NSCondition * _ppBrokerLoadedCondition;
}

@property (retain) PPQuickTypeBroker *ppBroker;

- (void).cxx_destruct;
- (id)_makePPQuickTypeBroker;
- (bool)_populateError:(id*)arg1 withExplanations:(id)arg2;
- (id)_quickTypeQueryWithQuery:(id)arg1 limit:(unsigned long long)arg2 timeoutInMilliseconds:(unsigned long long)arg3;
- (id)_quickTypeQueryWithTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 errorWithExplanations:(id*)arg5;
- (bool)doesSupportTriggerSourceType:(unsigned char)arg1;
- (id)getPPBroker;
- (void)hibernate;
- (id)init;
- (id)name;
- (id)ppBroker;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)propogateMetrics:(id)arg1 data:(id)arg2;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)setPpBroker:(id)arg1;
- (void)warmUp;

@end
