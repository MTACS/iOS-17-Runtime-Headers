
@interface HUAppleMusicAccountModuleController : HUItemModuleController {
    HUButtonCell * _activeAuthCell;
    <HUAppleMusicAccountModuleControllerDelegate> * _delegate;
    NSMapTable * _itemToCellMap;
    HUButtonCell * _loginButton;
    NAFuture * _loginFuture;
    HUButtonCell * _logoutButton;
    NAFuture * _logoutFuture;
}

@property (nonatomic) HUButtonCell *activeAuthCell;
@property (nonatomic) <HUAppleMusicAccountModuleControllerDelegate> *delegate;
@property (nonatomic, retain) NSMapTable *itemToCellMap;
@property (nonatomic) HUButtonCell *loginButton;
@property (nonatomic, retain) NAFuture *loginFuture;
@property (nonatomic) HUButtonCell *logoutButton;
@property (nonatomic, retain) NAFuture *logoutFuture;
@property (nonatomic, readonly) HUAppleMusicAccountModule *module;

- (void).cxx_destruct;
- (id)_authCells;
- (id)_authenticationContextForAccessory:(id)arg1 account:(id)arg2;
- (bool)_canExecuteAccountAction;
- (id)_companionLoginWithAccount:(id)arg1 cell:(id)arg2;
- (void)_disableCells;
- (void)_enableCells;
- (id)_proxyLoginWithAccount:(id)arg1 cell:(id)arg2;
- (void)_reloadForAuthEvent;
- (void)_setupButtonCell:(id)arg1 enabled:(bool)arg2;
- (void)_setupCompanionAuthenticationForAccount:(id)arg1 cell:(id)arg2;
- (void)_setupProxyAuthenticationForAccount:(id)arg1 cell:(id)arg2;
- (void)_updateModuleState:(unsigned long long)arg1 notifyDelegate:(bool)arg2;
- (id)activeAuthCell;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)clearLogoutFuture;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)itemToCellMap;
- (id)kickOffManualLogin;
- (id)loginButton;
- (id)loginFuture;
- (void)logout;
- (id)logoutButton;
- (id)logoutFuture;
- (id)module;
- (void)setActiveAuthCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItemToCellMap:(id)arg1;
- (void)setLoginButton:(id)arg1;
- (void)setLoginFuture:(id)arg1;
- (void)setLogoutButton:(id)arg1;
- (void)setLogoutFuture:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
