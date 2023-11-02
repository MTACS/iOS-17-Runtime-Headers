
@interface HUNearbyAccessoriesEditorViewController : HUItemCollectionViewController <HUCollectionLayoutManagerDelegate> {
    void EmptySetIdentifier;
    void NearbyAccessoryCustomUUIDStrings;
    void accessoryElementModule;
    void completionHandler;
    void instructionModule;
    void layoutManager;
    void primaryAccessory;
    void selectionController;
}

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)cancelEditingWithSender:(id)arg1;
- (void)dismissEditorWithSender:(id)arg1;
- (id)displayedItemsInSection:(id)arg1;
- (id)hu_preloadContent;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithPrimaryAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (void)viewDidLoad;

@end
