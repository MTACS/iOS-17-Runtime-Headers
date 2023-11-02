
@interface _DKSyncSerializer : NSObject {
    NSOperationQueue * _operationQueue;
    NSOperation * _previousOperation;
    NSObject<OS_dispatch_queue> * _underlyingQueue;
}

+ (void)addDependentOperation:(id)arg1;
+ (void)addDependentOperationWithBlock:(id /* block */)arg1;
+ (void)addOperation:(id)arg1;
+ (void)addOperationWithBlock:(id /* block */)arg1;
+ (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;
+ (id)operationQueue;
+ (void)performAfter:(double)arg1 block:(id /* block */)arg2;
+ (void)performAsyncBlock:(id /* block */)arg1;
+ (void)performSyncBlock:(id /* block */)arg1;
+ (id)underlyingQueue;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)init;

@end
