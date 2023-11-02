
@interface HMAccessorySetting : HMSetting <HFStateDumpBuildable, HMFLogging, _HMAccessorySettingDelegate> {
    HMAccessorySettingGroup * _group;
    _HMAccessorySetting * _internal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMAccessorySettingGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) _HMAccessorySetting *internal;
@property (readonly, copy) NSString *keyPath;
@property (getter=isReflected, readonly) bool reflected;
@property (readonly) Class superclass;
@property (readonly) Class valueClass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
+ (id)settingForInternal:(id)arg1;

- (void).cxx_destruct;
- (void)_settingDidUpdateValue:(id)arg1;
- (void)_settingWillUpdateValue:(id)arg1;
- (id)description;
- (id)group;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithInternal:(id)arg1;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isReflected;
- (bool)isWritable;
- (id)keyPath;
- (id)keyPathForSetting:(id)arg1;
- (void)logAndPostNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)logIdentifier;
- (void)setGroup:(id)arg1;
- (void)settingDidUpdateReflected;
- (void)settingWillUpdateReflected;
- (void)updateReflected:(bool)arg1;
- (void)updateValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)value;
- (Class)valueClass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
