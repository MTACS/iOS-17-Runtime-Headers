
@interface HUMediaSystemEditorViewController : HUItemCollectionViewController <HUMediaSystemEditorHelperDelegate, HUPresentationDelegateHost> {
    void $__lazy_storage_$_helper;
    void accessoryModule;
    void delegate;
    void presentationDelegate;
    void selectionController;
}

@property (nonatomic) <HUMediaSystemEditorViewControllerDelegate> *delegate;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;
@property (nonatomic, readonly) UIViewController *mediaSystemHelperPresentingViewController;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)cancelWithSender:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)createMediaSystem;
- (void)createMediaSystemWithAccessory:(id)arg1;
- (id)delegate;
- (void)doneWithSender:(id)arg1;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithAccessories:(id)arg1 home:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithMediaSystemBuilder:(id)arg1 staticAccessories:(id)arg2;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)mediaSystemBuilder;
- (void)mediaSystemEditorHelper:(id)arg1 didAbortForAccessoryNeedingUpdate:(id)arg2;
- (void)mediaSystemEditorHelper:(id)arg1 didModifyMediaSystemBuilder:(id)arg2;
- (void)mediaSystemEditorHelper:(id)arg1 needsToPresentViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)mediaSystemEditorHelperDidBeginCommitting:(id)arg1;
- (void)mediaSystemEditorHelperDidEndCommitting:(id)arg1;
- (id)mediaSystemHelperPresentingViewController;
- (id)presentationDelegate;
- (void)setDelegate:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)viewDidLoad;

@end
