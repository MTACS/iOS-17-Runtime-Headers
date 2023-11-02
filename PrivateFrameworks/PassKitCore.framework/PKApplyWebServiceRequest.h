
@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest {
    NSDictionary * _experimentDetails;
    NSString * _referrerIdentifier;
}

@property (nonatomic, retain) NSDictionary *experimentDetails;
@property (nonatomic, copy) NSString *referrerIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createMutableBody;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)experimentDetails;
- (id)initWithCoder:(id)arg1;
- (id)referrerIdentifier;
- (void)setExperimentDetails:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;

@end
