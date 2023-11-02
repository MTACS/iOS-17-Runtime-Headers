
@interface HMDSettingGroup : NSObject <HMDSettingGroup> {
    NSMutableSet * _groupsInternal;
    NSUUID * _identifier;
    NSString * _keyPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSUUID * _parentIdentifier;
    NSMutableSet * _settingsInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (retain) NSMutableSet *groupsInternal;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (copy) NSString *keyPath;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSArray *settings;
@property (retain) NSMutableSet *settingsInternal;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groups;
- (id)groupsInternal;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 groups:(id)arg4 settings:(id)arg5;
- (id)initWithModel:(id)arg1;
- (id)keyPath;
- (id)name;
- (id)parentIdentifier;
- (void)setGroupsInternal:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setSettingsInternal:(id)arg1;
- (id)settings;
- (id)settingsInternal;

@end
