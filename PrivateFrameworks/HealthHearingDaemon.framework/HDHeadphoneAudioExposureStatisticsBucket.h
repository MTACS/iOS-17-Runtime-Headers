
@interface HDHeadphoneAudioExposureStatisticsBucket : NSObject {
    NSNumber * _anchor;
    bool  _boundedInterval;
    HDStatisticsCollectionCalculatorDefaultDataSource * _dataSource;
    NSDate * _earliestStartDate;
    bool  _includesPrunableData;
    HDStatisticsCollectionCalculator * _journaledCalculator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKStatistics * _previousStatistics;
    HDStatisticsCollectionCalculator * _primaryCalculator;
    <HDStatisticsCollectionCalculatorSourceOrderProvider> * _sourceOrderProvider;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSNumber *anchor;
@property (nonatomic, readonly) bool boundedInterval;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSDate *earliestStartDate;
@property (nonatomic, readonly) bool hasPreviousStatistics;
@property (nonatomic, readonly) bool includesJournaledSamples;
@property (setter=unitTesting_setIncludesPrunableData:, nonatomic) bool includesPrunableData;
@property (nonatomic, readonly) HDStatisticsCollectionCalculator *journaledCalculator;
@property (setter=unitTesting_setPreviousStatistics:, nonatomic, retain) HKStatistics *previousStatistics;
@property (nonatomic, readonly) HDStatisticsCollectionCalculator *primaryCalculator;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)_currentDoseStringForEndDate:(id)arg1 earliestStartDate:(id)arg2 profile:(id)arg3;
+ (id)_makeBucketsForNowDate:(id)arg1 earliestStartDate:(id)arg2 profile:(id)arg3;
+ (id)_makeDataSourceWithProfile:(id)arg1;
+ (id)_makeJournaledCalculator;
+ (id)_makePrimaryCalculator;
+ (id)_makeSourceOrderProviderWithProfile:(id)arg1;
+ (id)bucketForArchivedRepresentation:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)makeBucketsForProfile:(id)arg1 earliestStartDate:(id)arg2;

- (void).cxx_destruct;
- (void)_enableOverlappingProcessingInPrimaryCalculator:(bool)arg1;
- (id)_initWithProfile:(id)arg1 primaryCalculator:(id)arg2 journaledCalculator:(id)arg3 startDate:(id)arg4 earliestStartDate:(id)arg5 boundedInterval:(bool)arg6 anchor:(id)arg7 previousStatistics:(id)arg8 includesPrunableData:(bool)arg9;
- (id)_initWithProfile:(id)arg1 startDate:(id)arg2 earliestStartDate:(id)arg3 boundedInterval:(bool)arg4;
- (id)_lock_addQuantitySamples:(id)arg1 anchor:(id)arg2 error:(id*)arg3;
- (id)_lock_archivedRepresentationWithError:(id*)arg1;
- (id)_lock_copyWithEarliestStartDate:(id)arg1 resetDoseToZero:(bool)arg2 error:(id*)arg3;
- (id)_lock_currentStatisticsWithError:(id*)arg1;
- (id)_lock_dateInterval;
- (id)_lock_fetchIncludesPrunableDataWithError:(id*)arg1;
- (id)_lock_journalQuantitySamples:(id)arg1 error:(id*)arg2;
- (id)_lock_queryForInitialStatisticsWithError:(id*)arg1;
- (id)anchor;
- (id)archivedRepresentationWithError:(id*)arg1;
- (bool)boundedInterval;
- (id)copyWithEarliestStartDate:(id)arg1 resetDoseToZero:(bool)arg2 error:(id*)arg3;
- (id)dateInterval;
- (id)earliestStartDate;
- (bool)hasPreviousStatistics;
- (bool)includesJournaledSamples;
- (bool)includesPrunableData;
- (bool)isExpiredForNowDate:(id)arg1;
- (id)journaledCalculator;
- (id)previousStatistics;
- (id)primaryCalculator;
- (id)queryForInitialStatisticsWithError:(id*)arg1;
- (id)snapshotStatisticsWithError:(id*)arg1;
- (id)startDate;
- (void)unitTesting_setIncludesPrunableData:(bool)arg1;
- (void)unitTesting_setPreviousStatistics:(id)arg1;
- (id)updateWithSampleBatch:(id)arg1 error:(id*)arg2;

@end
