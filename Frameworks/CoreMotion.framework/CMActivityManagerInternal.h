
@interface CMActivityManagerInternal : NSObject {
    id /* block */  fActivityHandler;
    void * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fMotionStateSimQueue;
    long long  fMotionStateSimResult;
    NSObject<OS_dispatch_semaphore> * fMotionStateSimSemaphore;
    bool  fMotionStateSimWaiting;
    long long  fMotionStateYouthSimResult;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    NSObject<OS_dispatch_queue> * fSidebandOverrideQueue;
    long long  fSidebandOverrideResult;
    NSObject<OS_dispatch_semaphore> * fSidebandOverrideSemaphore;
    bool  fSidebandOverrideWaiting;
    bool  fSubscribedToMotionState;
}

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)overrideOscarSideband:(bool)arg1 withState:(long long)arg2;
- (void)simulateMotionState:(bool)arg1 withState:(long long)arg2;
- (void)simulateMotionStateYouthWithState:(long long)arg1;
- (void)startActivityUpdatesWithHandlerPrivate:(id /* block */)arg1;
- (void)stopActivityUpdatesPrivate;

@end
