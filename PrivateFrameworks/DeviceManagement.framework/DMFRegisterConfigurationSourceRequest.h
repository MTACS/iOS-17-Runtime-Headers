
@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest {
    NSString * _configurationSourceName;
    NSXPCListenerEndpoint * _listenerEndpoint;
    NSString * _machServiceName;
    NSString * _organizationIdentifier;
    DMFReportingRequirements * _reportingRequirements;
}

@property (nonatomic, copy) NSString *configurationSourceName;
@property (nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, copy) NSString *machServiceName;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, copy) DMFReportingRequirements *reportingRequirements;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationSourceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)listenerEndpoint;
- (id)machServiceName;
- (id)organizationIdentifier;
- (id)reportingRequirements;
- (void)setConfigurationSourceName:(id)arg1;
- (void)setListenerEndpoint:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setReportingRequirements:(id)arg1;

@end
