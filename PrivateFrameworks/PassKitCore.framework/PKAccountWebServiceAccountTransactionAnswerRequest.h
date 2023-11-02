
@interface PKAccountWebServiceAccountTransactionAnswerRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSString * _accountUserAltDSID;
    NSDictionary * _answers;
    NSURL * _baseURL;
    NSString * _transactionIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *accountUserAltDSID;
@property (nonatomic, copy) NSDictionary *answers;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)accountUserAltDSID;
- (id)answers;
- (id)baseURL;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountUserAltDSID:(id)arg1;
- (void)setAnswers:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (id)transactionIdentifier;

@end
