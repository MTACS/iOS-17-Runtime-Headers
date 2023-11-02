
@interface PKAccountWebServiceInstallmentBindRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSString * _applicationIdentifier;
    NSURL * _baseURL;
    NSDecimalNumber * _bindingAmount;
    NSString * _merchantIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) NSDecimalNumber *bindingAmount;
@property (nonatomic, copy) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)applicationIdentifier;
- (id)baseURL;
- (id)bindingAmount;
- (id)merchantIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setBindingAmount:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;

@end
