
@protocol HMDSettingsControllerDependency <NSObject>

@required

- (<HMDSettingsBackingStoreController> *)backingStoreController;
- (NSString *)codingKey;
- (<HMDSettingGroupModelProtocol> *)createSettingGroupModelWithName:(NSString *)arg1 parent:(NSUUID *)arg2;
- (<HMDSettingModelProtocol> *)createSettingModelWithName:(NSString *)arg1 parent:(NSUUID *)arg2 type:(NSNumber *)arg3 properties:(NSNumber *)arg4;
- (HMDSettingRootGroupModel *)createSettingRootGroupModelWithParentModelID:(NSUUID *)arg1;
- (NSArray *)keyPathsToPrune;
- (NSDictionary *)loadMetadata;
- (NSString *)logIdentifier;
- (<HMDSettingsMessageHandlerProtocol> *)messageHandler;
- (<HMDSettingsMetadataParserProtocol> *)metadataParser;
- (<HMDUserSettingsInitialValueProviding> *)migrationProvider;
- (NSUUID *)parentIdentifier;
- (void)setTransactionReceiver:(id <HMDSettingTransactionReceiverProtocol>)arg1;
- (<HMDSettingModelProtocol> *)settingModelForUpdateWithIdentifier:(NSUUID *)arg1 parentIdentifier:(NSUUID *)arg2 value:(HMSettingValue *)arg3;
- (HMSettingValue *)settingValueForValue:(id)arg1 type:(NSNumber *)arg2 constraintModels:(NSArray *)arg3 error:(id*)arg4;
- (<HMDSettingTransactionReceiverProtocol> *)transactionReceiver;

@end
