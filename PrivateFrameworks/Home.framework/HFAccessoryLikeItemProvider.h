
@interface HFAccessoryLikeItemProvider : HFItemProvider {
    <HFAccessoryLikeObjectContainer> * _accessoryContainer;
    <HFAccessoryRepresentableObjectFiltering> * _accessoryContainerFilter;
    NSMutableSet * _accessoryLikeItems;
    NSArray * _accessoryTypeGroups;
    id /* block */  _filterBlock;
    HMHome * _home;
    unsigned long long  _objectLevel;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) <HFAccessoryLikeObjectContainer> *accessoryContainer;
@property (nonatomic, retain) <HFAccessoryRepresentableObjectFiltering> *accessoryContainerFilter;
@property (nonatomic, retain) NSMutableSet *accessoryLikeItems;
@property (nonatomic, retain) NSArray *accessoryTypeGroups;
@property (nonatomic, copy) id /* block */ filterBlock;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long objectLevel;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)accessoryContainer;
- (id)accessoryContainerFilter;
- (id)accessoryLikeItems;
- (id)accessoryTypeGroups;
- (id)buildItemForAccessoryRepresentable:(id)arg1;
- (id /* block */)filterBlock;
- (id)home;
- (id)initWithAccessoryContainer:(id)arg1 inHome:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithRoom:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (unsigned long long)objectLevel;
- (id)reloadItems;
- (void)setAccessoryContainerFilter:(id)arg1;
- (void)setAccessoryLikeItems:(id)arg1;
- (void)setAccessoryTypeGroups:(id)arg1;
- (void)setFilterBlock:(id /* block */)arg1;
- (void)setObjectLevel:(unsigned long long)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
