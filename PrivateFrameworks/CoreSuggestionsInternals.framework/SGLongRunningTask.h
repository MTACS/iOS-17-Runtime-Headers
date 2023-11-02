
@interface SGLongRunningTask : NSObject {
    NSDate * _deadline;
    _Atomic bool  _deferRequested;
    SGLongRunningTaskManager * _manager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDeadline:(id)arg1 manager:(id)arg2;
- (void)markFinished;
- (void)requestDefer;
- (bool)shouldDefer;

@end
