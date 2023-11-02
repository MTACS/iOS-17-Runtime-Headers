
@interface AMSPurchaseQueue : NSObject <AMSBagConsumer, AMSPurchaseDelegate> {
    AMSPurchaseQueueBatchList * _batches;
    AMSPurchaseQueueConfiguration * _config;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AMSThreadSafeSet * _preAuthenticatedDSIDs;
    bool  _suspended;
}

@property (nonatomic, retain) AMSPurchaseQueueBatchList *batches;
@property (nonatomic, retain) AMSPurchaseQueueConfiguration *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSThreadSafeSet *preAuthenticatedDSIDs;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)_createPurchasePromiseForTask:(id)arg1 purchase:(id)arg2;
- (void)_handleNextPurchase;
- (void)_handleResult:(id)arg1 error:(id)arg2 forPurchase:(id)arg3;
- (id)_performPreauthenticateForPurchaseTask:(id)arg1;
- (id)_processPurchase:(id)arg1;
- (id)batches;
- (id)config;
- (id)dispatchQueue;
- (id)enquePurchases:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isSuspended;
- (id)preAuthenticatedDSIDs;
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)setBatches:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPreAuthenticatedDSIDs:(id)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setSuspended:(bool)arg1 logUUID:(id)arg2;

@end
