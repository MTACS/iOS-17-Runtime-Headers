
@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse {
    NSArray * _accounts;
    PKFeatureFailureCollection * _featureFailures;
    NSString * _lastUpdated;
}

@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic, readonly) PKFeatureFailureCollection *featureFailures;
@property (nonatomic, readonly, copy) NSString *lastUpdated;

- (void).cxx_destruct;
- (id)accounts;
- (id)featureFailures;
- (id)initWithData:(id)arg1;
- (id)lastUpdated;

@end
