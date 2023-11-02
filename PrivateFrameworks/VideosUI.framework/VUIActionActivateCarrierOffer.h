
@interface VUIActionActivateCarrierOffer : VUIAction <AMSCarrierLinkTaskDelegate> {
    NSDictionary * _additionalParams;
    NSString * _canonicalID;
    NSString * _linkParams;
    NSString * _notificationBody;
    NSString * _notificationTitle;
    NSString * _productCode;
}

@property (nonatomic, retain) NSDictionary *additionalParams;
@property (nonatomic, retain) NSString *canonicalID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *linkParams;
@property (nonatomic, retain) NSString *notificationBody;
@property (nonatomic, retain) NSString *notificationTitle;
@property (nonatomic, retain) NSString *productCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateOfferWithCompletionHandler:(id /* block */)arg1;
- (id)_configurePreflightManager;
- (void)_handleActivationSuccessWithCompletionHandler:(id /* block */)arg1;
- (void)_notifyDidEndActivationWithError:(id)arg1;
- (void)_notifyDidStartActivation;
- (void)_showUIConfirmationForSubTransactionWithCompletion:(id /* block */)arg1;
- (id)additionalParams;
- (id)canonicalID;
- (void)handleAuthenticateRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleEngagementRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContextData:(id)arg1;
- (bool)isAccountRequired;
- (id)linkParams;
- (id)notificationBody;
- (id)notificationTitle;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)productCode;
- (void)setAdditionalParams:(id)arg1;
- (void)setCanonicalID:(id)arg1;
- (void)setLinkParams:(id)arg1;
- (void)setNotificationBody:(id)arg1;
- (void)setNotificationTitle:(id)arg1;
- (void)setProductCode:(id)arg1;

@end
