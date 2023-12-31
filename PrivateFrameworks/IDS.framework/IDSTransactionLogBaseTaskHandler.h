
@interface IDSTransactionLogBaseTaskHandler : IDSTransactionLogTaskHandler {
    NSObject<OS_dispatch_queue> * _queue;
    IDSTransactionLogTask * _task;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IDSTransactionLogTask *task;

- (void).cxx_destruct;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)perform;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
