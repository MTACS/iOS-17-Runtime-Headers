
@protocol FCDerivedPersonalizationData <NSObject, NFCopying>

@required

- (NTPBPersonalizationAggregate *)aggregateForFeatureKey:(NSString *)arg1;
- (NSDictionary *)aggregatesForFeatureKeys:(NSArray *)arg1;
- (NSDictionary *)allAggregates;
- (double)decayRate;
- (unsigned long long)scoringType;

@end
