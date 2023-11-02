
@interface PKPeerPaymentStatementRequest : PKPeerPaymentWebServiceRequest {
    NSString * _accountIdentifier;
    NSString * _emailAddress;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *emailAddress;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)accountIdentifier;
- (id)emailAddress;
- (void)setAccountIdentifier:(id)arg1;
- (void)setEmailAddress:(id)arg1;

@end
