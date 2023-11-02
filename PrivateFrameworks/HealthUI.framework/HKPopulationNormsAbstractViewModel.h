
@interface HKPopulationNormsAbstractViewModel : NSObject <HKPopulationNormsViewModelDataSource> {
    NSNumber * _cacheAgeInYears;
    NSNumber * _cacheBiologicalSexSegmentIndex;
    NSNumber * _cacheClassificationIndex;
    NSNumber * _cacheLatestSampleValue;
    HKHealthStore * _healthStore;
    NSObject<OS_dispatch_queue> * _sampleQueryQueue;
    NSNumber * _userHasDataPointAvailable;
}

@property (nonatomic, retain) NSNumber *cacheAgeInYears;
@property (nonatomic, retain) NSNumber *cacheBiologicalSexSegmentIndex;
@property (nonatomic, retain) NSNumber *cacheClassificationIndex;
@property (nonatomic, retain) NSNumber *cacheLatestSampleValue;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sampleQueryQueue;
@property (nonatomic, retain) NSNumber *userHasDataPointAvailable;

- (void).cxx_destruct;
- (long long)_biologicalSexForSexSegmentIndex:(unsigned long long)arg1;
- (unsigned long long)_biologicalSexSegmentIndexForSex:(long long)arg1;
- (void)_requireConcreteImplementationOfSelector:(SEL)arg1;
- (id)ageBucketsTitle;
- (id)associatedSampleType;
- (id)cacheAgeInYears;
- (id)cacheBiologicalSexSegmentIndex;
- (id)cacheClassificationIndex;
- (id)cacheLatestSampleValue;
- (id)chartTitle;
- (id)classificationIdentifierForIndex:(unsigned long long)arg1;
- (unsigned long long)classificationIndexForLevelIndex:(unsigned long long)arg1;
- (id)classificationIndexForSampleValue:(double)arg1 age:(long long)arg2 sex:(long long)arg3;
- (void)clearUserCharacteristicCache;
- (id)currentAgeInYears;
- (long long)currentBiologicalSex;
- (unsigned long long)currentBiologicalSexSegmentIndex;
- (unsigned long long)currentClassificationIndex;
- (id)currentDataForBiologicalSex;
- (id)currentLocalizedClassificationDescription;
- (id)currentLocalizedClassificationName;
- (id)currentLocalizedClassificationTitle;
- (id)footerText;
- (id)healthStore;
- (id)hk_UIAutomationIdentifier;
- (id)initWithHealthStore:(id)arg1;
- (bool)isCurrentClassificationAvailable;
- (id)levelsTitle;
- (id)localizedBiologicalSexTitles;
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)arg1;
- (id)localizedClassificationNameForIndex:(unsigned long long)arg1;
- (id)localizedClassificationTitleForIndex:(unsigned long long)arg1;
- (double)maximumSampleValueQuantity;
- (unsigned long long)maximumUserAgeBucketIndex;
- (double)minimumSampleValueQuantity;
- (unsigned long long)numberOfBiologicalSexSegments;
- (unsigned long long)numberOfClassifications;
- (void)prepareUserCharacteristicCacheWithHandler:(id /* block */)arg1;
- (id)quantityUnitTitle;
- (id)sampleQueryQueue;
- (id)seriesHighlightedColor;
- (id)seriesHighlightedSegmentColor;
- (void)setBiologicalSexSegmentIndex:(unsigned long long)arg1;
- (void)setCacheAgeInYears:(id)arg1;
- (void)setCacheBiologicalSexSegmentIndex:(id)arg1;
- (void)setCacheClassificationIndex:(id)arg1;
- (void)setCacheLatestSampleValue:(id)arg1;
- (void)setClassificationIndex:(unsigned long long)arg1;
- (void)setUserHasDataPointAvailable:(id)arg1;
- (bool)shouldShowClassificationTitle;
- (id)userAgeBucketIndex;
- (id)userHasDataPointAvailable;
- (id)userLatestSampleValue;
- (id)viewTitle;

@end
