
@interface HFActionSetItemProvider : HFItemProvider {
    unsigned long long  _actionSetItemStyle;
    NSMutableSet * _actionSetItems;
    id /* block */  _filter;
    HMHome * _home;
    bool  _onlyShowsFavorites;
    <HFCharacteristicValueSource> * _overrideValueSource;
    HMRoom * _room;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
}

@property (nonatomic, readonly) unsigned long long actionSetItemStyle;
@property (nonatomic, retain) NSMutableSet *actionSetItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool onlyShowsFavorites;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (nonatomic, retain) HMRoom *room;
@property (nonatomic, copy) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id /* block */)_favoriteFilter;
- (id /* block */)_roomFilter;
- (id /* block */)_showInHomeDashboardFilter;
- (unsigned long long)actionSetItemStyle;
- (id)actionSetItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2;
- (id)invalidationReasons;
- (id)items;
- (bool)onlyShowsFavorites;
- (id)overrideValueSource;
- (id)reloadItems;
- (id)room;
- (id)serviceLikeItem;
- (void)setActionSetItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setOnlyShowsFavorites:(bool)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setServiceLikeItem:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end
