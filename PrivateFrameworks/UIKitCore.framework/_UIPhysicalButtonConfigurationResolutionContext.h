
@interface _UIPhysicalButtonConfigurationResolutionContext : NSObject <NSCopying> {
    NSDictionary * _configurationToInteractionMap;
    _UIPhysicalButtonConfigurationSet * _configurations;
}

@property (nonatomic, copy) NSDictionary *configurationToInteractionMap;
@property (nonatomic, copy) _UIPhysicalButtonConfigurationSet *configurations;

- (void).cxx_destruct;
- (id)configurationToInteractionMap;
- (id)configurations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setConfigurationToInteractionMap:(id)arg1;
- (void)setConfigurations:(id)arg1;

@end
