
@protocol AFExperimentConfigurationMutating <NSObject>

@required

- (void)setControlGroup:(AFExperimentGroup *)arg1;
- (void)setExperimentGroups:(NSArray *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setSalt:(NSString *)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(NSString *)arg1;

@end
