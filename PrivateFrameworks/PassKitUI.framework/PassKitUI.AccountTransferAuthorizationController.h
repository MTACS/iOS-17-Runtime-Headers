
@interface PassKitUI.AccountTransferAuthorizationController : NSObject <PKAccountServiceObserver, PKDashboardTransactionFetcherDelegate, PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate> {
    void accountModel;
    void accountService;
    void authorized;
    void dismissAction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dismissalTimer;
    void hasReceivedAccountUpdate;
    void hasReceivedTransaction;
    void pastUpdateLeeway;
    void paymentAuthorizationController;
    void paymentRequest;
    void paymentWebService;
    void presentFraudStepUp;
    void scheduleTransferModel;
    void scheduleTransferRequest;
    void stepUpAction;
    void transactionFetcher;
    void waitingForData;
    void window;
}

- (void).cxx_destruct;
- (void)accountChanged:(id)arg1;
- (id)init;
- (void)paymentAuthorizationController:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationController:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationControllerDidFinish:(id)arg1;
- (id)presentationWindowForPaymentAuthorizationController:(id)arg1;
- (void)transactionsChanged:(id)arg1;

@end
