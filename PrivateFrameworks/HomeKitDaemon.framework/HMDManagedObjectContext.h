
@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>

- (void)assertIsExecuting;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (bool)save:(id*)arg1;

@end
