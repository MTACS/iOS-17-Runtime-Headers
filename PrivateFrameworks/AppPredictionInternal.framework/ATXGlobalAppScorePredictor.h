
@interface ATXGlobalAppScorePredictor : NSObject {
    _PASCFBurstTrie * _index;
    _PASCFBurstTrie * _signalsTrie;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)globalPopularitiesAtTimeOfDay:(int)arg1 atDayOfWeek:(int)arg2 atLocation:(int)arg3 withLastAppLaunched:(id)arg4;
- (id)globalPopularitiesForBundleIds:(id)arg1 atTimeOfDayIndex:(int)arg2 atDayOfWeekIndex:(int)arg3 atLocationIndex:(int)arg4;
- (id)globalPopularitiesForBundleIds:(id)arg1 atTimeOfDayIndex:(int)arg2 atDayOfWeekIndex:(int)arg3 atLocationIndex:(int)arg4 withLastAppLaunched:(id)arg5;
- (id)globalPopularityForBundleIds:(id)arg1 atDate:(id)arg2 atLocation:(long long)arg3 withLastAppLaunched:(id)arg4;
- (id)globalPopularityForBundleIdsGivenTimeDayAndLocation:(id)arg1 context:(id)arg2;
- (id)globalPopularityForBundleIdsGivenTimeDayLocationAndLastApp:(id)arg1 context:(id)arg2;
- (id)globalPopularityPredictor;
- (id)init;

@end
