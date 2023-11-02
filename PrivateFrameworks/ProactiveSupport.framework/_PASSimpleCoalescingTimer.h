
@interface _PASSimpleCoalescingTimer : NSObject {
    _PASCoalescingTimer * _timer;
}

- (void).cxx_destruct;
- (void)cancelPendingOperations;
- (id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 operation:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1 operation:(id /* block */)arg2;
- (void)runAfterDelaySeconds:(double)arg1 coalescingBehavior:(unsigned char)arg2;
- (void)runAfterStrictDelaySeconds:(double)arg1;
- (void)runImmediately;

@end
