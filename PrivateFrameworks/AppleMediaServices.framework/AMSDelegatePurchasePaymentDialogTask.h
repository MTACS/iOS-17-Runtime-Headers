
@interface AMSDelegatePurchasePaymentDialogTask : AMSTask {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
    AMSDelegatePurchaseRequest * _currentRequest;
    NSNumber * _designVersion;
    NSString * _requestingPlatform;
    NSString * _targetPlatformVersion;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSDelegatePurchaseRequest *currentRequest;
@property (nonatomic, readonly) NSNumber *designVersion;
@property (nonatomic, readonly) NSString *requestingPlatform;
@property (nonatomic, readonly) NSString *targetPlatformVersion;

- (void).cxx_destruct;
- (id)_encodedURLRequest;
- (id)_legacyUserAgentString;
- (id)_purchaseResultFromPurchaseResult:(id)arg1 andPaymentSheetInfo:(id)arg2;
- (id)account;
- (id)bag;
- (id)currentRequest;
- (id)designVersion;
- (id)initWithDelegatePurchaseRequest:(id)arg1 bag:(id)arg2 andDesignVersion:(id)arg3;
- (id)performTask;
- (id)requestingPlatform;
- (void)setCurrentRequest:(id)arg1;
- (id)targetPlatformVersion;

@end
