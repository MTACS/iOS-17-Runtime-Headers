
@interface HUServiceGridItemManager : HFItemManager {
    long long  _actionSetSectionIndex;
    id /* block */  _itemProvidersCreator;
    bool  _shouldGroupByRoom;
    bool  _shouldShowSectionHeaders;
}

@property (nonatomic) long long actionSetSectionIndex;
@property (nonatomic, copy) id /* block */ itemProvidersCreator;
@property (nonatomic) bool shouldGroupByRoom;
@property (nonatomic) bool shouldShowSectionHeaders;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id /* block */)_roomComparator;
- (id)_roomForItem:(id)arg1;
- (long long)actionSetSectionIndex;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(bool)arg2 itemProvidersCreator:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(bool)arg2 shouldShowSectionHeaders:(bool)arg3 itemProvidersCreator:(id /* block */)arg4;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(bool)arg3 shouldShowSectionHeaders:(bool)arg4 itemProvidersCreator:(id /* block */)arg5;
- (id /* block */)itemProvidersCreator;
- (void)setActionSetSectionIndex:(long long)arg1;
- (void)setItemProvidersCreator:(id /* block */)arg1;
- (void)setShouldGroupByRoom:(bool)arg1;
- (void)setShouldShowSectionHeaders:(bool)arg1;
- (bool)shouldGroupByRoom;
- (bool)shouldShowSectionHeaders;

@end
