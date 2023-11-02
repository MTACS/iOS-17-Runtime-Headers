
@interface FLPreferencesController : NSObject <FLSpecifierTapHandlerDelegate> {
    bool  _activityIndicatorActive;
    NSArray * _groups;
    id /* block */  _itemChangeObserver;
    PSListController * _listViewController;
    NSString * _primaryAccountID;
    NSArray * _secondaryAccountIDs;
    AIDAServiceOwnersManager * _serviceOwnersManager;
    NSSet * _spyglassAllowList;
    FLPreferencesFollowUpItemListViewController * _spyglassController;
    <FLViewModel> * _topViewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ itemChangeObserver;
@property (nonatomic) PSListController *listViewController;
@property (readonly) Class superclass;

+ (bool)shouldPreflightNetworkAccessForGroup:(id)arg1 item:(id)arg2;

- (void).cxx_destruct;
- (id)_deferredLoadSpecifierWithName:(id)arg1;
- (void)_handleActionForSpecifier:(id)arg1;
- (void)_handleEmptyRefreshResult:(id)arg1;
- (void)_presentSpecifier:(id)arg1 fromEventSource:(unsigned long long)arg2;
- (void)_refreshItemsAndPresentDetailForSpecifier:(id)arg1;
- (id)_specifierForGroup:(id)arg1;
- (id)_specifierGroupString:(unsigned long long)arg1;
- (id)_specifiersForItem:(id)arg1 group:(id)arg2;
- (id)_topLevelSpecifiersForGroup:(unsigned long long)arg1;
- (void)_updateSpecifier:(id)arg1 withCommonPropertiesForGroup:(id)arg2;
- (id)_urlBasedSpecifierWithName:(id)arg1;
- (void)_zeroActionFailure:(id)arg1;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id /* block */)itemChangeObserver;
- (id)listViewController;
- (void)loadSpecifier:(id)arg1;
- (void)performPreferencesActionForGroup:(id)arg1 item:(id)arg2 action:(id)arg3 completion:(id /* block */)arg4;
- (void)preflightNetworkConnectivityForHandler:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setItemChangeObserver:(id /* block */)arg1;
- (void)setListViewController:(id)arg1;
- (id)spyglassSpecifiers;
- (void)startPresentingForHandler:(id)arg1 withRemoteController:(id)arg2;
- (void)startSpinnerForSpecifier:(id)arg1;
- (void)stopSpinnerForSpecifier:(id)arg1;
- (id)topLevelSpecifiers;
- (id)topLevelSpecifiersForGroup:(unsigned long long)arg1;

@end
