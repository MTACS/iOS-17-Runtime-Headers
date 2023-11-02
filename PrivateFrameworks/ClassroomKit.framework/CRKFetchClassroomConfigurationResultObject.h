
@interface CRKFetchClassroomConfigurationResultObject : CATTaskResultObject {
    NSDictionary * _configuration;
    NSDictionary * _configurationsByType;
}

@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic, copy) NSDictionary *configurationsByType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (id)configurationsByType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationsByType:(id)arg1;

@end
