
@interface HUMatterConnectedEcosystemDetailViewController : HUItemTableViewController <HUPresentationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUMatterConnectedEcosystemDetailItemManager *itemManager;
@property (readonly) Class superclass;

- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)initWithConnectedEcosystem:(id)arg1 connectedEcosystemItemProvider:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
