
@interface PKAccountWebServiceTermsDataResponse : PKAccountWebServiceResponse {
    NSData * _termsData;
    NSString * _termsDataFileName;
}

@property (nonatomic, retain) NSData *termsData;
@property (nonatomic, copy) NSString *termsDataFileName;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (void)setTermsData:(id)arg1;
- (void)setTermsDataFileName:(id)arg1;
- (id)termsData;
- (id)termsDataFileName;

@end
