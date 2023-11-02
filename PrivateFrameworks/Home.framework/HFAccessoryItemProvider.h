
@interface HFAccessoryItemProvider : HFItemProvider {
    NSMutableSet * _accessoryItems;
    id /* block */  _filter;
    HMHome * _home;
    <HFCharacteristicValueSource> * _overrideValueSource;
}

@property (nonatomic, retain) NSMutableSet *accessoryItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)accessoryItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)overrideValueSource;
- (id)reloadItems;
- (void)setAccessoryItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
