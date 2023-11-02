
@interface PPEventCacheGuardedData : NSObject {
    NSMutableDictionary * _cachedEventHighlights;
    NSMutableArray * _cachedEvents;
    NSMutableIndexSet * _cachedRanges;
    unsigned long long  _extraSecondsToBackfill;
    NSArray * _fileBackedPlists;
}

- (void).cxx_destruct;

@end
