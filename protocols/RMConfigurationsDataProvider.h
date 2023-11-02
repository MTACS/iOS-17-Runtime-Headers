
@protocol RMConfigurationsDataProvider

@required

- (RMUIPasscodeViewModel *)passcodeViewModel;
- (NSArray *)pluginSectionViewModels;
- (NSArray *)pluginViewModels;
- (NSArray *)profileViewModels;
- (void)setConfigurationActivated:(void *)arg1 forViewModel:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: bool, RMUIProfileViewModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, RMUIInteractiveProfileErrorViewModel *, void*

@end
