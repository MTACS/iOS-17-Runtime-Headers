
@interface IntelligencePlatform._GDSwiftAppleMusicEventContext : IntelligencePlatform._GDSwiftGraphObjectContext {
    void swiftContext;
}

- (void).cxx_destruct;
- (id)earliestEntryForSongEventAndReturnError:(id*)arg1;
- (id)earliestSongEventAndReturnError:(id*)arg1;
- (bool)enumerateEntriesForSongEventsThatOverlapWith:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateEntriesForSongEventsWhoseEndDatesAreIn:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateEntriesForSongEventsWhoseStartDatesAreIn:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateEntriesForSongEventsWithAscending:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)enumerateSongEventsThatOverlapWith:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateSongEventsWhoseEndDatesAreIn:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateSongEventsWhoseStartDatesAreIn:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)enumerateSongEventsWithAscending:(bool)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)initAndReturnError:(id*)arg1;
- (id)latestEntryForSongEventAndReturnError:(id*)arg1;
- (id)latestSongEventAndReturnError:(id*)arg1;

@end
