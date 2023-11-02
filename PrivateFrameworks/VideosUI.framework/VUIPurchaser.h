
@interface VUIPurchaser : NSObject <AMSPurchaseResponseProtocol, SSEventMonitorDelegate> {
    SSEventMonitor * _eventMonitor;
    VUIPurchaseRequest * _interruptedPurchaseRequest;
    AMSPurchaseQueue * _purchaseQueue;
    NSMutableSet * _purchasingParamsSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SSEventMonitor *eventMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIPurchaseRequest *interruptedPurchaseRequest;
@property (nonatomic, readonly) bool isPurchaseInProgress;
@property (nonatomic, retain) AMSPurchaseQueue *purchaseQueue;
@property (nonatomic, retain) NSMutableSet *purchasingParamsSet;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getAdamIdFromBuyParams:(id)arg1;
- (bool)_isInterruptedPurchaseFulfilledBySSPurchaseResponse:(id)arg1;
- (void)didCompleteInterruptedBuyWithResponse:(id)arg1 error:(id)arg2;
- (void)enqueuePurchase:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)eventMonitor;
- (void)eventMonitor:(id)arg1 receivedEventWithName:(id)arg2 userInfo:(id)arg3;
- (void)forgetPurchasing:(id)arg1;
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (id)interruptedPurchaseRequest;
- (bool)isPurchaseInProgress;
- (bool)isPurchasing:(id)arg1;
- (void)postCrossProcessNotificationWithBuyParams:(id)arg1 error:(id)arg2;
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)purchaseQueue;
- (id)purchasingParamsSet;
- (void)rememberPurchasing:(id)arg1;
- (void)setEventMonitor:(id)arg1;
- (void)setInterruptedPurchaseRequest:(id)arg1;
- (void)setPurchaseQueue:(id)arg1;
- (void)setPurchasingParamsSet:(id)arg1;

@end
