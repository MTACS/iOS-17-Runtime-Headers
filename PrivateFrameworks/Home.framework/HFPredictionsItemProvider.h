
@interface HFPredictionsItemProvider : HFItemProvider {
    NSMutableSet * _allItems;
    HMHome * _home;
    unsigned long long  _itemLimit;
    NSMutableDictionary * _objectPriorities;
    NSArray * _predictions;
    HFPredictionsManager * _predictionsManager;
}

@property (nonatomic, retain) NSMutableSet *allItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long itemLimit;
@property (nonatomic, retain) NSMutableDictionary *objectPriorities;
@property (nonatomic, retain) NSArray *predictions;
@property (nonatomic, retain) HFPredictionsManager *predictionsManager;

- (void).cxx_destruct;
- (id)_loadHomeKitObjectsWithPredictions:(id)arg1;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 predictionsManager:(id)arg2 itemLimit:(unsigned long long)arg3;
- (id)invalidationReasons;
- (unsigned long long)itemLimit;
- (id)itemPriority:(id)arg1;
- (id)items;
- (id)objectPriorities;
- (id)predictions;
- (id)predictionsManager;
- (id)reloadItems;
- (void)setAllItems:(id)arg1;
- (void)setItemLimit:(unsigned long long)arg1;
- (void)setObjectPriorities:(id)arg1;
- (void)setPredictions:(id)arg1;
- (void)setPredictionsManager:(id)arg1;

@end
