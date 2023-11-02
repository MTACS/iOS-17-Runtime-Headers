
@interface PXEventCoalescer : NSObject {
    NSHashTable * _observers;
}

+ (id)delayedCoalescerWithDelay:(double)arg1;
+ (id)rateLimitingCoalescerWithRate:(double)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)inputEvent;
- (void)registerObserver:(id)arg1;
- (void)signalObservers;
- (void)unregisterObserver:(id)arg1;

@end
