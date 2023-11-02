
@interface MCUIBridgeRMConfigurationsDataProvider : NSObject <RMConfigurationsDataProvider> {
    NSString * _mdmProfileIdentifier;
}

@property (nonatomic, retain) NSString *mdmProfileIdentifier;

- (void).cxx_destruct;
- (id)_rmConfigurationViewModels;
- (id)initWithMDMProfileIdentifier:(id)arg1;
- (id)mdmProfileIdentifier;
- (id)passcodeViewModel;
- (id)pluginSectionViewModels;
- (id)pluginViewModels;
- (id)profileViewModels;
- (void)setConfigurationActivated:(bool)arg1 forViewModel:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setMdmProfileIdentifier:(id)arg1;

@end
