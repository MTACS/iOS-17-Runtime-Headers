
@interface CUIRuntimeStatistics : NSObject {
    _Atomic long long  _missed_lookup;
    int  _notify_token;
    NSObject<OS_dispatch_queue> * _queue;
    _Atomic long long  _shortCircuitImageLookup;
    _Atomic long long  _total_initial_lookups;
    _Atomic long long  _total_lookup;
    _Atomic long long  _total_probes;
    _Atomic long long  _total_size;
    _Atomic long long  _wasted_size;
}

+ (void)generateLog;
+ (id)sharedRuntimeStatistics;

- (void)addStatisticAllocatedImageSize:(unsigned long long)arg1 roundedSize:(unsigned long long)arg2;
- (void)dealloc;
- (void)incrementMissedLookup;
- (void)incrementStaticsInitialLookup;
- (void)incrementStaticsProbe;
- (void)incrementStatisticDidShortCircuitImageLookup;
- (void)incrementStatisticLookup;
- (id)init;
- (long long)shortCircuitImageLookup;

@end
