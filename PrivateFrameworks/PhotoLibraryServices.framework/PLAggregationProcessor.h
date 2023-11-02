
@interface PLAggregationProcessor : NSObject {
    NSCalendar * _calendar;
    NSMutableDictionary * _curatedAssetCountByMomentUUID;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSMutableDictionary *curatedAssetCountByMomentUUID;

+ (id)allowedStartDateToAggregate;
+ (void)initialize;
+ (bool)isEnabled;
+ (unsigned long long)maximumNumberOfAssetsPerAggregation;
+ (unsigned long long)maximumNumberOfAssetsPerMoment;
+ (unsigned long long)maximumNumberOfAssetsPerShortMoment;
+ (unsigned long long)maximumNumberOfDaysPerAggregation;
+ (bool)requireContiguousAggregation;
+ (bool)requireStartAtFirstDayOfWeek;
+ (void)restoreDefaultEnablement;
+ (void)setEnabled:(bool)arg1;
+ (bool)shouldAggregateMoment:(id)arg1 numberOfAssetsEligibleForCuration:(out unsigned long long*)arg2;
+ (double)timeIntervalOfRecentContentToIgnore;

- (void).cxx_destruct;
- (id)_aggregationMomentClustersForMomentClusters:(id)arg1;
- (id)calendar;
- (id)curatedAssetCountByMomentUUID;
- (id)init;
- (id)processAggregationsWithSortedMomentClusters:(id)arg1 momentsContainedInOtherHighlights:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)setCalendar:(id)arg1;
- (void)setCuratedAssetCountByMomentUUID:(id)arg1;
- (id)sortedNeighborMomentClustersOfMomentClusters:(id)arg1 forAllMomentClusters:(id)arg2;

@end
