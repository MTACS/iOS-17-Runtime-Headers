
@interface PHAMetricsHelper : NSObject

+ (id)aggregatedStatsForMiroMoodCountVector:(id)arg1;
+ (id)aggregatedStatsForMoodKeywordCountedSet:(id)arg1;
+ (id)aggregatedStatsForPossibleMoodCountVector:(id)arg1;
+ (id)aggregatedStatsForSuggestedMoodCountVector:(id)arg1;
+ (id)dataAggregationKeyForCategory:(unsigned long long)arg1 subCategory:(unsigned long long)arg2 lookupTable:(id)arg3;
+ (id)fullMemoryTypeStringForMemory:(id)arg1 withWorkingContext:(id)arg2;
+ (id)legacyMemoryCategoryValueToDataAggregationKeyLookup;
+ (id)memoryBlockableFeatureTypeValueToDataAggregationKeyLookup;
+ (id)memoryBlockedFeatureTypeValueToDataAggregationKeyLookup;
+ (id)memoryCategoryValueToDataAggregationKeyLookup;
+ (bool)shouldAggregateDataForReporting:(unsigned long long)arg1;

@end
