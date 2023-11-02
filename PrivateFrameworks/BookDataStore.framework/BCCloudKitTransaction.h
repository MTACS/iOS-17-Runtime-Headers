
@interface BCCloudKitTransaction : NSObject {
    long long  _clientCount;
    BUCoalescingCallBlock * _coalescedNotification;
    <BCCloudKitTransactionDelegate> * _delegate;
    NSString * _entityName;
    NSObject<OS_dispatch_queue> * _lifecycleAccessQueue;
    BDSOSTransaction * _osTransaction;
    NSObject<OS_dispatch_source> * _transactionLifetime;
}

@property (nonatomic) long long clientCount;
@property (nonatomic, retain) BUCoalescingCallBlock *coalescedNotification;
@property (nonatomic) <BCCloudKitTransactionDelegate> *delegate;
@property (nonatomic, copy) NSString *entityName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lifecycleAccessQueue;
@property (nonatomic, retain) BDSOSTransaction *osTransaction;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *transactionLifetime;

+ (id)transactionNameForEntityName:(id)arg1;

- (void).cxx_destruct;
- (void)clientConnected;
- (long long)clientCount;
- (id)coalescedNotification;
- (double)coalescingDelay;
- (id)delegate;
- (id)entityName;
- (id)initWithEntityName:(id)arg1 delegate:(id)arg2;
- (void)laq_scheduleTransactionLifetime;
- (id)lifecycleAccessQueue;
- (id)osTransaction;
- (void)performWorkWithCompletion:(id /* block */)arg1;
- (void)setClientCount:(long long)arg1;
- (void)setCoalescedNotification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setLifecycleAccessQueue:(id)arg1;
- (void)setOsTransaction:(id)arg1;
- (void)setTransactionLifetime:(id)arg1;
- (void)signal;
- (id)transactionLifetime;
- (double)transactionLifetimeTimout;
- (id)transactionName;

@end
