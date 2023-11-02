
@interface PPEventStorage : NSObject {
    _PASLock * _lock;
    id /* block */  _purgerGetter;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)defaultStorage;

- (void).cxx_destruct;
- (bool)attemptToPurgeImmediately;
- (void)clearCaches;
- (void)enumerateEventsFromEKObjectIDs:(id)arg1 expandingRecurrencesInRange:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateEventsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (bool)eventKitChangeIsEvent:(id)arg1;
- (id)eventWithExternalID:(id)arg1;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)init;
- (id)initWithEventStorePurger:(id)arg1;
- (id)initWithEventStorePurgerGetter:(id /* block */)arg1;
- (void)iterateEventsFrom:(id)arg1 to:(id)arg2 inChunks:(int)arg3 withBlock:(id /* block */)arg4;
- (id)nlEventsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)resolveEventFromEKChange:(id)arg1;
- (void)runBlockWithPurgerDisabled:(id /* block */)arg1;
- (void)setInvisibleCalendarIdentifiers:(id)arg1;
- (bool)shouldIgnoreEventsOnCalendarWithObjectID:(id)arg1;
- (bool)shouldIngestEvent:(id)arg1;
- (id)suggestedEventsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ekStore:(id)arg2;

@end
