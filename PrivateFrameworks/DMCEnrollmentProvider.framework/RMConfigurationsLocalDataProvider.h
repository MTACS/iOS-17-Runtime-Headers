
@interface RMConfigurationsLocalDataProvider : NSObject <RMConfigurationsDataProvider> {
    RMUIConfigurationInterface * _rmuiConfigInterface;
}

@property (nonatomic, retain) RMUIConfigurationInterface *rmuiConfigInterface;

- (void).cxx_destruct;
- (id)initWithRMUIConfigurationInterface:(id)arg1;
- (id)passcodeViewModel;
- (id)pluginSectionViewModels;
- (id)pluginViewModels;
- (id)profileViewModels;
- (id)rmuiConfigInterface;
- (void)setConfigurationActivated:(bool)arg1 forViewModel:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setRmuiConfigInterface:(id)arg1;

@end
