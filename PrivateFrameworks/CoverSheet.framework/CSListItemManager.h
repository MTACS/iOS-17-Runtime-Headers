
@interface CSListItemManager : NSObject <CSListItemManaging> {
    NSMutableDictionary * _identifiersToItems;
    NSDictionary * _identifiersToProviders;
    <CSListItemContaining> * _itemContainer;
    bool  _listHasNotificationContent;
    CSListItem * _nowPlayingItem;
}

@property (nonatomic, readonly, copy) NSArray *allItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *identifiersToItems;
@property (nonatomic, retain) NSDictionary *identifiersToProviders;
@property (nonatomic, readonly) bool isPresentingSupplementaryContent;
@property (nonatomic) <CSListItemContaining> *itemContainer;
@property (nonatomic, readonly) unsigned long long itemCount;
@property (nonatomic) bool listHasNotificationContent;
@property (nonatomic, retain) CSListItem *nowPlayingItem;
@property (readonly) Class superclass;

+ (id)itemManagerWithItemContainer:(id)arg1;
+ (id)itemManagerWithItemContainer:(id)arg1 itemProviders:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithItemContainer:(id)arg1 itemProviders:(id)arg2;
- (void)_restrictsTouches:(bool)arg1 forSpecificContentHost:(id)arg2;
- (void)addItem:(id)arg1;
- (id)allItems;
- (void)cancelTouchesForItem:(id)arg1;
- (void)didAddNewSceneHostEnvironment;
- (void)handleRemovedItemsWithContentHosts:(id)arg1;
- (id)identifiersToItems;
- (id)identifiersToProviders;
- (bool)isPresentingSupplementaryContent;
- (void)item:(id)arg1 requestsAuthenticationAndPerformBlock:(id /* block */)arg2;
- (void)item:(id)arg1 requestsModalPresentationOfViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)itemContainer;
- (unsigned long long)itemCount;
- (id /* block */)itemsGroupSortComparatorForListSectionIdentifier:(id)arg1;
- (id /* block */)itemsViewControllerSortComparatorForListSectionIdentifier:(id)arg1;
- (bool)listHasNotificationContent;
- (id)nowPlayingItem;
- (void)removeItem:(id)arg1;
- (void)restrictsTouches:(bool)arg1 onHostedSceneOfContentHost:(id)arg2;
- (void)restrictsTouchesOnAllHostedScenes:(bool)arg1;
- (void)setIdentifiersToItems:(id)arg1;
- (void)setIdentifiersToProviders:(id)arg1;
- (void)setItemContainer:(id)arg1;
- (void)setListHasNotificationContent:(bool)arg1;
- (void)setNowPlayingItem:(id)arg1;
- (void)significantUserInteractionBeganForItem:(id)arg1;
- (void)significantUserInteractionEndedForItem:(id)arg1;
- (void)supplementaryViewsContainer:(id)arg1 requestsCancelTouches:(bool)arg2 onSupplementaryViewController:(id)arg3;
- (void)supplementaryViewsContainer:(id)arg1 requestsCancelTouchesOnAllSupplementaryViewControllers:(bool)arg2;
- (void)updateItem:(id)arg1;
- (void)willPresentPosterSwitcher;

@end
