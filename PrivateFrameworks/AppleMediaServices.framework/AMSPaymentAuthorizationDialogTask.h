
@interface AMSPaymentAuthorizationDialogTask : AMSTask {
    <AMSBagProtocol> * _bag;
    NSDictionary * _idmsToken;
    NSString * _passwordEquivalentToken;
    AMSPurchaseInfo * _purchaseInfo;
    AMSPaymentAuthorizationDialogRequest * _request;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSDictionary *idmsToken;
@property (nonatomic, retain) NSString *passwordEquivalentToken;
@property (nonatomic, retain) AMSPurchaseInfo *purchaseInfo;
@property (nonatomic, retain) AMSPaymentAuthorizationDialogRequest *request;

- (void).cxx_destruct;
- (id)bag;
- (id)idmsToken;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (id)passwordEquivalentToken;
- (id)perform;
- (id)purchaseInfo;
- (id)request;
- (void)setBag:(id)arg1;
- (void)setIdmsToken:(id)arg1;
- (void)setPasswordEquivalentToken:(id)arg1;
- (void)setPurchaseInfo:(id)arg1;
- (void)setRequest:(id)arg1;

@end
