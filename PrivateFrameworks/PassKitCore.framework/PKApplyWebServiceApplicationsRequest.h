
@interface PKApplyWebServiceApplicationsRequest : PKApplyWebServiceRequest {
    NSURL * _applyServiceURL;
}

@property (nonatomic, retain) NSURL *applyServiceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)applyServiceURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setApplyServiceURL:(id)arg1;

@end
