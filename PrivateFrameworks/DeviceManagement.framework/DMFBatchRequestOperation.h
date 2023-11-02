
@interface DMFBatchRequestOperation : CATOperation {
    CATRemoteTaskOperation * _activityTransactionOperation;
    CATOperationQueue * _queue;
    NSArray * _subOperations;
}

@property (nonatomic, retain) CATRemoteTaskOperation *activityTransactionOperation;
@property (nonatomic, retain) CATOperationQueue *queue;
@property (nonatomic, copy) NSArray *subOperations;

- (void).cxx_destruct;
- (id)activityTransactionOperation;
- (void)activityTransactionOperationDidFinish:(id)arg1;
- (void)activityTransactionOperationDidStart:(id)arg1;
- (id)initWithActivityTransactionOperation:(id)arg1 subOperations:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (id)queue;
- (void)setActivityTransactionOperation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSubOperations:(id)arg1;
- (id)subOperations;

@end
