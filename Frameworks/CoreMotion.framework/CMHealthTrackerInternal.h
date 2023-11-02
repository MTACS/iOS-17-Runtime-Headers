
@interface CMHealthTrackerInternal : NSObject {
    NSObject<OS_dispatch_queue> * fAppQueue;
    NSObject<OS_dispatch_queue> * fInternalQueue;
    void * fLocationdConnection;
}

- (void)_queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(id /* block */)arg3;
- (void)_queryVO2MaxInputsFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
