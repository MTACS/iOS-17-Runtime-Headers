
@interface CKVCoalescedTask : NSObject {
    NSDate * _date;
    NSNumber * _eventId;
    _Atomic bool  _executed;
    id /* block */  _runBlock;
    NSNumber * _taskId;
}

@property (nonatomic, readonly) NSDate *date;

- (void).cxx_destruct;
- (id /* block */)_runBlockForTask:(id /* block */)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)date;
- (id)description;
- (void)execute;
- (void)executeAfterDelay:(double)arg1 onQueue:(id)arg2;
- (id)initWithTaskId:(id)arg1 eventId:(id)arg2 date:(id)arg3 taskBlock:(id /* block */)arg4 completionQueue:(id)arg5 completion:(id /* block */)arg6;
- (bool)isExecuted;

@end
