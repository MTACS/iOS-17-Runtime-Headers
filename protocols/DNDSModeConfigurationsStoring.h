
@protocol DNDSModeConfigurationsStoring <DNDSBackingStore>

@required

- (<DNDSModeConfigurationsStoreDelegate> *)delegate;
- (void)setDelegate:(id <DNDSModeConfigurationsStoreDelegate>)arg1;

@end
