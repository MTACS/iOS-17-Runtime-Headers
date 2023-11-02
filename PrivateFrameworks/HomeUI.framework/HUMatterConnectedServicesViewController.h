
@interface HUMatterConnectedServicesViewController : HUItemTableViewController <HUPresentationDelegate, HUTitleButtonDescriptionCellDelegate, UITextViewDelegate> {
    <HUMatterConnectedServicesViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUMatterConnectedServicesViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUMatterConnectedServicesItemManager *itemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_presentHomeConnectedEcosystemDetailViewController:(id)arg1;
- (void)_presentRemoveFromEcosystemConfirmation:(id)arg1 atIndexPath:(id)arg2;
- (void)buttonTappedForCell:(id)arg1 withItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)hu_preloadContent;
- (id)initWithConnectedServicesItemProvider:(id)arg1;
- (bool)needsToWaitForPreload;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
