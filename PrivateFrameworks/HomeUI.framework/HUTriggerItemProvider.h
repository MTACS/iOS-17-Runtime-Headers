
@interface HUTriggerItemProvider : HFItemProvider {
    id /* block */  _filter;
    HMHome * _home;
    NSMutableSet * _triggerItems;
    bool  _usesRichIconDescriptors;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMutableSet *triggerItems;
@property (nonatomic) bool usesRichIconDescriptors;

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
- (void)setTriggerItems:(id)arg1;
- (void)setUsesRichIconDescriptors:(bool)arg1;
- (id)triggerItems;
- (bool)usesRichIconDescriptors;

@end
