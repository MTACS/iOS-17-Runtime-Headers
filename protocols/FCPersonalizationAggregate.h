
@protocol FCPersonalizationAggregate <NSObject>

@required

- (double)clicks;
- (double)confidence;
- (double)ctr;
- (NSDictionary *)dictionaryRepresentation;
- (unsigned long long)eventCount;
- (NSString *)featureKey;
- (double)impressions;
- (NSDate *)lastModified;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
- (double)personalizationValueWithCorrelatedAggregate:(id <FCPersonalizationAggregate>)arg1 baseline:(id <FCPersonalizationAggregate>)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)powerWithDecayFactor:(double)arg1;
- (double)relativePersonalizationValueWithCorrelatedAggregate:(id <FCPersonalizationAggregate>)arg1 baseline:(id <FCPersonalizationAggregate>)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;

@end
