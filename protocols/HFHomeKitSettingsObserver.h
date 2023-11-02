
@protocol HFHomeKitSettingsObserver <HMSettingsDelegate>

@optional

- (void)settings:(HMSettings *)arg1 didWriteValueForSettings:(NSSet *)arg2 failedSettings:(NSSet *)arg3 homeKitObjectIdentifiers:(NSSet *)arg4;
- (void)settings:(HMSettings *)arg1 willWriteValueForSettings:(NSSet *)arg2;

@end
