
@interface PKAccountBillPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKAccount * _account;
    PKAccountService * _accountService;
    NSError * _applePayTrustResponseError;
    PKAccountEvent * _billPaymentSuggestedAmountDataEvent;
    bool  _completedBillPayment;
    NSMutableSet * _dataFetchingCompletionHandlers;
    <PKAccountBillPaymentControllerDelegate> * _delegate;
    bool  _fetchingData;
    NSError * _fetchingDataError;
    NSArray * _fundingSources;
    PKPaymentPass * _pass;
    PKAccountServiceTransferRequest * _paymentRequest;
    PKPaymentService * _paymentService;
    NSArray * _payments;
    NSDecimalNumber * _peerPaymentBalance;
    bool  _performingAction;
    PKPaymentAuthorizationCoordinator * _schedulePaymentAuthorizationCoordinator;
    PKAccountWebServiceSchedulePaymentRequest * _schedulePaymentRequest;
    NSDecimalNumber * _totalPaymentAmount;
    PKPaymentWebService * _webService;
}

@property (nonatomic, retain) PKAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAccountBillPaymentControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *fundingSources;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *payments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountDidChange:(id)arg1;
- (id)_achPaymentWithAmount:(id)arg1 bankInformation:(id)arg2;
- (void)_addNewBankAccountIfNecessary:(id)arg1;
- (id)_apcPaymentWithAmount:(id)arg1;
- (id)_bankAccountsForFundingSources:(id)arg1;
- (void)_billPaymentHasCompletedWithState:(unsigned long long)arg1 error:(id)arg2;
- (id)_buildTransferRequestForDate:(id)arg1;
- (void)_completeFetchingFundingSources;
- (id)_createSchedulePaymentRequestWithSelectedMethods:(unsigned long long)arg1 bankInformation:(id)arg2;
- (void)_fetchFundingSources;
- (id)_paymentSummaryItemsForPaymentAmountACH:(id)arg1 apc:(id)arg2 bankInformation:(id)arg3;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)arg1 completion:(id /* block */)arg2;
- (void)_presentPaymentAuthorizationWithPaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateUseApplePayCashSetting:(bool)arg1;
- (id)account;
- (void)canPerformBillPaymentWithAmount:(id)arg1 scheduledDate:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (id)fundingSources;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 paymentPass:(id)arg2;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (id)payments;
- (void)performBillPaymentActionWithAmount:(id)arg1;
- (void)performBillPaymentActionWithAmount:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2;
- (void)performBillPaymentActionWithAmount:(id)arg1 scheduledDate:(id)arg2 billPaymentSuggestedAmountDataEvent:(id)arg3;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFundingSources:(id)arg1;
- (void)setPayments:(id)arg1;

@end
