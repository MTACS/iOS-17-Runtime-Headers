
@interface HomeUI.AccessoryGridModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate> {
    void $__lazy_storage_$_collectionLayoutManager;
    void cellSettings;
    void layoutStyle;
}

- (void).cxx_destruct;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)displayedItemsInSection:(id)arg1;
- (id)initWithModule:(id)arg1;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (id)transformWithLayoutOptions:(id)arg1;

@end
