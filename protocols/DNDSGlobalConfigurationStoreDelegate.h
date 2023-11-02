
@protocol DNDSGlobalConfigurationStoreDelegate <DNDSBackingStoreDelegate>

@required

- (void)globalConfigurationStore:(id <DNDSGlobalConfigurationStoring>)arg1 didUpdatePreventAutoReplySetting:(bool)arg2;

@end
