
@interface GDLifeEventContext : GDGraphObjectContext {
    _TtC20IntelligencePlatform24_GDSwiftLifeEventContext * gdSwiftContext;
}

- (void).cxx_destruct;
- (id)context;
- (id)earliestActivityEventAndReturnError:(id*)arg1;
- (id)earliestActivityEventWithEntityIdentifierType:(Class)arg1 outStartDate:(id*)arg2 outEndDate:(id*)arg3 error:(id*)arg4;
- (id)entryForEarliestActivityEventAndReturnError:(id*)arg1;
- (id)entryForLatestActivityEventAndReturnError:(id*)arg1;
- (bool)enumerateActivityEventsInAscendingOrder:(bool)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateActivityEventsThatOverlapWithDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateActivityEventsWhoseEndDatesAreInDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateActivityEventsWhoseStartDatesAreInDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateEntriesForActivityEventsInAscendingOrder:(bool)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateEntriesForActivityEventsThatOverlapWithDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateEntriesForActivityEventsWhoseEndDatesAreInDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateEntriesForActivityEventsWhoseStartDatesAreInDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (id)extremeActivityEventWithEntityIdentifierType:(Class)arg1 ascending:(bool)arg2 outStartDate:(id*)arg3 outEndDate:(id*)arg4 error:(id*)arg5;
- (id)initAndReturnError:(id*)arg1;
- (id)initWithGDSwiftContext:(id)arg1;
- (id)latestActivityEventAndReturnError:(id*)arg1;
- (id)latestActivityEventWithEntityIdentifierType:(Class)arg1 outStartDate:(id*)arg2 outEndDate:(id*)arg3 error:(id*)arg4;

@end
