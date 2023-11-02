
@interface FASharedSubscriptionsViewController : ACUIViewController <AAUISpecifierProviderDelegate, FASharedSubscriptionSpecifierProviderSelectionHandler> {
    UITableViewCell * _activeCell;
    UIActivityIndicatorView * _activityIndicatorView;
    ACAccount * _appleAccount;
    NSOperationQueue * _networkingQueue;
    FASharedSubscriptionSpecifierProvider * _sharedSubscriptionSpecifierProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasActiveCell;
- (void)_performEventWithContext:(id)arg1 specifier:(id)arg2 completion:(id /* block */)arg3;
- (id)_sharedSubscriptionSpecifiers;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)arg1;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)didSelectSpecifier:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 sharedSubscriptionSpecifierProvider:(id)arg2;
- (id)preferredContentSizeCategory;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(bool)arg3;
- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
