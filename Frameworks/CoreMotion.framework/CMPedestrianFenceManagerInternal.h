
@interface CMPedestrianFenceManagerInternal : NSObject {
    id /* block */  fFenceHandler;
    void * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
}

- (void)_clearFence:(id)arg1 force:(bool)arg2;
- (void)_setFence:(id)arg1 withRadius:(id)arg2 wake:(bool)arg3 delay:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)_setInSession:(bool)arg1;
- (void)dealloc;
- (id)init;

@end
