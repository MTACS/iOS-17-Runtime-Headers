
@protocol FCNewsAppConfigurationObserving <NSObject>

@optional

- (void)configurationManager:(id <FCNewsAppConfigurationManager>)arg1 appConfigurationDidChange:(id <FCNewsAppConfiguration>)arg2;
- (void)configurationManagerPaywallConfigDidChange:(id <FCNewsAppConfigurationManager>)arg1;
- (void)configurationManagerSignificantAppConfigChange:(id <FCNewsAppConfigurationManager>)arg1;

@end
