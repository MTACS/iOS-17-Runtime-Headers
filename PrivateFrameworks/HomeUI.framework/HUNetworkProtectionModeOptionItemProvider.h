
@interface HUNetworkProtectionModeOptionItemProvider : HFItemProvider {
    HMAccessoryNetworkProtectionGroup * _group;
    NSMutableSet * _networkProtectionModeOptionItems;
}

@property (nonatomic, readonly, copy) HMAccessoryNetworkProtectionGroup *group;
@property (nonatomic, retain) NSMutableSet *networkProtectionModeOptionItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)group;
- (id)init;
- (id)initWithGroup:(id)arg1;
- (id)items;
- (id)networkProtectionModeOptionItems;
- (id)reloadItems;
- (void)setNetworkProtectionModeOptionItems:(id)arg1;

@end
