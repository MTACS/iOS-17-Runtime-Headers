
@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse {
    NSArray * _allFeatureApplications;
    PKFeatureFailureCollection * _featureFailures;
    NSString * _lastUpdated;
}

@property (nonatomic, readonly) NSArray *allFeatureApplications;
@property (nonatomic, readonly) PKFeatureFailureCollection *featureFailures;
@property (nonatomic, readonly, copy) NSString *lastUpdated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allFeatureApplications;
- (void)encodeWithCoder:(id)arg1;
- (id)featureFailures;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)lastUpdated;

@end
