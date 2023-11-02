
@protocol HFHomeKitSettingItemProviderProtocol

@required

- (bool)shouldUpdateForKeyPaths:(NSArray *)arg1;
- (void)updateSettingValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (bool)updateSettings:(NSArray *)arg1;

@end
