
@interface HFBridgeItemProvider : HFItemProvider {
    NSMutableSet * _accessoryItems;
    id /* block */  _filter;
    HMHome * _home;
}

@property (nonatomic, retain) NSMutableSet *accessoryItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)accessoryItems;
- (id /* block */)filter;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setAccessoryItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;

@end
