
@interface _PASDispatch : NSObject

+ (id)autoreleasingSerialQueueWithLabel:(const char *)arg1;
+ (id)autoreleasingSerialQueueWithLabel:(const char *)arg1 qosClass:(unsigned int)arg2;
+ (unsigned long long)dispatchTimeWithSecondsFromNow:(double)arg1;
+ (void)notifyGroup:(id)arg1 onQueue:(id)arg2 withTimeout:(double)arg3 block:(id /* block */)arg4;
+ (void)runAsyncOnQueue:(id)arg1 afterDelaySeconds:(double)arg2 block:(id /* block */)arg3;
+ (void)runSyncOnMainThreadWithBlock:(id /* block */)arg1;
+ (void)waitForBlock:(id /* block */)arg1;
+ (unsigned char)waitForBlock:(id /* block */)arg1 timeoutSeconds:(double)arg2;
+ (void)waitForBlock:(id /* block */)arg1 timeoutSeconds:(double)arg2 onBlockComplete:(id /* block */)arg3 onTimeout:(id /* block */)arg4;
+ (void)waitForGroup:(id)arg1;
+ (unsigned char)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2;
+ (void)waitForGroup:(id)arg1 timeoutSeconds:(double)arg2 onGroupComplete:(id /* block */)arg3 onTimeout:(id /* block */)arg4;
+ (void)waitForSemaphore:(id)arg1;
+ (unsigned char)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2;
+ (void)waitForSemaphore:(id)arg1 timeoutSeconds:(double)arg2 onAcquire:(id /* block */)arg3 onTimeout:(id /* block */)arg4;

@end
