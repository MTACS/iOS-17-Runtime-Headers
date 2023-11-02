
@interface DKIntroViewController : OBWelcomeController {
    id /* block */  _beginEraseBlock;
    id /* block */  _eraseLaterBlock;
    id /* block */  _fetchRestoreState;
    id /* block */  _hasInternetConnectivity;
    bool  _isBasebandDead;
    DKNotableUserData * _notableUserData;
    bool  _preventOpeningSafari;
}

@property (nonatomic, copy) id /* block */ beginEraseBlock;
@property (nonatomic, copy) id /* block */ eraseLaterBlock;
@property (nonatomic, copy) id /* block */ fetchRestoreState;
@property (nonatomic, copy) id /* block */ hasInternetConnectivity;
@property (nonatomic) bool isBasebandDead;
@property (nonatomic, retain) DKNotableUserData *notableUserData;
@property (nonatomic) bool preventOpeningSafari;

- (void).cxx_destruct;
- (void)_addNotableUserDataItemsView;
- (void)_continueTapped:(id)arg1;
- (id)_createNotableUserDataCardForAccounts:(id)arg1;
- (id)_createNotableUserDataCardForAppsAndData:(long long)arg1;
- (id)_createNotableUserDataCardForCellularPlans:(id)arg1;
- (id)_createNotableUserDataCardForFindMy:(bool)arg1;
- (id)_createNotableUserDataCardForWallet:(id)arg1;
- (void)_notNowTapped:(id)arg1;
- (void)_presentBasebandDeadWarning:(id /* block */)arg1;
- (void)_presentLocalDataWarning:(id /* block */)arg1;
- (void)_presentLocalPaymentCardConfirmation:(id /* block */)arg1;
- (void)_presentRestoreWarning:(id /* block */)arg1;
- (id /* block */)beginEraseBlock;
- (id /* block */)eraseLaterBlock;
- (id /* block */)fetchRestoreState;
- (id /* block */)hasInternetConnectivity;
- (id)init;
- (bool)isBasebandDead;
- (id)localPaymentCards;
- (id)notableUserData;
- (bool)preventOpeningSafari;
- (void)setBeginEraseBlock:(id /* block */)arg1;
- (void)setEraseLaterBlock:(id /* block */)arg1;
- (void)setFetchRestoreState:(id /* block */)arg1;
- (void)setHasInternetConnectivity:(id /* block */)arg1;
- (void)setIsBasebandDead:(bool)arg1;
- (void)setNotableUserData:(id)arg1;
- (void)setPreventOpeningSafari:(bool)arg1;
- (void)viewDidLoad;

@end
