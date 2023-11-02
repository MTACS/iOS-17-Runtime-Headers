
@interface PKPayLaterPaymentIntentController : NSObject <PKAccountServiceObserver, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKAccountService * _accountService;
    PKPaymentAuthorizationCoordinator * _authorizationCoordinator;
    PKPayLaterAvailableFundingSourcesFilter * _availableFundingSourcesFilter;
    NSMutableDictionary * _cacheByIntentType;
    PKPaymentRequest * _currentPaymentRequest;
    NSString * _defaultPassUniqueIdentifier;
    bool  _didAuthorizePayment;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PKPassLibrary * _passLibrary;
    PKAccount * _payLaterAccount;
    id /* block */  _paymentAuthorizationCompletion;
    PKPaymentWebService * _paymentWebService;
    PKPeerPaymentAccount * _peerPaymentAccount;
    PKPeerPaymentWebService * _peerPaymentWebService;
    NSString * _presentationSceneIdentifier;
    NSMutableDictionary * _requests;
}

@property (nonatomic, readonly) PKPayLaterAvailableFundingSourcesFilter *availableFundingSourcesFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKAccount *payLaterAccount;
@property (nonatomic, readonly) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_executeNextRequest:(id)arg1;
- (void)_peerPaymentAccountChanged;
- (void)_presentPaymentAuthorizationWithPaymentRequest:(id)arg1 presentationSceneIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)accountChanged:(id)arg1;
- (id)availableFundingSourcesFilter;
- (id)availableFundingSourcesForPaymentIntentDetails:(id)arg1 currencyAmount:(id)arg2 planIdentifier:(id)arg3 primaryPaymentSource:(id)arg4;
- (void)dealloc;
- (id)initWithPayLaterAccount:(id)arg1 paymentWebService:(id)arg2 passLibrary:(id)arg3 peerPaymentWebService:(id)arg4 accountService:(id)arg5 defaultPassUniqueIdentifier:(id)arg6;
- (void)intentDetailsForFinancingPlan:(id)arg1 intent:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)payLaterAccount;
- (id)payLaterPaymentRequestWithIntentDetails:(id)arg1 financingPlan:(id)arg2 primaryPaymentSource:(id)arg3 intent:(unsigned long long)arg4 currencyAmount:(id)arg5;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (id)peerPaymentAccount;
- (void)presentPaymentAuthorizationForFinancingPlan:(id)arg1 primaryPaymentSource:(id)arg2 intentDetails:(id)arg3 intent:(unsigned long long)arg4 currencyAmount:(id)arg5 presentationSceneIdentifier:(id)arg6 completion:(id /* block */)arg7;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)arg1;
- (void)setPayLaterAccount:(id)arg1;

@end
