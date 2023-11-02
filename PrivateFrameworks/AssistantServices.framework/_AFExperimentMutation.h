
@interface _AFExperimentMutation : NSObject <AFExperimentMutating> {
    AFExperiment * _base;
    NSString * _configurationIdentifier;
    NSString * _configurationVersion;
    NSString * _deploymentGroupIdentifier;
    NSDictionary * _deploymentGroupProperties;
    long long  _deploymentReason;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasConfigurationIdentifier : 1; 
        unsigned int hasConfigurationVersion : 1; 
        unsigned int hasDeploymentGroupIdentifier : 1; 
        unsigned int hasDeploymentGroupProperties : 1; 
        unsigned int hasDeploymentReason : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getConfigurationIdentifier;
- (id)getConfigurationVersion;
- (id)getDeploymentGroupIdentifier;
- (id)getDeploymentGroupProperties;
- (long long)getDeploymentReason;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setConfigurationIdentifier:(id)arg1;
- (void)setConfigurationVersion:(id)arg1;
- (void)setDeploymentGroupIdentifier:(id)arg1;
- (void)setDeploymentGroupProperties:(id)arg1;
- (void)setDeploymentReason:(long long)arg1;

@end
