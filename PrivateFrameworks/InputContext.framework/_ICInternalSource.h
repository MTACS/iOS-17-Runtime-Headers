
@interface _ICInternalSource : NSObject <_ICPredictionSourcing> {
    NSString * _name;
}

- (void).cxx_destruct;
- (bool)doesSupportTriggerSourceType:(unsigned char)arg1;
- (void)hibernate;
- (id)init;
- (id)localizedStringForKey:(id)arg1 withLocale:(id)arg2;
- (id)name;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)propogateMetrics:(id)arg1 data:(id)arg2;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)warmUp;

@end
