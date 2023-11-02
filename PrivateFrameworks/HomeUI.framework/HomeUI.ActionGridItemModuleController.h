
@interface HomeUI.ActionGridItemModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate, HUContainedAccessoryElementsGridViewControllerDelegate, HUServiceActionControlsViewControllerDelegate, NSObject> {
    void $__lazy_storage_$_collectionLayoutManager;
    void delegate;
    void presentedServiceGroupDetailsViewController;
}

- (void).cxx_destruct;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)detailsViewControllerFor:(id)arg1 item:(id)arg2;
- (id)displayedItemsInSection:(id)arg1;
- (bool)hasDetailsActionFor:(id)arg1 item:(id)arg2;
- (id)initWithModule:(id)arg1;
- (void)serviceActionControlsViewController:(id)arg1 removeServiceActionItem:(id)arg2;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (id)transformWithLayoutOptions:(id)arg1;

@end
