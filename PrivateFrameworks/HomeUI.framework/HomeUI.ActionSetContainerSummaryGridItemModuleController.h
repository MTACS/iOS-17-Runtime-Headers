
@interface HomeUI.ActionSetContainerSummaryGridItemModuleController : HUItemModuleController <HUCollectionLayoutManagerDelegate, HUSceneEditorDelegate> {
    void $__lazy_storage_$_collectionLayoutManager;
    void sceneEditorDelegate;
}

- (void).cxx_destruct;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)displayedItemsInSection:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)sceneEditor:(id)arg1 removeActionSetBuilderFromTrigger:(id)arg2;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (id)transformWithLayoutOptions:(id)arg1;

@end
