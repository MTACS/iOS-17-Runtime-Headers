
@interface PKPeerPaymentIdentityVerificationRequiredResponse : PKPeerPaymentWebServiceResponse {
    NSString * _prerequisiteIdentifier;
}

@property (nonatomic, readonly, copy) NSString *prerequisiteIdentifier;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)prerequisiteIdentifier;

@end
