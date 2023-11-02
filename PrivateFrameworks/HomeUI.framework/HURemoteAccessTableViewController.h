
@interface HURemoteAccessTableViewController : HUItemTableViewController <HUSwitchCellDelegate> {
    HURemoteAccessItemManager * _remoteAccessItemManager;
    HFUserItem * _userItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HURemoteAccessItemManager *remoteAccessItemManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HFUserItem *userItem;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItem:(id)arg1 home:(id)arg2;
- (id)remoteAccessItemManager;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (id)user;
- (id)userItem;
- (void)viewDidLoad;

@end
