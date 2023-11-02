
@protocol DNDSGlobalConfigurationStoring <DNDSBackingStore>

@required

- (<DNDSGlobalConfigurationStoreDelegate> *)delegate;
- (void)setDelegate:(id <DNDSGlobalConfigurationStoreDelegate>)arg1;

@end
