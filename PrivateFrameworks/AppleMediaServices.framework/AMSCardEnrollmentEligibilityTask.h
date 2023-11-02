
@interface AMSCardEnrollmentEligibilityTask : AMSTask {
    <AMSBagProtocol> * _bag;
    NSString * _countryCode;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, readonly, copy) NSString *countryCode;

- (void).cxx_destruct;
- (unsigned long long)_cardTypeForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)_performSilentEnrollmentCheckWithRequest:(id)arg1;
- (id)bag;
- (void)canWriteBillingInfoWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(id /* block */)arg3;
- (id)countryCode;
- (id)init;
- (id)initWithBag:(id)arg1;
- (id)initWithBag:(id)arg1 countryCode:(id)arg2;
- (id)initWithCountryCode:(id)arg1;
- (id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)setBag:(id)arg1;

@end
