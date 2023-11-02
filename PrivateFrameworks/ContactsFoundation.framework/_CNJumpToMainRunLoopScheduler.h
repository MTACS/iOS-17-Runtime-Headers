
@interface _CNJumpToMainRunLoopScheduler : NSObject <CNScheduler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (bool)isAvailable;

- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (double)timestamp;

@end
