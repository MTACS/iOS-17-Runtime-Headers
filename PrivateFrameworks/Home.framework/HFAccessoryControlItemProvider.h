
@interface HFAccessoryControlItemProvider : HFItemProvider {
    HMAccessory * _accessory;
    HFAccessoryItem * _accessoryItem;
    NSSet * _previousControlItems;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) HFAccessoryItem *accessoryItem;
@property (nonatomic, retain) NSSet *previousControlItems;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryItem;
- (id)initWithAccessoryItem:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)previousControlItems;
- (id)reloadItems;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryItem:(id)arg1;
- (void)setPreviousControlItems:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
