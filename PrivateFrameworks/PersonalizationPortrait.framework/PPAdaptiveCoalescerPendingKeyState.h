
@interface PPAdaptiveCoalescerPendingKeyState : NSObject {
    NSMutableArray * _dates;
    NSMutableArray * _handlers;
    id  _key;
}

- (void).cxx_destruct;
- (void)addDate:(id)arg1;
- (double)currentDelayForNowDate:(id)arg1;
- (double)currentQPSForDateInterval:(id)arg1;
- (double)currentQPSForNowDate:(id)arg1;
- (id)init;
- (id)initWithKey:(id)arg1;
- (bool)shouldGarbageCollectForNowDate:(id)arg1;

@end
