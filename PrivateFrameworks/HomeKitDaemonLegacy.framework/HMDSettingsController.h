
@interface HMDSettingsController : HMFObject <HMDSettingTransactionReceiverProtocol, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMFLogging> {
    <HMDSettingsControllerDelegate> * _delegate;
    <HMDSettingsControllerDependency> * _dependency;
    NSMapTable * _groupsMap;
    bool  _isInitialized;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMDSettingsMessageHandlerProtocol> * _messageHandler;
    HMDSettingGroup * _rootGroup;
    NSMapTable * _settingsMap;
    NSUUID * _userUUID;
}

@property (readonly) NSArray *allObjectIdentifiers;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *userUUID;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_prunedSettingsGroupByRemovingKeyPathsFromGroup:(id)arg1;
- (id)allObjectIdentifiers;
- (void)configure;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDependency:(id)arg1 delegate:(id)arg2;
- (void)loadWithModels:(id)arg1;
- (id)logIdentifier;
- (id)migrateSettingsTransactionWithTransaction:(id)arg1 error:(id*)arg2;
- (id)modelsToMakeSettings;
- (id)modelsToMigrateSettings;
- (id)settingForKeyPath:(id)arg1;
- (id)settingValuesByKeyPathWithPrefix:(id)arg1;
- (void)transactionSettingConstraintModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionSettingConstraintModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (void)transactionSettingGroupModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionSettingGroupModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (void)transactionSettingModelRemoved:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionSettingModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(id /* block */)arg3;
- (void)updateRootGroup:(id)arg1;
- (void)updateWithEncodedValue:(id)arg1 onSettingKeyPath:(id)arg2 completion:(id /* block */)arg3;
- (void)updateWithValue:(id)arg1 onSetting:(id)arg2 completion:(id /* block */)arg3;
- (id)userUUID;

@end
