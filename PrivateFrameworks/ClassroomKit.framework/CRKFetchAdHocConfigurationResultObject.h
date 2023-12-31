
@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject {
    NSDictionary * _configuration;
}

@property (nonatomic, copy) NSDictionary *configuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConfiguration:(id)arg1;

@end
