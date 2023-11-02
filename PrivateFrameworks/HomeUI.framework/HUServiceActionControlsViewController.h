
@interface HUServiceActionControlsViewController : HUItemTableViewController <HUControlPanelControllerDelegate, HUDetailsPresentationDelegateHost, HUServiceActionControlsItemManagerDelegate> {
    HUControlPanelController * _controlPanelController;
    unsigned long long  _mode;
    UIColor * _overrideCellColor;
    <HUPresentationDelegate> * _presentationDelegate;
    bool  _requiresPresentingViewControllerDismissal;
    <HUServiceActionControlsViewControllerDelegate> * _serviceActionControlsDelegate;
    HFServiceActionItem * _serviceActionItem;
}

@property (nonatomic, retain) HUControlPanelController *controlPanelController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, retain) UIColor *overrideCellColor;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;
@property (nonatomic) <HUServiceActionControlsViewControllerDelegate> *serviceActionControlsDelegate;
@property (nonatomic, retain) HFServiceActionItem *serviceActionItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)controlPanelController;
- (void)diffableDataItemManager:(id)arg1 willUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4 isInitialLoad:(bool)arg5;
- (id)initWithServiceActionItem:(id)arg1 mode:(unsigned long long)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (bool)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2;
- (bool)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2;
- (unsigned long long)mode;
- (id)overrideCellColor;
- (id)presentationDelegate;
- (bool)requiresPresentingViewControllerDismissal;
- (id)serviceActionControlsDelegate;
- (id)serviceActionItem;
- (void)setControlPanelController:(id)arg1;
- (void)setOverrideCellColor:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)setServiceActionControlsDelegate:(id)arg1;
- (void)setServiceActionItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end
