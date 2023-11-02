
@protocol DNDSModeConfigurationsStoreDelegate <DNDSBackingStoreDelegate>

@required

- (void)modeConfigurationStore:(id <DNDSModeConfigurationsStoring>)arg1 didUpdateAvailableModes:(NSArray *)arg2;

@end
