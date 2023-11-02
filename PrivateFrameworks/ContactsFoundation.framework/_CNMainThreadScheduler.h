
@interface _CNMainThreadScheduler : NSObject <CNScheduler> {
    <CNScheduler> * _inlineScheduler;
    <CNScheduler> * _jumpToMainScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *inlineScheduler;
@property (nonatomic, readonly) <CNScheduler> *jumpToMainScheduler;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (id)init;
- (id)inlineScheduler;
- (id)jumpToMainScheduler;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)schedulerForDelayedExecution;
- (id)schedulerForImmediateExecution;
- (double)timestamp;

@end
