
@interface PKAccountWebServicePayLaterFinancingOptionCancellationRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    NSError * _error;
    NSString * _optionIdentifier;
    unsigned long long  _reason;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSString *optionIdentifier;
@property (nonatomic) unsigned long long reason;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)error;
- (id)optionIdentifier;
- (unsigned long long)reason;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setError:(id)arg1;
- (void)setOptionIdentifier:(id)arg1;
- (void)setReason:(unsigned long long)arg1;

@end
