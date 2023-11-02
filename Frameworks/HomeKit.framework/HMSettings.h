
@interface HMSettings : NSObject <HFStateDumpBuildable> {
    <HMSettingsOwner> * _owner;
}

@property (getter=isControllable, readonly) bool controllable;
@property (readonly, copy) NSString *debugDescription;
@property <HMSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NATreeNode *hf_codex;
@property (readonly) <HMSettingsOwner> *owner;
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)initWithSettingsOwner:(id)arg1;
- (bool)isControllable;
- (id)longDescription;
- (id)owner;
- (id)rootGroup;
- (void)setDelegate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_LoadSettingsAllowlist:(unsigned long long)arg1;
+ (void)hf_resetAllowlists;

- (id)hf_accessorySettingAtKeyPath:(id)arg1;
- (id)hf_accessorySettingGroupAtKeyPath:(id)arg1;
- (id)hf_accessorySettingItemAtKeyPath:(id)arg1;
- (id)hf_codex;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
