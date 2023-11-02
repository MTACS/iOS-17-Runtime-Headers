
@interface ATXPOICategoryVisitDuetDataProvider : ATXDuetDataProvider {
    ATXPOICategoryVisitDataProvider * _dataProvider;
    ATXPOICategoryEventAggregator * _streamAggregator;
}

+ (id)sharedInstance;
+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

- (void).cxx_destruct;
- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3 limit:(unsigned long long)arg4 ascending:(bool)arg5;
- (id)getCurrentVisit;
- (id)init;
- (void)subscribeToPOIChangesForCategory:(id)arg1 observer:(id)arg2 enterSelector:(SEL)arg3 exitSelector:(SEL)arg4;
- (void)unsubscribeToPOIChanges;

@end
