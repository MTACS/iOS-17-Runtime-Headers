
@interface HMSettingGroup : NSObject <HFStateDumpBuildable, NSSecureCoding> {
    NSMutableDictionary * _groups;
    NSUUID * _identifier;
    NSString * _keyPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSMutableDictionary * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_longDescriptionWithCurrentGroup:(id)arg1 currentSettings:(id)arg2;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fixNestedKeyPaths;
- (id)groups;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 groups:(id)arg3 settings:(id)arg4;
- (id)keyPath;
- (id)localizedTitle;
- (id)longDescription;
- (id)name;
- (void)setKeyPath:(id)arg1;
- (id)settingGroupWithKeyPath:(id)arg1;
- (id)settings;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
