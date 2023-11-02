
@interface HMDAccessorySettingGroup : HMFObject <HMDSettingGroup, HMFLogging, NSSecureCoding> {
    <HMDAccessorySettingGroupDataSource> * _dataSource;
    NSMutableSet * _groups;
    NSUUID * _identifier;
    NSString * _keyPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDAccessorySettingGroup * _mediaSystemSettingGroup;
    NSString * _name;
    NSUUID * _parentIdentifier;
    NSMutableSet * _settings;
}

@property <HMDAccessorySettingGroupDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *keyPath;
@property HMDAccessorySettingGroup *mediaSystemSettingGroup;
@property (readonly, copy) NSString *name;
@property (copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_reevaluateParentGroup:(id)arg1;
- (void)_setParentGroup:(id)arg1;
- (id)_settingWithKeys:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (bool)compareSettingsTree:(id)arg1;
- (id)copyIdentical;
- (id)copyReplica;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (bool)dataSourceShouldEncodeSetting:(id)arg1 withCoder:(id)arg2;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)fullDescription;
- (id)groupWithIdentifier:(id)arg1;
- (id)groups;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3;
- (void)intersectSettingGroup:(id)arg1 groupMetadata:(id)arg2 shouldAddMissingItems:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isPrivateToDevice;
- (id)keyPath;
- (id)logIdentifier;
- (id)mediaSystemSettingGroup;
- (id)name;
- (id)parentIdentifier;
- (void)removeGroup:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMediaSystemSettingGroup:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (id)settingWithIdentifier:(id)arg1;
- (id)settingWithKeyPath:(id)arg1;
- (id)settingWithName:(id)arg1;
- (id)settings;
- (bool)shouldEncodeForCoder:(id)arg1;
- (id)subGroupWithName:(id)arg1;

@end
