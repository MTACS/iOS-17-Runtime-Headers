
@interface CMWorkoutMetsInternal : NSObject {
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
}

- (void)_queryWorkoutMetsWithSessionId:(id)arg1 handler:(id /* block */)arg2;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
