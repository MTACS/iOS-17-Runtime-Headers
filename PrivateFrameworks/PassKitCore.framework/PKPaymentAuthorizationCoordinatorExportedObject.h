
@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {
    PKPaymentAuthorizationCoordinator * _controller;
    <PKPaymentAuthorizationCoordinatorDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _delegateLock;
    <PKPaymentAuthorizationCoordinatorPrivateDelegate> * _privateDelegate;
    <PKPaymentAuthorizationServiceProtocol> * _serviceProxy;
}

@property (nonatomic) PKPaymentAuthorizationCoordinator *controller;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPaymentAuthorizationCoordinatorPrivateDelegate> *privateDelegate;
@property (nonatomic, retain) <PKPaymentAuthorizationServiceProtocol> *serviceProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidChangeCouponCode:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
- (void)authorizationWillStart;
- (id)controller;
- (void)dealloc;
- (id)delegate;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)handleConnectionDidOpenWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithController:(id)arg1;
- (id)privateDelegate;
- (id)serviceProxy;
- (void)setController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setServiceProxy:(id)arg1;

@end
