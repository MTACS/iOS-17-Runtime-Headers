
@interface GDFutureLifeEventContext : GDGraphObjectContext {
    _TtC20IntelligencePlatform30_GDSwiftFutureLifeEventContext * gdSwiftContext;
}

+ (id)subscribeToUpdateNotificationWithSystemwideUniqueSubscriptionIdentifier:(id)arg1 targetQueue:(id)arg2 onReceiveUpdateNotificationBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)context;
- (id)earliestFutureActivityEventAndReturnError:(id*)arg1;
- (id)earliestFutureActivityEventWithEntityIdentifierType:(Class)arg1 outStartDate:(id*)arg2 outEndDate:(id*)arg3 error:(id*)arg4;
- (id)entryForEarliestFutureActivityEventAndReturnError:(id*)arg1;
- (id)entryForLatestFutureActivityEventAndReturnError:(id*)arg1;
- (bool)enumerateEntriesForFutureActivityEventsInAscendingOrder:(bool)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateFutureActivityEventsInAscendingOrder:(bool)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)extremeFutureActivityEventWithEntityIdentifierType:(Class)arg1 ascending:(bool)arg2 outStartDate:(id*)arg3 outEndDate:(id*)arg4 error:(id*)arg5;
- (id)initAndReturnError:(id*)arg1;
- (id)initWithGDSwiftContext:(id)arg1;
- (id)latestFutureActivityEventAndReturnError:(id*)arg1;
- (id)latestFutureActivityEventWithEntityIdentifierType:(Class)arg1 outStartDate:(id*)arg2 outEndDate:(id*)arg3 error:(id*)arg4;

@end
