
@protocol AFExperimentMutating <NSObject>

@required

- (void)setConfigurationIdentifier:(NSString *)arg1;
- (void)setConfigurationVersion:(NSString *)arg1;
- (void)setDeploymentGroupIdentifier:(NSString *)arg1;
- (void)setDeploymentGroupProperties:(NSDictionary *)arg1;
- (void)setDeploymentReason:(long long)arg1;

@end
