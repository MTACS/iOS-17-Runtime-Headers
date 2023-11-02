
@protocol HFHomeKitSettingsVendor <HFHomeKitObject, HFGroupableItemProtocol>

@required

- (bool)hasValidSettings;
- (NSSet *)hf_dependentHomeKitObjectsForDownstreamItems;
- (HMHome *)hf_home;
- (HFHomeKitSettingsAdapterManager *)hf_settingsAdapterManager;
- (HFHomeKitSettingsValueManager *)hf_settingsValueManager;
- (NSSet *)homekitObjectIdentifiers;
- (HMSettings *)settings;

@end
