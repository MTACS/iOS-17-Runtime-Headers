
@interface HUBridgeListViewController : HUItemTableViewController <HUPresentationDelegate> {
    HUHomeHubHeaderView * _homehubHeaderView;
    bool  _shouldShowHomeHubWarningHeader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUHomeHubHeaderView *homehubHeaderView;
@property (nonatomic, readonly) HUBridgeListItemManager *itemManager;
@property (nonatomic) bool shouldShowHomeHubWarningHeader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_bridgeDetailsViewControllerClass;
- (id)_presentBridgeSettingsForItem:(id)arg1 animated:(bool)arg2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)homehubHeaderView;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)itemTableHeaderView;
- (id)presentBridgeSettingsForAccessory:(id)arg1 animated:(bool)arg2;
- (void)setHomehubHeaderView:(id)arg1;
- (void)setShouldShowHomeHubWarningHeader:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldShowHomeHubWarningHeader;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
