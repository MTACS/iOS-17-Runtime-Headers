
@interface HDStatisticsCollectionCalculator : NSObject <HDStatisticsSourceOrderProvider, NSSecureCoding> {
    long long  _computationMethod;
    struct unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>> { 
        struct __compressed_pair<_HDStatisticsCollectionCalculatorImplementation *, std::default_delete<_HDStatisticsCollectionCalculatorImplementation>> { 
            struct _HDStatisticsCollectionCalculatorImplementation {} *__value_; 
        } __ptr_; 
    }  _implementation;
    NSArray * _maskedIntervals;
    <HDStatisticsCollectionCalculatorSourceOrderProvider> * _sourceOrderProvider;
    id /* block */  _statisticsHandler;
}

@property (nonatomic, readonly) long long computationMethod;
@property (nonatomic) <HDStatisticsCollectionCalculatorDataSource> *dataSource;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) _HKDateIntervalCollection *intervalCollection;
@property (nonatomic, readonly, copy) NSArray *maskedIntervals;
@property (nonatomic) double mergeGranularity;
@property (nonatomic, readonly) unsigned long long mergeStrategy;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;
@property (nonatomic) <HDStatisticsCollectionCalculatorSourceOrderProvider> *sourceOrderProvider;
@property (nonatomic, copy) id /* block */ statisticsHandler;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)calculatorForArchivedRepresentation:(id)arg1 error:(id*)arg2;
+ (id)calculatorForCategoryType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4;
+ (id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4;
+ (id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addSampleValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 error:(id*)arg5;
- (id)archivedRepresentationWithError:(id*)arg1;
- (id)bundleIdentifierForSourceID:(long long)arg1;
- (long long)computationMethod;
- (void)configureMergeAnchor:(id)arg1;
- (id)currentStatistics;
- (id)dataSource;
- (id)dateInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)intervalCollection;
- (bool)invalidateInterval:(id)arg1 error:(id*)arg2;
- (id)maskedIntervals;
- (double)mergeGranularity;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)orderSourceIDs:(void*)arg1;
- (bool)performAddSampleTransaction:(id /* block */)arg1 error:(id*)arg2;
- (bool)performInitialStatisticsTransaction:(id /* block */)arg1 error:(id*)arg2;
- (id)quantityType;
- (bool)queryForInitialStatisticsWithError:(id*)arg1;
- (void)reset;
- (void)setDataSource:(id)arg1;
- (void)setDateInterval:(id)arg1;
- (bool)setMaskedIntervals:(id)arg1 error:(id*)arg2;
- (void)setMergeGranularity:(double)arg1;
- (void)setSourceOrderProvider:(id)arg1;
- (void)setStatisticsConfiguration:(id)arg1;
- (void)setStatisticsHandler:(id /* block */)arg1;
- (id)sourceForSourceID:(long long)arg1;
- (id)sourceOrderProvider;
- (id /* block */)statisticsHandler;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (id)hdmc_tenthPercentileCalculator;

- (id)hdmc_heartRateStatisticsWithProfile:(id)arg1 predicate:(id)arg2 errorOut:(id*)arg3;

@end
