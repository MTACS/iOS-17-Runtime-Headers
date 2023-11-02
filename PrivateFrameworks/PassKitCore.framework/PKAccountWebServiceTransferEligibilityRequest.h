
@interface PKAccountWebServiceTransferEligibilityRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    PKCurrencyAmount * _currencyAmount;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)currencyAmount;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
