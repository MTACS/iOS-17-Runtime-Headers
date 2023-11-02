
@interface PKAccountWebServiceReportRequest : PKAccountWebServiceRequest {
    NSString * _accountIdentifier;
    NSURL * _baseURL;
    PKAccountReport * _report;
    unsigned long long  _trigger;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic, retain) PKAccountReport *report;
@property (nonatomic) unsigned long long trigger;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)report;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setReport:(id)arg1;
- (void)setTrigger:(unsigned long long)arg1;
- (unsigned long long)trigger;

@end
