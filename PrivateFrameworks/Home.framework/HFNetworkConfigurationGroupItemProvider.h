
@interface HFNetworkConfigurationGroupItemProvider : HFItemProvider {
    NSMutableSet * _groupItems;
    HMHome * _home;
}

@property (nonatomic, retain) NSMutableSet *groupItems;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupItems;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setGroupItems:(id)arg1;

@end
