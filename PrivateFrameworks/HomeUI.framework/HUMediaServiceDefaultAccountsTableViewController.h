
@interface HUMediaServiceDefaultAccountsTableViewController : HUItemTableViewController <HUMediaServiceDefaultAccountsItemModuleControllerDelegate> {
    HUMediaServiceDefaultAccountsItemManager * _mediaServiceDefaultAccountsItemManager;
    HUMediaServiceDefaultAccountsItemModuleController * _mediaServiceDefaultAccountsItemModuleController;
    HFUserItem * _userItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HUMediaServiceDefaultAccountsItemManager *mediaServiceDefaultAccountsItemManager;
@property (nonatomic, retain) HUMediaServiceDefaultAccountsItemModuleController *mediaServiceDefaultAccountsItemModuleController;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HFUserItem *userItem;

- (void).cxx_destruct;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItem:(id)arg1 home:(id)arg2;
- (id)itemModuleControllers;
- (id)mediaServiceDefaultAccountsItemManager;
- (id)mediaServiceDefaultAccountsItemModuleController;
- (void)mediaServiceDefaultAccountsItemModuleController:(id)arg1 didUpdateDefaultAccount:(id)arg2;
- (void)setMediaServiceDefaultAccountsItemModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)userItem;

@end
