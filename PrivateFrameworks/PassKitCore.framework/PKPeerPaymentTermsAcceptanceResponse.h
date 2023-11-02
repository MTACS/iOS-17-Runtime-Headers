
@interface PKPeerPaymentTermsAcceptanceResponse : PKPeerPaymentWebServiceResponse {
    NSString * _termsIdentifier;
    NSURL * _termsURL;
}

@property (nonatomic, readonly, copy) NSString *termsIdentifier;
@property (nonatomic, readonly, copy) NSURL *termsURL;

- (void).cxx_destruct;
- (bool)hasTermsData;
- (id)initWithData:(id)arg1;
- (id)termsIdentifier;
- (id)termsURL;

@end
