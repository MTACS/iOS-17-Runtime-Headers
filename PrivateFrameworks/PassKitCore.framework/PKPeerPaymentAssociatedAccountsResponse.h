
@interface PKPeerPaymentAssociatedAccountsResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentAssociatedAccountInformation * _associatedAccountInformation;
}

@property (nonatomic, readonly, copy) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation;

- (void).cxx_destruct;
- (id)associatedAccountInformation;
- (id)initWithData:(id)arg1;

@end
