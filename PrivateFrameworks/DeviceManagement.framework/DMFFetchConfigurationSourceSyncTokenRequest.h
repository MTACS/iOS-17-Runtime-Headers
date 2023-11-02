
@interface DMFFetchConfigurationSourceSyncTokenRequest : DMFTaskRequest {
    NSString * _configurationSource;
}

@property (nonatomic, copy) NSString *configurationSource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationSource;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConfigurationSource:(id)arg1;

@end
