
@interface BRCThrottle : BRCThrottleBase {
    NSMutableDictionary * _retryCounters;
    BRCMinHeap * _retryHeap;
}

+ (long long)throttleHashBytes:(void*)arg1 length:(unsigned long long)arg2;
+ (long long)throttleHashFormat:(id)arg1;

- (void).cxx_destruct;
- (void)_cleanupStaleCounters:(long long)arg1;
- (void)incrementRetryCount:(long long)arg1;
- (id)initWithName:(id)arg1 andParameters:(id)arg2;
- (long long)nsecsToNextRetry:(long long)arg1 now:(long long)arg2 increment:(bool)arg3;
- (void)reset;

@end
