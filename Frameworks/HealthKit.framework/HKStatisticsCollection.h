
@interface HKStatisticsCollection : NSObject {
    NSDate * _anchorDate;
    double  _approximateStatisticsInterval;
    NSSet * _cachedSources;
    id /* block */  _emptyStatisticsConstructor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _statisticsByIndex;
    NSDateComponents * _statisticsInterval;
}

@property (nonatomic, readonly, copy) NSDate *anchorDate;
@property (nonatomic, readonly) unsigned long long statisticsCount;
@property (nonatomic, readonly, copy) NSDateComponents *statisticsInterval;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (void).cxx_destruct;
- (void)_clearSourcesCache;
- (void)_enumerateStatisticsIndexesFromDate:(id)arg1 toDate:(id)arg2 withBlock:(id /* block */)arg3;
- (void)_enumerateTimePeriodsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(id /* block */)arg3;
- (id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2;
- (id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(id /* block */)arg3;
- (bool)_insertStatistics:(id)arg1;
- (id)_maxSumQuantityStatistics;
- (id)_minSumQuantityStatistics;
- (id)_mostRecentQuantityDateInterval;
- (id)_mostRecentQuantityStatistics;
- (void)_resetStatistics:(id)arg1;
- (id)_statisticsDateIntervalAndIndex:(long long*)arg1 forDate:(id)arg2;
- (id)_statisticsDateIntervalAtIndex:(long long)arg1;
- (id)_statisticsForIndex:(long long)arg1;
- (id)_statisticsForLastIndex;
- (void)_timePeriodForStatisticsAtIndex:(long long)arg1 startDate:(id*)arg2 endDate:(id*)arg3;
- (id)anchorDate;
- (id)asJSONObject;
- (void)enumeratePopulatedStatisticsWithBlock:(id /* block */)arg1;
- (void)enumerateStatisticsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2;
- (id)initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(id /* block */)arg3;
- (id)sources;
- (id)statistics;
- (unsigned long long)statisticsCount;
- (id)statisticsForDate:(id)arg1;
- (id)statisticsInterval;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)statisticsCollectionWithCodableCollection:(id)arg1;

- (id)codableCollection;

@end
