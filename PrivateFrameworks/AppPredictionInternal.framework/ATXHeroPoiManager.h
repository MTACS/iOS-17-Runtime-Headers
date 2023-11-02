
@interface ATXHeroPoiManager : NSObject {
    BMPOICategoryStream * _poiCategoryStream;
}

- (void).cxx_destruct;
- (id)cachedPoiCategory;
- (id)currentPoiCategory;
- (void)donateHeroPoiPredictions:(id)arg1;
- (void)donatePoiCategoryToBiome:(id)arg1 rank:(unsigned long long)arg2 timeIntervalSince1970:(double)arg3;
- (void)logCompletion:(id)arg1;
- (id)mostRecentHighestRankedPoiCategory:(id)arg1;
- (id)poiCategoryEventsWithStreamPublisher:(id)arg1;
- (id)poiCategoryPublisherBookmark;
- (id)poiCategoryStream;
- (id)poiCategoryStreamPublisher;

@end
