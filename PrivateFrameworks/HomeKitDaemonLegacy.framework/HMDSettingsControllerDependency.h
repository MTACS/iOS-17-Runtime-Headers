
@interface HMDSettingsControllerDependency : NSObject <HMDSettingsControllerDependency> {
    <HMDSettingsBackingStoreController> * _backingStoreController;
    NSString * _codingKey;
    HMDSettingsMessageHandler<HMDSettingsMessageHandlerProtocol> * _internalMessageHandler;
    NSArray * _keyPathsToPrune;
    NSString * _logIdentifier;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _metadataFileName;
    <HMDSettingsMetadataParserProtocol> * _metadataParser;
    <HMDUserSettingsInitialValueProviding> * _migrationProvider;
    NSUUID * _parentIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    <HMDSettingTransactionReceiverProtocol> * _transactionReceiver;
}

@property (readonly) <HMDSettingsBackingStoreController> *backingStoreController;
@property (readonly) NSString *codingKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *keyPathsToPrune;
@property (readonly) NSString *logIdentifier;
@property (readonly) <HMDSettingsMessageHandlerProtocol> *messageHandler;
@property (readonly) <HMDSettingsMetadataParserProtocol> *metadataParser;
@property (readonly) <HMDUserSettingsInitialValueProviding> *migrationProvider;
@property (readonly) NSUUID *parentIdentifier;
@property (readonly) Class superclass;
@property <HMDSettingTransactionReceiverProtocol> *transactionReceiver;

- (void).cxx_destruct;
- (id)backingStoreController;
- (id)codingKey;
- (void)configureWithHome:(id)arg1 messageDispatcher:(id)arg2 backingStoreController:(id)arg3;
- (id)createSettingGroupModelWithName:(id)arg1 parent:(id)arg2;
- (id)createSettingModelWithName:(id)arg1 parent:(id)arg2 type:(id)arg3 properties:(id)arg4;
- (id)createSettingRootGroupModelWithParentModelID:(id)arg1;
- (id)initWithParentUUID:(id)arg1 logName:(id)arg2 queue:(id)arg3 metadataFileName:(id)arg4 codingKey:(id)arg5 messageHandler:(id)arg6 migrationProvider:(id)arg7;
- (id)initWithParentUUID:(id)arg1 logName:(id)arg2 queue:(id)arg3 metadataFileName:(id)arg4 codingKey:(id)arg5 messageHandler:(id)arg6 migrationProvider:(id)arg7 keyPathsToPrune:(id)arg8;
- (id)keyPathsToPrune;
- (id)loadMetadata;
- (id)logIdentifier;
- (id)messageHandler;
- (id)metadataParser;
- (id)migrationProvider;
- (id)parentIdentifier;
- (void)setTransactionReceiver:(id)arg1;
- (id)settingModelForUpdateWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 value:(id)arg3;
- (id)settingValueForValue:(id)arg1 type:(id)arg2 constraintModels:(id)arg3 error:(id*)arg4;
- (id)transactionReceiver;

@end
