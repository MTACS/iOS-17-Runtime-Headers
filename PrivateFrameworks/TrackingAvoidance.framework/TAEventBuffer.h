
@interface TAEventBuffer : NSObject {
    TACircularBuffer * _eventBuffer;
    NSMutableDictionary * _latestElements;
    NSMutableDictionary * _latestExpiredElements;
    TAEventBufferSettings * _settings;
}

+ (id)getExpiredElementKeyForClass:(Class)arg1 andEventSubtype:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)_updateLatestElement:(id)arg1;
- (void)_updateLatestElement:(id)arg1 withKey:(id)arg2;
- (id)getAllTAEventsBetween:(id)arg1;
- (id)getAllTAEventsMatchingCompoundPredicate:(id)arg1;
- (id)getAllTAEventsOf:(Class)arg1;
- (id)getAllTAEventsOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2;
- (id)getAllTAEventsOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2 between:(id)arg3;
- (id)getAllTAEventsOf:(Class)arg1 between:(id)arg2;
- (id)getEarliestEventDate;
- (id)getLatestElementOf:(Class)arg1;
- (id)getLatestElementOf:(Class)arg1 andEventSubtype:(unsigned long long)arg2;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (void)purgeWithClock:(id)arg1;
- (void)updateLatestExpiredElements:(id)arg1;

@end
