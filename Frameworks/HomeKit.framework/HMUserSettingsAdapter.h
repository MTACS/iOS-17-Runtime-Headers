
@interface HMUserSettingsAdapter : HMFObject <HMFLogging, HMSettingManager, HMSettingsOwner> {
    _HMContext * _context;
    bool  _didEverSentOutSettingsDidUpdate;
    HMSettingGroup * _rootGroup;
    HMSettings * _settings;
    long long  _type;
    HMUser * _user;
    <HMSettingsDelegate> * delegate;
}

@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <HMSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didEverSentOutSettingsDidUpdate;
@property (readonly) unsigned long long hash;
@property (retain) HMSettingGroup *rootGroup;
@property (readonly) HMSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic) HMUser *user;

+ (id)logCategory;
+ (id)privateSettingsSchema;
+ (id)sharedSettingsSchema;

- (void).cxx_destruct;
- (void)_notifyDelegateDidUpdateKeyPath:(id)arg1;
- (void)_notifyDelegateSettingsDidUpdate;
- (id)appendKeyPath:(id)arg1 withNextKey:(id)arg2;
- (void)configureWithContext:(id)arg1;
- (id)context;
- (id)createKeyPathArrayWithKeyPath:(id)arg1;
- (void)createRootSettingGroup;
- (id)delegate;
- (bool)didEverSentOutSettingsDidUpdate;
- (id)findOrAddUserSettingGroupWithKeyPath:(id)arg1;
- (id)groupKeyArrayFromKeyPath:(id)arg1;
- (id)initWithUser:(id)arg1 settingsType:(long long)arg2;
- (bool)mergeUsingPreOrder:(id)arg1 withDictionary:(id)arg2;
- (void)mergeWithDictionary:(id)arg1;
- (id)rootGroup;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidEverSentOutSettingsDidUpdate:(bool)arg1;
- (void)setRootGroup:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUser:(id)arg1;
- (id)settingKeyFromKeyPath:(id)arg1;
- (id)settings;
- (long long)type;
- (void)updateValueForSetting:(id)arg1 value:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)user;

@end
