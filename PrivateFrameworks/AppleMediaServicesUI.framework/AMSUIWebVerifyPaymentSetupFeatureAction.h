
@interface AMSUIWebVerifyPaymentSetupFeatureAction : AMSUIWebAction {
    NSString * _referrerIdentifier;
}

@property (nonatomic, retain) NSString *referrerIdentifier;

- (void).cxx_destruct;
- (id)_checkCombinedAccount;
- (id)_checkUpsellCardEnrollment;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)referrerIdentifier;
- (id)runAction;
- (void)setReferrerIdentifier:(id)arg1;

@end
