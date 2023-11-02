
@interface AMSOperation : NSOperation {
    bool  _cancelled;
    NSError * _error;
    NSLock * _lock;
    AMSOperation * _parentOperation;
    AMSBinaryPromise * _promise;
    NSMutableSet * _subOperations;
    bool  _success;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) AMSOperation *parentOperation;
@property (nonatomic, readonly) AMSBinaryPromise *promise;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)cancel;
- (id)error;
- (id)init;
- (bool)isCancelled;
- (void)lock;
- (void)main;
- (id)parentOperation;
- (id)promise;
- (void)run;
- (void)runSubOperation:(id)arg1;
- (void)runSubOperation:(id)arg1 onQueue:(id)arg2;
- (void)setError:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)unlock;

@end
