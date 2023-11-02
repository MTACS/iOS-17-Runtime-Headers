
@interface _HKSPImmediateScheduler : NSObject <HKSPScheduler> {
    _HKSPOrderPreservingScheduler * _backingScheduler;
}

@property (nonatomic, readonly) _HKSPOrderPreservingScheduler *backingScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)backingScheduler;
- (id)init;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;
- (void)resume;
- (void)suspend;

@end
