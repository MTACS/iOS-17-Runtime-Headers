
@interface HUNetworkProtectionModeOptionItem : HFItem {
    HMAccessoryNetworkProtectionGroup * _group;
    long long  _targetProtectionModeOption;
}

@property (nonatomic, readonly, copy) HMAccessoryNetworkProtectionGroup *group;
@property (nonatomic, readonly) long long targetProtectionModeOption;

+ (long long)_priorityForTargetProtectionMode:(long long)arg1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)group;
- (id)initWithGroup:(id)arg1 targetProtectionModeOption:(long long)arg2;
- (long long)targetProtectionModeOption;

@end
