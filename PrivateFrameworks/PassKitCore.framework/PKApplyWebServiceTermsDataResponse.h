
@interface PKApplyWebServiceTermsDataResponse : PKApplyWebServiceResponse {
    NSData * _termsData;
    NSString * _termsDataFileName;
}

@property (nonatomic, retain) NSData *termsData;
@property (nonatomic, copy) NSString *termsDataFileName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setTermsData:(id)arg1;
- (void)setTermsDataFileName:(id)arg1;
- (id)termsData;
- (id)termsDataFileName;

@end
