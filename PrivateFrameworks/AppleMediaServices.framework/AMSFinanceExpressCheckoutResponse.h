
@interface AMSFinanceExpressCheckoutResponse : AMSFinancePaymentSheetResponse <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    AMSBuyParams * _buyParams;
    long long  _expressCheckoutMode;
    AMSURLRequestProperties * _parentProperties;
    AMSURLSession * _session;
}

@property (nonatomic, retain) AMSBuyParams *buyParams;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long expressCheckoutMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSURLRequestProperties *parentProperties;
@property (nonatomic, retain) AMSURLSession *session;
@property (readonly) Class superclass;

+ (bool)_isExpressCheckoutEnabledForBag:(id)arg1;
+ (bool)_isExpressCheckoutRecordUserChoiceEnabledForBag:(id)arg1;
+ (bool)_isFlagEnabled;
+ (bool)isEligibleForBag:(id)arg1;
+ (bool)isExpressCheckoutPayload:(id)arg1;
+ (bool)isExpressCheckoutShouldCheckForWalletBiometricsForBag:(id)arg1;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)_buyParamFromPayload:(id)arg1;
- (id)_createClientDataForPaymentChoices:(id)arg1;
- (id)_createPageEventForPaymentChoices:(id)arg1;
- (long long)_expressCheckoutModeFromPayload:(id)arg1;
- (id)_fetchCardDataForMerchantIdentifier:(id)arg1 countryCode:(id)arg2;
- (id)_paymentChoicesBodyForCardData:(id)arg1;
- (id)_paymentChoicesForCardData:(id)arg1;
- (id)_paymentChoicesRequestForCardData:(id)arg1;
- (id)_presentEngagementForPaymentChoices:(id)arg1;
- (id)_recordUserChoiceForEngagementResult:(id)arg1;
- (id)_recordUserChoiceRequest;
- (id)buyParams;
- (long long)expressCheckoutMode;
- (id)initWithResponseDictionary:(id)arg1 taskInfo:(id)arg2;
- (id)parentProperties;
- (id)performWithTaskInfo:(id)arg1;
- (void)removeExpressCheckoutSession;
- (id)session;
- (void)setBuyParams:(id)arg1;
- (void)setExpressCheckoutMode:(long long)arg1;
- (void)setParentProperties:(id)arg1;
- (void)setSession:(id)arg1;

@end
