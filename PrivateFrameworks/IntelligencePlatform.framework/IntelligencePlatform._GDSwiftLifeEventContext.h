
@interface IntelligencePlatform._GDSwiftLifeEventContext : IntelligencePlatform._GDSwiftGraphObjectContext {
    void swiftContext;
}

- (void).cxx_destruct;
- (id)earliestActivityEventAndReturnError:(id*)arg1;
- (id)earliestEntryForActivityEventAndReturnError:(id*)arg1;
- (bool)enumerateActivityEventsThatOverlapWith:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateActivityEventsWhoseEndDatesAreIn:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateActivityEventsWhoseStartDatesAreIn:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateActivityEventsWithAscending:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)enumerateEntriesForActivityEventsThatOverlapWith:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateEntriesForActivityEventsWhoseEndDatesAreIn:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateEntriesForActivityEventsWhoseStartDatesAreIn:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateEntriesForActivityEventsWithAscending:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)initAndReturnError:(id*)arg1;
- (id)latestActivityEventAndReturnError:(id*)arg1;
- (id)latestEntryForActivityEventAndReturnError:(id*)arg1;

@end
