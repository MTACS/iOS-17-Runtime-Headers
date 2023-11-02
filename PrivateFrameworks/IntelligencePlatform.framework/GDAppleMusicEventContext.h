
@interface GDAppleMusicEventContext : GDGraphObjectContext {
    _TtC20IntelligencePlatform30_GDSwiftAppleMusicEventContext * gdSwiftContext;
}

- (void).cxx_destruct;
- (id)context;
- (id)earliestSongEventAndReturnError:(id*)arg1;
- (id)entryForEarliestSongEventAndReturnError:(id*)arg1;
- (id)entryForLatestSongEventAndReturnError:(id*)arg1;
- (bool)enumerateEntriesForSongEventsInAscendingOrder:(bool)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateEntriesForSongEventsThatOverlapWithDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateEntriesForSongEventsWhoseEndDatesAreInDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateEntriesForSongEventsWhoseStartDatesAreInDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateSongEventsInAscendingOrder:(bool)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateSongEventsThatOverlapWithDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateSongEventsWhoseEndDatesAreInDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateSongEventsWhoseStartDatesAreInDateInterval:(id)arg1 ascending:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (id)initAndReturnError:(id*)arg1;
- (id)initWithGDSwiftContext:(id)arg1;
- (id)latestSongEventAndReturnError:(id*)arg1;

@end
