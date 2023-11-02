
@interface WFWalletTransactionProvider : NSObject <PKPaymentServiceDelegate> {
    PKPaymentService * _paymentService;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requests;
    NSMutableDictionary * _timers;
    NSObject<OS_os_transaction> * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentService *paymentService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *requests;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *timers;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)fetchLocalTransactionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)paymentService;
- (id)queue;
- (void)queue_endTransactionIfNeeded;
- (void)queue_finishWithTransaction:(id)arg1;
- (void)queue_takeTransactionIfNeeded;
- (id)requests;
- (void)setPaymentService:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setTimers:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)timers;
- (id)transaction;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;

@end
