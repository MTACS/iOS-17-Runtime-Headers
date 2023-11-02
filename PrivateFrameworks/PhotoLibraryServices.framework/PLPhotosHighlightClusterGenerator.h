
@interface PLPhotosHighlightClusterGenerator : NSObject {
    NSArray * _allMomentsSorted;
    PLLibraryClusterer * _clusterer;
    <PLMomentGenerationDataManagement> * _dataManager;
    PLFrequentLocationManager * _frequentLocationManager;
    NSDateInterval * _recentHighlightsDateInterval;
}

@property (nonatomic, readonly) NSArray *allMomentsSorted;
@property (nonatomic, readonly) PLLibraryClusterer *clusterer;
@property (nonatomic, readonly) <PLMomentGenerationDataManagement> *dataManager;
@property (nonatomic, readonly) PLFrequentLocationManager *frequentLocationManager;
@property (nonatomic, readonly) NSDateInterval *recentHighlightsDateInterval;

- (void).cxx_destruct;
- (id)_aggregationHighlightClustersForMoments:(id)arg1;
- (id)_aggregationsInSortedMoments:(id)arg1 unavailableMoments:(id)arg2 intersectingMoments:(id)arg3;
- (bool)_isRecent:(id)arg1;
- (id)_recentHighlightClusterWithRecentMoments:(id)arg1;
- (id)_recentHighlightClusterWithRecentMoments:(id)arg1 intersectingMoments:(id)arg2;
- (id)_recentMoments;
- (id)_remainingHighlightClustersWithClusters:(id)arg1 intersectingMoments:(id)arg2;
- (id)_tripHighlightClustersForMoments:(id)arg1 tripType:(unsigned long long)arg2;
- (id)_tripsInMoments:(id)arg1;
- (id)allMomentsSorted;
- (id)clusterer;
- (id)dataManager;
- (id)frequentLocationManager;
- (id)highlightClustersIntersectingMoments:(id)arg1 includeAllTripHighlightClusters:(bool)arg2;
- (id)initWithDataManager:(id)arg1 frequentLocationManager:(id)arg2 recentHighlightDateInterval:(id)arg3 localCreationDateCreator:(id)arg4;
- (id)recentHighlightsDateInterval;
- (id)recentMomentsInMomentClusters:(id)arg1;

@end
