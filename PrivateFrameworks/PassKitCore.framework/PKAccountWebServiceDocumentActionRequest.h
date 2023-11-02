
@interface PKAccountWebServiceDocumentActionRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    long long  _action;
    NSURL * _baseURL;
    NSString * _documentIdentifier;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) long long action;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, copy) NSString *documentIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (long long)action;
- (id)baseURL;
- (id)documentIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAction:(long long)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDocumentIdentifier:(id)arg1;

@end
