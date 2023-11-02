
@interface PKPeerPaymentRemoveAssociatedAccountRequest : PKPeerPaymentWebServiceRequest {
    NSString * _associatedAccountIdentifier;
}

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithAssociatedAccountIdentifier:(id)arg1;

@end
