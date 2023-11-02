
@interface HMAccessorySettingGroup : HMSettingGroup <HFStateDumpBuildable, HMFLogging, _HMAccessorySettingGroupDelegate> {
    HMAccessorySettingGroup * _group;
    NSMutableSet * _groups;
    _HMAccessorySettingGroup * _internal;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMAccessorySettingGroup *group;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) _HMAccessorySettingGroup *internal;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_notifyClientOfAddedGroup:(id)arg1;
- (void)_notifyClientOfAddedSetting:(id)arg1;
- (void)_notifyClientOfRemovedGroup:(id)arg1;
- (void)_notifyClientOfRemovedSetting:(id)arg1;
- (void)_settingGroup:(id)arg1 didAddSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didAddSettingGroup:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSettingGroup:(id)arg2;
- (id)accessorySettingGroupWithKeyPath:(id)arg1;
- (id)accessorySettingWithKeyPath:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)group;
- (id)groups;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInternal:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isReflectedEqual:(id)arg1;
- (id)keyPath;
- (id)localizedTitle;
- (id)logIdentifier;
- (void)mergeReflected:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)setGroup:(id)arg1;
- (id)settings;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
