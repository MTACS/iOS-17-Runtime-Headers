
@interface HKPendingOperationRecord : NSObject {
    id /* block */  _completionHandler;
    long long  _errorCount;
    id /* block */  _operationHandler;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic) long long errorCount;
@property (nonatomic, readonly, copy) id /* block */ operationHandler;

+ (id)pendingOperation:(id /* block */)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (long long)errorCount;
- (id /* block */)operationHandler;
- (void)setErrorCount:(long long)arg1;

@end
