
@interface HMSettingsController : NSObject <HMFLogging, HMSettingManager, HMSettingsOwner> {
    NSString * _codingKey;
    _HMContext * _context;
    <HMSettingsDelegate> * _delegate;
    NSDictionary * _encodedSettings;
    NSMapTable * _groupsMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMSettingsMessageHandler * _messageHandler;
    NSUUID * _parentIdentifier;
    HMSettingGroup * _rootGroup;
    HMSettings * _settings;
    NSMapTable * _settingsMap;
}

@property (readonly) NSString *codingKey;
@property (retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *encodedSettings;
@property (readonly) unsigned long long hash;
@property (retain) HMSettingsMessageHandler *messageHandler;
@property (readonly) NSUUID *parentIdentifier;
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly) HMSettings *settings;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__notifyDelegateDidUpdateKeyPath:(id)arg1;
- (void)__notifyDelegateSettingsDidUpdate;
- (id)codingKey;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (void)decodeWithCoder:(id)arg1;
- (id)delegate;
- (id)encodedSettings;
- (bool)hasSettingGroups;
- (bool)hasSettings;
- (id)initWithParentIdentifier:(id)arg1 codingKey:(id)arg2 messageHandler:(id)arg3 settingsCreator:(id)arg4;
- (id)initWithParentIdentifier:(id)arg1 homeUUID:(id)arg2 codingKey:(id)arg3;
- (id)logIdentifier;
- (void)mergeWith:(id)arg1 settingsInitializedWasModified:(bool)arg2;
- (id)messageHandler;
- (void)notifyDelegateOfUpdate;
- (id)parentIdentifier;
- (id)rootGroup;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncodedSettings:(id)arg1;
- (void)setMessageHandler:(id)arg1;
- (void)setRootGroup:(id)arg1;
- (void)setSetting:(id)arg1 withGroupKeyPath:(id)arg2;
- (void)setSettingGroup:(id)arg1 withParentGroupKeyPath:(id)arg2;
- (id)settingForKeyPath:(id)arg1;
- (id)settingGroupForKeyPath:(id)arg1;
- (id)settings;
- (void)updateValueForSetting:(id)arg1 value:(id)arg2 completionHandler:(id /* block */)arg3;

@end
