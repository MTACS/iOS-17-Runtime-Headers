
@protocol FCReadonlyPersonalizationAggregateStore <NSObject>

@required

- (NTPBPersonalizationAggregate *)aggregateForFeatureKey:(NSString *)arg1;
- (NSDictionary *)aggregatesForFeatures:(NSArray *)arg1;
- (NSDictionary *)allAggregates;
- (<FCPersonalizationAggregate> *)baselineAggregateWithConfigurableValues:(FCPersonalizationTreatment *)arg1;
- (double)decayRate;
- (void)enumerateAggregatesUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCPersonalizationAggregate> *, void*
- (void)prepareAggregatesForUseWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)processTodayPersonalizationUpdates:(NSArray *)arg1 withConfigurableValues:(FCPersonalizationTreatment *)arg2;
- (unsigned long long)scoringType;

@end
