
@interface HULinkedApplicationItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    NSSet * _linkedApplicationItems;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSSet *linkedApplicationItems;

+ (bool)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)_generateItemsFromSoftwareLookupResult:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)linkedApplicationItems;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setLinkedApplicationItems:(id)arg1;

@end
