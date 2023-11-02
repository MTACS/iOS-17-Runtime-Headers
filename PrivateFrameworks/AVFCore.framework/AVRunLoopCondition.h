
@interface AVRunLoopCondition : NSCondition {
    NSMutableArray * _runLoopStateList;
}

+ (void)initialize;

- (void)_signalRunLoopWithState:(id)arg1;
- (bool)_waitInMode:(id)arg1 untilDate:(id)arg2;
- (void)broadcast;
- (void)dealloc;
- (id)init;
- (void)signal;
- (void)wait;
- (void)waitInMode:(id)arg1;
- (bool)waitUntilDate:(id)arg1;
- (bool)waitUntilDate:(id)arg1 inMode:(id)arg2;

@end
