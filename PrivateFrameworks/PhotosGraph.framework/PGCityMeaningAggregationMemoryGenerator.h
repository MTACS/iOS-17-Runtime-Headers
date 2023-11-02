
@interface PGCityMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator

+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)arg1;

@end
