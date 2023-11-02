
@interface HMAccessorySettings : HMSettings <HFStateDumpBuildable, HMFLogging, HMObjectMerge> {
    _HMContext * _context;
    <HMAccessorySettingsDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMAccessorySettingGroup * _rootGroup;
    <HMAccessorySettingsContainerInternal> * _settingsContainerInternal;
    <HMControllable> * _settingsControl;
}

@property (readonly) HMAccessory *accessory;
@property (nonatomic, readonly) _HMContext *context;
@property (getter=isControllable, readonly) bool controllable;
@property (readonly, copy) NSString *debugDescription;
@property <HMAccessorySettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllowExplicitContentEnabled;
@property (nonatomic, readonly) bool isUpdateListeningHistoryEnabled;
@property (readonly) HMAccessorySettingGroup *rootGroup;
@property (readonly) <HMAccessorySettingsContainer> *settingsContainer;
@property <HMAccessorySettingsContainerInternal> *settingsContainerInternal;
@property <HMControllable> *settingsControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)localizationKeyForKeyPath:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_configureWithContext:(id)arg1;
- (void)_notifyDelegateDidUpdateKeyPath:(id)arg1;
- (void)_updateSettingsWithBlock:(id /* block */)arg1;
- (id)accessory;
- (id)context;
- (id)delegate;
- (id)initWithSettingsContainer:(id)arg1 settingsControl:(id)arg2 rootGroup:(id)arg3;
- (bool)isControllable;
- (bool)mergeFromNewObject:(id)arg1;
- (id)rootGroup;
- (void)setDelegate:(id)arg1;
- (void)setSettingsContainerInternal:(id)arg1;
- (void)setSettingsControl:(id)arg1;
- (id)settingsContainer;
- (id)settingsContainerInternal;
- (id)settingsControl;
- (id)uniqueIdentifier;

// Image: /System/Library/Frameworks/MediaSetup.framework/MediaSetup

- (id)_getMusicGroup;
- (bool)_settingForKeyPath:(id)arg1;
- (bool)isAllowExplicitContentEnabled;
- (bool)isUpdateListeningHistoryEnabled;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
