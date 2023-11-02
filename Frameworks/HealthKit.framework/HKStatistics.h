
@interface HKStatistics : NSObject <HKSampleAggregateCacheProviding, NSCopying, NSSecureCoding, WDDataListDataObjectSource, _HKDateBounded> {
    HKQuantity * _averageQuantity;
    NSDictionary * _averageQuantityBySource;
    NSNumber * _categoryValue;
    NSDictionary * _categoryValueBySource;
    unsigned long long  _dataCount;
    NSDictionary * _dataCountBySource;
    HKObjectType * _dataType;
    HKQuantity * _duration;
    NSDictionary * _durationBySource;
    NSDate * _endDate;
    HKQuantity * _maximumQuantity;
    NSDictionary * _maximumQuantityBySource;
    HKQuantity * _minimumQuantity;
    NSDictionary * _minimumQuantityBySource;
    HKQuantity * _mostRecentQuantity;
    NSDictionary * _mostRecentQuantityBySource;
    NSDateInterval * _mostRecentQuantityDateInterval;
    NSDictionary * _mostRecentQuantityDateIntervalBySource;
    HKQuantity * _percentileQuantity;
    NSDictionary * _percentileQuantityBySource;
    NSArray * _sources;
    NSDate * _startDate;
    HKQuantity * _sumQuantity;
    NSDictionary * _sumQuantityBySource;
    NSDictionary * _sumQuantityBySourceID;
}

@property (nonatomic, copy) HKQuantity *averageQuantity;
@property (nonatomic, copy) NSDictionary *averageQuantityBySource;
@property (nonatomic, copy) NSNumber *categoryValue;
@property (nonatomic, copy) NSDictionary *categoryValueBySource;
@property (nonatomic) unsigned long long dataCount;
@property (nonatomic, copy) NSDictionary *dataCountBySource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) HKQuantity *duration;
@property (nonatomic, copy) NSDictionary *durationBySource;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) HKQuantity *maximumQuantity;
@property (nonatomic, copy) NSDictionary *maximumQuantityBySource;
@property (nonatomic, copy) HKQuantity *minimumQuantity;
@property (nonatomic, copy) NSDictionary *minimumQuantityBySource;
@property (nonatomic, copy) HKQuantity *mostRecentQuantity;
@property (nonatomic, copy) NSDictionary *mostRecentQuantityBySource;
@property (nonatomic, copy) NSDateInterval *mostRecentQuantityDateInterval;
@property (nonatomic, copy) NSDictionary *mostRecentQuantityDateIntervalBySource;
@property (nonatomic, copy) HKQuantity *percentileQuantity;
@property (nonatomic, copy) NSDictionary *percentileQuantityBySource;
@property (readonly) HKQuantityType *quantityType;
@property (readonly) NSArray *sources;
@property (readonly) NSDate *startDate;
@property (nonatomic, copy) HKQuantity *sumQuantity;
@property (nonatomic, copy) NSDictionary *sumQuantityBySource;
@property (nonatomic, copy) NSDictionary *sumQuantityBySourceID;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (void)_validateOptions:(unsigned long long)arg1 forDataType:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initAsCopyOf:(id)arg1;
- (id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_setEndDate:(id)arg1;
- (void)_setSources:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_validateUnit:(id)arg1;
- (id)asJSONObject;
- (id)averageQuantity;
- (id)averageQuantityBySource;
- (id)averageQuantityForSource:(id)arg1;
- (id)baselineRelativeValueState;
- (long long)bucketIndexForIntervalComponents:(id)arg1 anchorDate:(id)arg2;
- (id)categoryValue;
- (id)categoryValueBySource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataCount;
- (id)dataCountBySource;
- (id)description;
- (id)duration;
- (id)durationBySource;
- (id)durationForSource:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (bool)getData:(id*)arg1 error:(id*)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)maximumQuantity;
- (id)maximumQuantityBySource;
- (id)maximumQuantityForSource:(id)arg1;
- (id)minimumQuantity;
- (id)minimumQuantityBySource;
- (id)minimumQuantityForSource:(id)arg1;
- (id)mostRecentQuantity;
- (id)mostRecentQuantityBySource;
- (id)mostRecentQuantityDateInterval;
- (id)mostRecentQuantityDateIntervalBySource;
- (id)mostRecentQuantityDateIntervalForSource:(id)arg1;
- (id)mostRecentQuantityForSource:(id)arg1;
- (id)percentileQuantity;
- (id)percentileQuantityBySource;
- (id)quantityType;
- (void)setAverageQuantity:(id)arg1;
- (void)setAverageQuantityBySource:(id)arg1;
- (void)setCategoryValue:(id)arg1;
- (void)setCategoryValueBySource:(id)arg1;
- (void)setDataCount:(unsigned long long)arg1;
- (void)setDataCountBySource:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setDurationBySource:(id)arg1;
- (void)setMaximumQuantity:(id)arg1;
- (void)setMaximumQuantityBySource:(id)arg1;
- (void)setMinimumQuantity:(id)arg1;
- (void)setMinimumQuantityBySource:(id)arg1;
- (void)setMostRecentQuantity:(id)arg1;
- (void)setMostRecentQuantityBySource:(id)arg1;
- (void)setMostRecentQuantityDateInterval:(id)arg1;
- (void)setMostRecentQuantityDateIntervalBySource:(id)arg1;
- (void)setPercentileQuantity:(id)arg1;
- (void)setPercentileQuantityBySource:(id)arg1;
- (void)setSumQuantity:(id)arg1;
- (void)setSumQuantityBySource:(id)arg1;
- (void)setSumQuantityBySourceID:(id)arg1;
- (id)sources;
- (id)startDate;
- (id)sumQuantity;
- (id)sumQuantityBySource;
- (id)sumQuantityBySourceID;
- (id)sumQuantityForSource:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthHearing.framework/HealthHearing

- (id)hk_hearingSevenDayDoseDateIntervalEndingBeforeDate:(id)arg1 error:(id*)arg2;
- (id)hk_hearingSevenDayDosePercentageWithError:(id*)arg1;
- (id)unitTesting_hearingSevenDayDoseCategorySampleWithNow:(id)arg1 includesPrunableData:(bool)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon

- (id)statisticsByCombiningWithNoiseLevelStatistics:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (void)updateMinMaxWithChartableCodedQuantity:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox

- (id)device;
- (id)source;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)statisticsWithCodableStatistics:(id)arg1;

- (id)codableStatistics;

@end
