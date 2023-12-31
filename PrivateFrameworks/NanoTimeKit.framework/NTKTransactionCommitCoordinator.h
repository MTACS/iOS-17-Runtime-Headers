
@interface NTKTransactionCommitCoordinator : NSObject {
    NSMutableArray * _commitHandlers;
}

+ (id)_sharedInstance;
+ (bool)addTransactionCommitHandler:(id /* block */)arg1;
+ (void)flushCommitHandlers;

- (void).cxx_destruct;
- (bool)_addTransactionCommitHandler:(id /* block */)arg1;
- (void)_registerCATransactionCommitHandler;
- (id)init;

@end
