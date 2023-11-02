
@interface HUUserTableViewController : HUItemTableViewController <HFUserObserver, HUMediaAccountDelegate> {
    NSAttributedString * _headerMessage;
    HMHome * _home;
    NAFuture * _mediaAccountFuture;
    AMSUIUpdateMultiUserTokenTask * _multiUserTokenFixTask;
    _HUUserAvatarHeaderView * _userAvatarHeaderView;
    HFItemManager<HUUserItemManager> * _userItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSAttributedString *headerMessage;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NAFuture *mediaAccountFuture;
@property (nonatomic, retain) AMSUIUpdateMultiUserTokenTask *multiUserTokenFixTask;
@property (readonly) Class superclass;
@property (nonatomic, retain) _HUUserAvatarHeaderView *userAvatarHeaderView;
@property (nonatomic, readonly) HFUserHandle *userHandle;
@property (nonatomic, readonly) HFItemManager<HUUserItemManager> *userItemManager;

- (void).cxx_destruct;
- (id)_fetchAccountsForHome:(id)arg1 forceCloudKitFetch:(bool)arg2;
- (void)_presentMediaAccountErrorsIfNeeded:(bool)arg1;
- (void)_presentMultiUserTokenFixUIForAccount:(id)arg1;
- (void)_refreshSplitAccountsHeaderViewIfNeeded:(bool)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)dealloc;
- (id)headerMessage;
- (id)home;
- (id)initWithUserItemManager:(id)arg1 home:(id)arg2;
- (id)itemTableHeaderView;
- (id)mediaAccountFuture;
- (id)multiUserTokenFixTask;
- (void)performRemovalAction:(id)arg1;
- (void)setAMSiTunesAccount:(id)arg1 forHome:(id)arg2;
- (void)setHeaderMessage:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMediaAccountFuture:(id)arg1;
- (void)setMultiUserTokenFixTask:(id)arg1;
- (void)setUserAvatarHeaderView:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)signIniTunesAccount:(id)arg1 forHome:(id)arg2;
- (id)user;
- (void)user:(id)arg1 didUpdateNeedsiTunesMultiUserRepair:(bool)arg2;
- (id)userAvatarHeaderView;
- (id)userHandle;
- (id)userItemManager;

@end
