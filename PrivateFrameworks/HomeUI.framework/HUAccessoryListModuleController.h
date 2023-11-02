
@interface HUAccessoryListModuleController : HomeUI.SelectableItemModuleController <HUCollectionLayoutManagerDelegate> {
    void cellVerticalContentInset;
    void collectionLayoutManager;
}

- (void).cxx_destruct;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)displayedItemsInSection:(id)arg1;
- (id)initWithModule:(id)arg1;
- (bool)shouldShowFooterForSection:(id)arg1;
- (bool)shouldShowHeaderForSection:(id)arg1;

@end
