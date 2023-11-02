
@interface PSUIFamilySpecifierGenerator : NSObject <AAUISpecifierProviderDelegate, ACMonitoredAccountStoreDelegateProtocol, AIDAAccountManagerDelegate> {
    AIDAAccountManager * __accountManager;
    ACMonitoredAccountStore * __accountStore;
    NSObject<OS_dispatch_queue> * __loadingQueue;
    AIDAServiceOwnersManager * __serviceOwnersManager;
    FATopLevelSettingsSpecifierProvider * __topLevelSettingsSpecifierProvider;
    <PSUIFamilySpecifierGeneratorDelegate> * _delegate;
    PSListController * _presenter;
}

@property (nonatomic, retain) AIDAAccountManager *_accountManager;
@property (nonatomic, retain) ACMonitoredAccountStore *_accountStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (nonatomic, retain) AIDAServiceOwnersManager *_serviceOwnersManager;
@property (nonatomic, retain) FATopLevelSettingsSpecifierProvider *_topLevelSettingsSpecifierProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSUIFamilySpecifierGeneratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountManager;
- (id)_accountStore;
- (void)_handleFamilyChangeNotification:(id)arg1;
- (void)_handleFamilyMarqueeChangeNotification:(id)arg1;
- (id)_loadingQueue;
- (void)_reloadFamilyStateWithCompletion:(id /* block */)arg1;
- (id)_serviceOwnersManager;
- (id)_topLevelSettingsSpecifierProvider;
- (void)accountWasAdded:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (id)accountsForAccountManager:(id)arg1;
- (id)delegate;
- (id)initWithLoadingQueue:(id)arg1;
- (id)presenter;
- (void)reloadFamilyStateWithCompletion:(id /* block */)arg1;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)set_accountManager:(id)arg1;
- (void)set_accountStore:(id)arg1;
- (void)set_loadingQueue:(id)arg1;
- (void)set_serviceOwnersManager:(id)arg1;
- (void)set_topLevelSettingsSpecifierProvider:(id)arg1;
- (id)specifier;
- (void)specifierProvider:(id)arg1 didFinishLoadingSpecifier:(id)arg2;
- (void)specifierProvider:(id)arg1 showViewController:(id)arg2;
- (void)specifierProvider:(id)arg1 willBeginLoadingSpecifier:(id)arg2;

@end
