
@interface RBTimeProvider : NSObject <RBTimeProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (double)currentTime;
- (void)executeAfter:(double)arg1 onQueue:(id)arg2 block:(id /* block */)arg3;
- (id)executeWithCancellingAfter:(double)arg1 onQueue:(id)arg2 block:(id /* block */)arg3;
- (double)startTimeForProcess:(id)arg1;

@end
