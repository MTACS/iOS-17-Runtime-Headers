
@interface CATBatchRemoteTaskOperation : CATOperation {
    NSOperationQueue * mQueue;
    NSArray * mRemoteTasks;
}

@property (nonatomic, readonly, copy) NSArray *remoteTaskOperations;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelSubOperations;
- (id)init;
- (id)initWithRemoteTaskOperations:(id)arg1;
- (id)initWithTaskClient:(id)arg1 requests:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)remoteTaskDidFinish:(id)arg1;
- (id)remoteTaskOperations;

@end
