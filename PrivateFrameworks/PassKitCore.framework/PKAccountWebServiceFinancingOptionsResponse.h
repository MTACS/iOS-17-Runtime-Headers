
@interface PKAccountWebServiceFinancingOptionsResponse : PKAccountWebServiceResponse {
    NSArray * _acceptedFundingSources;
    PKPayLaterProductAssessmentCollection * _assessmentCollection;
    PKPayLaterDynamicContent * _dynamicContent;
    unsigned long long  _languageDisclosureLocation;
    NSArray * _lastUsedFundingSources;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) NSArray *acceptedFundingSources;
@property (nonatomic, readonly) PKPayLaterProductAssessmentCollection *assessmentCollection;
@property (nonatomic, readonly) PKPayLaterDynamicContent *dynamicContent;
@property (nonatomic, readonly) unsigned long long languageDisclosureLocation;
@property (nonatomic, readonly) NSArray *lastUsedFundingSources;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;

- (void).cxx_destruct;
- (id)acceptedFundingSources;
- (id)assessmentCollection;
- (id)dynamicContent;
- (id)initWithData:(id)arg1;
- (unsigned long long)languageDisclosureLocation;
- (id)lastUsedFundingSources;
- (id)sessionIdentifier;

@end
