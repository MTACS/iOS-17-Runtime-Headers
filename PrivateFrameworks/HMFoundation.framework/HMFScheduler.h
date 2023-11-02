
@interface HMFScheduler : HMFObject <NAScheduler> {
    NSOperationQueue * _operationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)defaultScheduler;
+ (id)mainScheduler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)performBlock:(id /* block */)arg1;
- (id)performOperation:(id)arg1;
- (id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4;
- (id)performWithQualityOfService:(long long)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;

@end
