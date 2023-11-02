
@interface IQFMapsPersonalizationRanker : NSObject {
    NSObject<OS_dispatch_queue> * _caLoggingQueue;
    NSSet * _cachedMUIDs;
    NSArray * _cachedRankedResults;
    bool  _enableEntityRelevance;
    double  _entityRelevanceThreshold;
    double  _lastVisitDaysThreshold;
    double  _visitCountGivenLocationThreshold;
    double  _visitCountThreshold;
}

- (void).cxx_destruct;
- (double)_calendarEventScoreForResult:(id)arg1;
- (long long)_compareResult:(id)arg1 toOtherResult:(id)arg2;
- (double)_routineFrecencyScoreForEntityRelevanceResult:(id)arg1;
- (double)_routineFrecencyScoreForLifeEvent:(id)arg1;
- (double)_scoreForResult:(id)arg1;
- (id)_sortedResults:(id)arg1;
- (void)_updateCachedMUIDs:(id)arg1 rankedResults:(id)arg2;
- (id)init;
- (id)initWithVisitCountThreshold:(double)arg1 lastVisitDaysThreshold:(double)arg2 visitCountGivenLocationThreshold:(double)arg3 entityRelevanceThreshold:(double)arg4;
- (id)initWithVisitCountThreshold:(double)arg1 lastVisitDaysThreshold:(double)arg2 visitCountGivenLocationThreshold:(double)arg3 entityRelevanceThreshold:(double)arg4 enableEntityRelevance:(bool)arg5;
- (bool)isResultCandidateForPromotion:(id)arg1;
- (id)rankedEventsForLocations:(id)arg1;
- (void)rankedEventsForLocations:(id)arg1 completionHandler:(id /* block */)arg2;

@end
