
@interface PKApplyWebServiceFeatureTermsDataRequest : PKApplyWebServiceRequest {
    unsigned long long  _featureIdentifier;
    NSString * _termsDataFormat;
    NSString * _termsIdentifier;
}

@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic, copy) NSString *termsDataFormat;
@property (nonatomic, copy) NSString *termsIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)featureIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)setFeatureIdentifier:(unsigned long long)arg1;
- (void)setTermsDataFormat:(id)arg1;
- (void)setTermsIdentifier:(id)arg1;
- (id)termsDataFormat;
- (id)termsIdentifier;

@end
