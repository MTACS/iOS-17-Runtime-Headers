
@interface PKContactInformationResponse : PKPaymentWebServiceResponse {
    PKContactInformation * _contactInformation;
}

@property (nonatomic, readonly) PKContactInformation *contactInformation;

- (void).cxx_destruct;
- (id)contactInformation;
- (id)initWithData:(id)arg1;

@end
