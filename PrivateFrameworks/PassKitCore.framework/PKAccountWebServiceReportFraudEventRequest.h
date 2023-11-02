
@interface PKAccountWebServiceReportFraudEventRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    PKPaymentDeviceMetadata * _deviceMetadata;
    unsigned long long  _event;
    NSString * _odiAssessment;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (nonatomic) unsigned long long event;
@property (nonatomic, copy) NSString *odiAssessment;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)deviceMetadata;
- (unsigned long long)event;
- (id)odiAssessment;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setEvent:(unsigned long long)arg1;
- (void)setOdiAssessment:(id)arg1;

@end
