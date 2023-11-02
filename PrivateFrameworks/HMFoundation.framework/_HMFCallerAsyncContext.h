
@interface _HMFCallerAsyncContext : NSObject <HMFAsyncContext>

- (void)assertIsExecuting;
- (id)description;
- (void)performBlock:(id /* block */)arg1;

@end
