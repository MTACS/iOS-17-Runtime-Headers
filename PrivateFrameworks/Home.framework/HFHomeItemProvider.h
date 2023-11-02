
@interface HFHomeItemProvider : HFItemProvider {
    id /* block */  _filter;
    NSMutableSet * _homeItems;
    HMHomeManager * _homeManager;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) NSMutableSet *homeItems;
@property (nonatomic, retain) HMHomeManager *homeManager;

- (void).cxx_destruct;
- (id /* block */)filter;
- (id)homeItems;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setHomeItems:(id)arg1;
- (void)setHomeManager:(id)arg1;

@end
