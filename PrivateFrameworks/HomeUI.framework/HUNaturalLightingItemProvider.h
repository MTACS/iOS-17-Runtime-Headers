
@interface HUNaturalLightingItemProvider : HFItemProvider {
    NSNumber * _defaultSelectedValue;
    HMHome * _home;
    id /* block */  _homeKitObjectFilter;
    id /* block */  _lightProfileFilter;
    NSMutableSet * _naturalLightingItems;
}

@property (nonatomic, retain) NSNumber *defaultSelectedValue;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) id /* block */ homeKitObjectFilter;
@property (nonatomic, copy) id /* block */ lightProfileFilter;
@property (nonatomic, retain) NSMutableSet *naturalLightingItems;

- (void).cxx_destruct;
- (id)defaultSelectedValue;
- (id)home;
- (id /* block */)homeKitObjectFilter;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id /* block */)lightProfileFilter;
- (id)naturalLightingItems;
- (id)reloadItems;
- (void)setDefaultSelectedValue:(id)arg1;
- (void)setHomeKitObjectFilter:(id /* block */)arg1;
- (void)setLightProfileFilter:(id /* block */)arg1;
- (void)setNaturalLightingItems:(id)arg1;
- (id)sourceItemForHomeKitObject:(id)arg1;

@end
