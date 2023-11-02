
@interface PKAccountServiceAccountResolutionController : NSObject {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    <PKAccountBillPaymentObserver> * _billPaymentObserver;
    PKBusinessChatController * _businessChatController;
    <PKAccountServiceAccountResolutionControllerDelegate> * _delegate;
    UIViewController * _presentingViewController;
    PKTransactionSourceCollection * _transactionSourceCollection;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKAccountUserCollection *accountUserCollection;
@property (nonatomic) <PKAccountBillPaymentObserver> *billPaymentObserver;
@property (nonatomic) <PKAccountServiceAccountResolutionControllerDelegate> *delegate;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) PKTransactionSourceCollection *transactionSourceCollection;

- (void).cxx_destruct;
- (id)_alertControllerForBusinessChatContext:(id)arg1;
- (void)_callIssuer;
- (void)_handleAccountServiceAccountDidChangeNotification:(id)arg1;
- (void)_openBusinessChatWithContext:(id)arg1;
- (void)_presentAccountServiceAction:(unsigned long long)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentViewController:(id)arg1;
- (id)account;
- (id)accountUserCollection;
- (id)billPaymentObserver;
- (id)delegate;
- (id)initWithAccount:(id)arg1 accountUserCollection:(id)arg2 transactionSourceCollection:(id)arg3;
- (void)presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (id)presentingViewController;
- (void)setAccount:(id)arg1;
- (void)setAccountUserCollection:(id)arg1;
- (void)setBillPaymentObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setTransactionSourceCollection:(id)arg1;
- (id)transactionSourceCollection;

@end
