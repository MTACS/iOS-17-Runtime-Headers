
@interface HFPredictedActionSetItemProvider : HFItemProvider {
    NSMutableSet * _allItems;
    HMHome * _home;
    unsigned long long  _itemCount;
    <HFCharacteristicValueSource> * _overrideValueSource;
    NSArray * _predictions;
    HFPredictionsManager * _predictionsManager;
}

@property (nonatomic, retain) NSMutableSet *allItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic, readonly) NSArray *orderedItems;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (nonatomic, retain) NSArray *predictions;
@property (nonatomic, retain) HFPredictionsManager *predictionsManager;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fetchUserActionPredictions;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 predictionsManagerDelegate:(id)arg2 itemCount:(unsigned long long)arg3;
- (id)invalidationReasons;
- (unsigned long long)itemCount;
- (id)items;
- (id)orderedItems;
- (id)overrideValueSource;
- (id)predictions;
- (id)predictionsManager;
- (id)reloadItems;
- (void)setAllItems:(id)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setPredictions:(id)arg1;
- (void)setPredictionsManager:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
