
@protocol HKPopulationNormsViewModelDataSource

@required

- (NSString *)ageBucketsTitle;
- (NSString *)chartTitle;
- (NSString *)classificationIdentifierForIndex:(unsigned long long)arg1;
- (unsigned long long)classificationIndexForLevelIndex:(unsigned long long)arg1;
- (void)clearUserCharacteristicCache;
- (NSNumber *)currentAgeInYears;
- (long long)currentBiologicalSex;
- (unsigned long long)currentBiologicalSexSegmentIndex;
- (unsigned long long)currentClassificationIndex;
- (NSDictionary *)currentDataForBiologicalSex;
- (NSString *)currentLocalizedClassificationDescription;
- (NSString *)currentLocalizedClassificationName;
- (NSString *)currentLocalizedClassificationTitle;
- (NSString *)footerText;
- (NSString *)hk_UIAutomationIdentifier;
- (bool)isCurrentClassificationAvailable;
- (NSString *)levelsTitle;
- (NSArray *)localizedBiologicalSexTitles;
- (NSString *)localizedClassificationDescriptionForIndex:(unsigned long long)arg1;
- (NSString *)localizedClassificationNameForIndex:(unsigned long long)arg1;
- (NSString *)localizedClassificationTitleForIndex:(unsigned long long)arg1;
- (double)maximumSampleValueQuantity;
- (unsigned long long)maximumUserAgeBucketIndex;
- (double)minimumSampleValueQuantity;
- (unsigned long long)numberOfBiologicalSexSegments;
- (unsigned long long)numberOfClassifications;
- (void)prepareUserCharacteristicCacheWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)quantityUnitTitle;
- (UIColor *)seriesHighlightedColor;
- (UIColor *)seriesHighlightedSegmentColor;
- (void)setBiologicalSexSegmentIndex:(unsigned long long)arg1;
- (void)setClassificationIndex:(unsigned long long)arg1;
- (bool)shouldShowClassificationTitle;
- (NSNumber *)userAgeBucketIndex;
- (NSNumber *)userLatestSampleValue;
- (NSString *)viewTitle;

@end
