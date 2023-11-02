
@interface HUContainedSpeakersViewController : HUItemTableViewController <HUDetailsPresentationDelegateHost, HUPresentationDelegate> {
    void presentationDelegate;
    void requiresPresentingViewControllerDismissal;
}

@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)contentConfigurationForHeaderViewAtSectionIndex:(long long)arg1;
- (void)editWithSender:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithMediaItem:(id)arg1;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)presentationDelegate;
- (bool)requiresPresentingViewControllerDismissal;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
