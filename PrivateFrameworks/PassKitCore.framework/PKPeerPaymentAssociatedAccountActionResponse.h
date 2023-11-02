
@interface PKPeerPaymentAssociatedAccountActionResponse : PKPeerPaymentWebServiceResponse {
    PKPeerPaymentAssociatedAccountInformation * _associatedAccountInformation;
}

@property (nonatomic, readonly) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation;

- (void).cxx_destruct;
- (id)associatedAccountInformation;
- (id)initWithData:(id)arg1;

@end
