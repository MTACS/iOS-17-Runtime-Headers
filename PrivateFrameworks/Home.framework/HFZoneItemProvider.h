
@interface HFZoneItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    NSMutableSet * _zoneItems;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableSet *zoneItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setZoneItems:(id)arg1;
- (id)zoneItems;

@end
