
@interface HUUserCamerasAccessLevelViewController : HUItemTableViewController {
    HUUserCamerasAccessLevelItemManager * _camerasAccessLevelItemManager;
    NSIndexPath * _selectedIndexPath;
    HFUserItem * _userItem;
}

@property (nonatomic, readonly, copy) HUUserCamerasAccessLevelItemManager *camerasAccessLevelItemManager;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (nonatomic, readonly, copy) HFUserItem *userItem;

- (void).cxx_destruct;
- (id)camerasAccessLevelItemManager;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithUserItem:(id)arg1 home:(id)arg2;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (id)userItem;
- (void)viewDidLoad;

@end
