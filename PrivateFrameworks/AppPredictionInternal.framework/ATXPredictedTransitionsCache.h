
@interface ATXPredictedTransitionsCache : NSObject {
    NSMutableDictionary * _homeToWork;
    <ATXPredictedLocationsManagerProtocol> * _manager;
    NSMutableDictionary * _workToHome;
}

+ (id)ceilingDateToNextHour:(id)arg1;
+ (id)getNextTransitionInCache:(id)arg1 fromDate:(id)arg2;
+ (void)removeEntriesFromCache:(id)arg1 beforeDate:(id)arg2;

- (void).cxx_destruct;
- (id)cacheForDestinationLoiType:(long long)arg1;
- (bool)cacheHeadingFromLoiType:(long long)arg1 toLoiType:(long long)arg2 forDate:(id)arg3;
- (void)dump;
- (void)fetchEntriesStartingDate:(id)arg1 onActivity:(id)arg2;
- (id)getNextHomeToWorkTransitionsOnActivity:(id)arg1;
- (id)getNextWorkToHomeTransitionsOnActivity:(id)arg1;
- (id)init;
- (id)initWithLocationManager:(id)arg1;
- (void)prewarmOnActivity:(id)arg1;
- (void)pruneStaleEntries;

@end
