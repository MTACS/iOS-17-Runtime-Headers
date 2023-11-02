
@interface PPEventCache : NSObject {
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _cacheBackingFileUpdateScheduled;
    PPCalendarInternPool * _calendarInternPool;
    _PASLock * _data;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned long long  _memoryPressureStatus;
    NSObject<OS_dispatch_queue> * _queue;
    PPEventStorage * _storage;
}

- (void).cxx_destruct;
- (id)cachedEventHighlightForEvent:(id)arg1 rankingOptions:(int)arg2 trialWrapper:(id)arg3;
- (void)evictAllEventsNotInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithEventStorage:(id)arg1;
- (id)objectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)refreshCacheWithChanges:(id)arg1;
- (void)removeAllObjects;
- (void)setEventHighlight:(id)arg1;
- (void)setExtraSecondsToBackfill:(unsigned long long)arg1;

@end
