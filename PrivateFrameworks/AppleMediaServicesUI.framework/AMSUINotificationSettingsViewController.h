
@interface AMSUINotificationSettingsViewController : UIViewController <AMSBagConsumer, AMSUINotificationSettingsViewModelDelegate, UITableViewDelegate> {
    <AMSBagProtocol> * _bag;
    NSMutableDictionary * _changedItems;
    AMSProcessInfo * _clientInfo;
    _UIContentUnavailableView * _errorView;
    NSString * _identifier;
    AMSUILoadingView * _loadingView;
    AMSUINotificationSettingsViewModel * _model;
    UNUserNotificationCenter * _notificationCenter;
    bool  _shouldDeepLink;
    UITableView * _tableView;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, retain) NSMutableDictionary *changedItems;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIContentUnavailableView *errorView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) AMSUILoadingView *loadingView;
@property (nonatomic, retain) AMSUINotificationSettingsViewModel *model;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (nonatomic) bool shouldDeepLink;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;

- (void).cxx_destruct;
- (void)_appWillEnterForeground:(id)arg1;
- (void)_commitChangedItemsUpdates;
- (void)_commonSetup;
- (void)_handleAllowNotificationsButton;
- (void)_handleAuthenticationError:(id)arg1;
- (bool)_isAuthenticated;
- (void)_loadData;
- (id)_promptForAuthentication;
- (void)_updateNotificationStatus;
- (id)account;
- (id)bag;
- (id)changedItems;
- (id)clientInfo;
- (void)dealloc;
- (id)errorView;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3;
- (id)initWithIdentifier:(id)arg1 bag:(id)arg2;
- (id)loadingView;
- (id)model;
- (id)notificationCenter;
- (void)setChangedItems:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setErrorView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setShouldDeepLink:(bool)arg1;
- (void)setTableView:(id)arg1;
- (bool)shouldDeepLink;
- (id)tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didReceiveValueChange:(id)arg2 forItem:(id)arg3;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
