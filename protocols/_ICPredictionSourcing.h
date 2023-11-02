
@protocol _ICPredictionSourcing

@required

- (bool)doesSupportTriggerSourceType:(unsigned char)arg1;
- (void)hibernate;
- (NSString *)name;
- (void)predictedItemsWithProactiveTrigger:(void *)arg1 searchContext:(void *)arg2 limit:(void *)arg3 timeoutInMilliseconds:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: _ICProactiveTrigger *, _ICSearchContext *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)propogateMetrics:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)provideFeedbackForString:(NSString *)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)searchForMeCardEmailAddressesWithTimeout:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)searchForMeCardRegionsWithTimeout:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)warmUp;

@end
