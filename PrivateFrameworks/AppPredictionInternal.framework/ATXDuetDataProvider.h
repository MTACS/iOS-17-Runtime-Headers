
@interface ATXDuetDataProvider : NSObject {
    NSArray * _streamData;
}

@property (nonatomic, readonly) NSArray *streamData;

+ (id)duetHelperStreamTypeToDuetEventStream:(long long)arg1;
+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (void).cxx_destruct;
- (id)fetchEventIdentifierCountsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3;
- (id)fetchEventIdentifierCountsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3 dateBuckets:(id)arg4;
- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3;
- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3 limit:(unsigned long long)arg4 ascending:(bool)arg5;
- (id)filteredEventsWithPredicate:(id)arg1;
- (id)getUniqueValuesForPropertyKey:(id)arg1;
- (id)streamData;
- (void)tagEventsWithLocationsFromLocationVisitsArray:(id)arg1;

@end
