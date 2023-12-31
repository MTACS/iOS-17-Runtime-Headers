
@interface SSVBarrierOperationQueue : NSOperationQueue

- (void)addBarrierOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(id /* block */)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(bool)arg2;

@end
