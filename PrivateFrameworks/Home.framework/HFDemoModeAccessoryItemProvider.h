
@interface HFDemoModeAccessoryItemProvider : HFItemProvider {
    NSSet * _demoItems;
    id /* block */  _filter;
    HMHome * _home;
}

@property (nonatomic, retain) NSSet *demoItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) HMHome *home;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)demoItems;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setDemoItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setHome:(id)arg1;

@end
