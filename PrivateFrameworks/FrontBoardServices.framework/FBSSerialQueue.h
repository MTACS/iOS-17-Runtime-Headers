
@interface FBSSerialQueue : NSObject <BSServiceDispatchingQueue>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_queueWithSerialDispatchQueue:(id)arg1;
+ (id)mainDispatchQueue;
+ (id)queueWithDispatchQueue:(id)arg1;
+ (id)queueWithMainRunLoopModes:(id)arg1;

- (void)assertBarrierOnQueue;
- (void)assertOnQueue;
- (id)backingQueueIfExists;
- (id)init;
- (void)performAfter:(double)arg1 withBlock:(id /* block */)arg2;
- (void)performAsync:(id /* block */)arg1;
- (void)performAsync:(id /* block */)arg1 withHandoff:(id)arg2;

@end
