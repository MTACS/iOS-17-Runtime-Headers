
@protocol CATTimerSource

@required

- (<CATTimer> *)scheduleInfiniteTimerWithIdentifier:(void *)arg1 timeInterval:(void *)arg2 queue:(void *)arg3 fireHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CATTimer> *, unsigned long long, void*
- (<CATTimer> *)scheduleOneShotTimerWithIdentifier:(void *)arg1 timeInterval:(void *)arg2 queue:(void *)arg3 fireHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CATTimer> *, void*
- (<CATResettableTimer> *)scheduleRepeatTimerWithIdentifier:(void *)arg1 timeInterval:(void *)arg2 queue:(void *)arg3 totalFires:(void *)arg4 fireHandler:(void *)arg5; // needs 5 arg types, found 12: NSString *, double, NSObject<OS_dispatch_queue> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CATResettableTimer> *, unsigned long long, bool, void*

@end
