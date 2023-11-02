
@interface RCBoostableOperationThrottler : NSObject <RCOperationThrottler> {
    <RCOperationThrottlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serialWorkQueue;
    bool  _workPending;
    RCUnfairLock * _workPendingLock;
}

@property (nonatomic) <RCOperationThrottlerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialWorkQueue;
@property bool suspended;
@property (nonatomic) bool workPending;
@property (nonatomic, readonly) RCUnfairLock *workPendingLock;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)serialWorkQueue;
- (void)setDelegate:(id)arg1;
- (void)setSerialWorkQueue:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setWorkPending:(bool)arg1;
- (bool)suspended;
- (void)tickle;
- (void)tickleWithCompletion:(id /* block */)arg1;
- (void)tickleWithQualityOfService:(long long)arg1;
- (void)tickleWithQualityOfService:(long long)arg1 completion:(id /* block */)arg2;
- (bool)workPending;
- (id)workPendingLock;

@end