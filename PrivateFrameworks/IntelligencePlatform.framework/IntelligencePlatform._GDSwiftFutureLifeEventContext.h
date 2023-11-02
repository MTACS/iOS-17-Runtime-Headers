
@interface IntelligencePlatform._GDSwiftFutureLifeEventContext : IntelligencePlatform._GDSwiftGraphObjectContext {
    void swiftContext;
}

- (void).cxx_destruct;
- (id)earliestEntryForFutureActivityEventAndReturnError:(id*)arg1;
- (id)earliestFutureActivityEventAndReturnError:(id*)arg1;
- (bool)enumerateEntriesForFutureActivityEventsWithAscending:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)enumerateFutureActivityEventsWithAscending:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)initAndReturnError:(id*)arg1;
- (id)latestEntryForFutureActivityEventAndReturnError:(id*)arg1;
- (id)latestFutureActivityEventAndReturnError:(id*)arg1;

@end
