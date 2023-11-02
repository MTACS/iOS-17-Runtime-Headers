
@interface PUActivityItemSourceOperation : NSOperation {
    bool  __pu_cancelled;
    NSString * _activityType;
    <PUActivityItemSourceOperationDelegate> * _delegate;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property (getter=_pu_isCancelled, setter=_pu_setCancelled:) bool _pu_cancelled;
@property (readonly, copy) NSString *activityType;
@property (readonly) <PUActivityItemSourceOperationDelegate> *delegate;
@property (getter=pu_isCancelled, readonly) bool pu_cancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;

- (void).cxx_destruct;
- (bool)_pu_isCancelled;
- (void)_pu_setCancelled:(bool)arg1;
- (id)activityType;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 activityType:(id)arg2;
- (void)main;
- (void)pu_cancel;
- (bool)pu_isCancelled;
- (id)semaphore;

@end
