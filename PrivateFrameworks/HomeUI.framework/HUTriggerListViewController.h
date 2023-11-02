
@interface HUTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HUColoredButtonCellDelegate, HUNavigationBarButtonOwner, HUTriggerEditorDelegate, HUTriggerListSubheadlineCellDelegate> {
    unsigned long long  _editorPresentationMode;
    bool  _isTransitioningSizes;
    HUGridLayoutOptions * _layoutOptions;
    HUNavigationBarButton * _navigationAddButton;
    HUTriggerListItemManager * _triggerItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long editorPresentationMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTransitioningSizes;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) HUNavigationBarButton *navigationAddButton;
@property (nonatomic, readonly) bool shouldIncludeRoomsInHomeMenu;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUTriggerListItemManager *triggerItemManager;

- (void).cxx_destruct;
- (void)_addTrigger:(id)arg1;
- (id)_deleteItem:(id)arg1;
- (void)_showSummaryForTriggerItem:(id)arg1;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (id)addActionDelegateForNavigationBarButton:(id)arg1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)coloredButtonCellPressed:(id)arg1;
- (unsigned long long)editorPresentationMode;
- (id)homeForNavigationBarButton:(id)arg1;
- (id)init;
- (bool)isTransitioningSizes;
- (id)layoutOptions;
- (void)learnMoreLinkTapped:(id)arg1;
- (id)navigationAddButton;
- (id)roomForNavigationBarButton:(id)arg1;
- (void)setEditorPresentationMode:(unsigned long long)arg1;
- (void)setIsTransitioningSizes:(bool)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setNavigationAddButton:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)showAddTriggerView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)trailingSwipeActionsForItem:(id)arg1;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (id)triggerItemManager;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
