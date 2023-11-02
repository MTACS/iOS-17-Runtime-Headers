
@interface HUNetworkRouterManualReconfigurationViewController : HUItemTableViewController

@property (nonatomic, readonly) HUNetworkRouterManualReconfigurationItemManager *itemManager;

- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
