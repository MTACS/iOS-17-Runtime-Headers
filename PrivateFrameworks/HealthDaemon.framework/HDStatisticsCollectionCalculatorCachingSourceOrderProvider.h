
@interface HDStatisticsCollectionCalculatorCachingSourceOrderProvider : HDStatisticsCollectionCalculatorDefaultSourceOrderProvider {
    NSArray * _cachedOrderedSourceIDs;
    NSMutableDictionary * _cachedSources;
}

+ (id)sleepSourceOrderProviderForProfile:(id)arg1;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 quantityType:(id)arg2;
- (id)orderedSourceIDsWithUnorderedIDs:(id)arg1;
- (id)sourceForSourceID:(long long)arg1;

@end
