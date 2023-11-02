
@interface HUServiceGroupEditorViewController : HUItemCollectionViewController <HUCollectionLayoutManagerDelegate, HUPresentationDelegateHost> {
    void $__lazy_storage_$_collectionLayoutManager;
    void editingName;
    void presentationDelegate;
    void serviceGroupEditorDelegate;
}

@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) <HUServiceGroupEditorViewControllerDelegate> *serviceGroupEditorDelegate;

+ (id)forCreatingNewServiceGroupWithServices:(id)arg1 inHome:(id)arg2;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)cancelWithSender:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)displayedItemsInSection:(id)arg1;
- (void)doneWithSender:(id)arg1;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithServiceGroupBuilder:(id)arg1;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)presentationDelegate;
- (id)serviceGroupEditorDelegate;
- (void)setPresentationDelegate:(id)arg1;
- (void)setServiceGroupEditorDelegate:(id)arg1;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
