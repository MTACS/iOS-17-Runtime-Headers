
@interface PKPaymentAccountAttesationResponse : PKPaymentWebServiceResponse {
    NSData * _attestation;
}

@property (nonatomic, readonly) NSData *attestation;

- (void).cxx_destruct;
- (id)attestation;
- (id)initWithData:(id)arg1;

@end
