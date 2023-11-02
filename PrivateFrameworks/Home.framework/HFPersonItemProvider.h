
@interface HFPersonItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    NSMutableSet * _personItems;
    HMPersonManager * _personManager;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSMutableSet *personItems;
@property (nonatomic, retain) HMPersonManager *personManager;

- (void).cxx_destruct;
- (id /* block */)filter;
- (id)home;
- (id)initWithHome:(id)arg1 personManager:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)personItems;
- (id)personManager;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setHome:(id)arg1;
- (void)setPersonItems:(id)arg1;
- (void)setPersonManager:(id)arg1;

@end
