
@protocol RMConfigurationAdapter <NSObject>

@optional

- (bool)beginProcessingConfigurationsForScope:(long long)arg1 error:(id*)arg2;
- (void)configurationUIForConfiguration:(void *)arg1 scope:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: RMSubscribedConfigurationReference *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, RMConfigurationUIDetails *, NSError *, void*
- (bool)endProcessingConfigurations:(bool)arg1 scope:(long long)arg2 error:(id*)arg3;

@end
