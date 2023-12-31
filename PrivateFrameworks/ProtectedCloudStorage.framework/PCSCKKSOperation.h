
@interface PCSCKKSOperation : NSOperation {
    NSError * _error;
    NSMutableArray * _successDependencies;
    bool  cancelled;
    bool  executing;
    bool  finished;
}

@property (getter=isCancelled) bool cancelled;
@property (retain) NSError *error;
@property (getter=isExecuting) bool executing;
@property (getter=isFinished) bool finished;
@property (retain) NSMutableArray *successDependencies;

+ (id)operation:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)addSuccessDependency:(id)arg1;
- (bool)checkDependencies;
- (void)completeOperation;
- (id)error;
- (bool)isCancelled;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setCancelled:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setSuccessDependencies:(id)arg1;
- (bool)startOperation;
- (id)successDependencies;

@end
