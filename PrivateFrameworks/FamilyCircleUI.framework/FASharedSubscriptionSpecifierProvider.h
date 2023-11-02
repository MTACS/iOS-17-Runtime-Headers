
@interface FASharedSubscriptionSpecifierProvider : NSObject <AAUISpecifierProvider> {
    ACAccount * _appleAccount;
    NSDictionary * _cachedResourceDictionary;
    bool  _isLoadingSpecifiers;
    NSOperationQueue * _networkActivityQueue;
    int  _numberOfGroups;
    PSListController * _presenter;
    <FASharedSubscriptionSpecifierProviderSelectionHandler> * _selectionHandler;
    FASharedServicesResponse * _sharedSubscriptionResponse;
    unsigned long long  _specifierState;
    NSArray * _specifiers;
    PSSpecifier * _spinnerCell;
    NSHashTable * _subscribers;
    NSArray * _subscriptionSpecifiers;
    NSArray * _subscriptionsFamilyViewSpecifier;
    bool  _updateSubsriptionSpecifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <FASharedSubscriptionSpecifierProviderSelectionHandler> *selectionHandler;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, copy) NSArray *subscriptionSpecifiers;
@property (nonatomic, copy) NSArray *subscriptionsFamilyViewSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSharedSubscriptionsButtonWasTapped:(id)arg1;
- (void)_delayedLoadIfNeeded;
- (void)_handleSubscriptionListResponse:(id)arg1;
- (id)_iconURLStringForService:(id)arg1;
- (bool)_launchWithResourceDictionary:(id)arg1;
- (void)_loadSubscriptionServices;
- (void)_serviceSpecifierWasTapped:(id)arg1;
- (id)_serviceSpecifiersFromArray:(id)arg1;
- (id)_sharedSubscriptionGroupSpecifier;
- (id)_sharedSubscriptionSpecifierCell:(int)arg1;
- (id)_specifierNamed:(id)arg1;
- (id)_valueForServiceSpecifier:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (bool)handleURL:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 presenter:(id)arg2;
- (void)reloadSpecifiers;
- (void)removeSubscriber:(id)arg1;
- (id)selectionHandler;
- (void)setSelectionHandler:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setSubscriptionSpecifiers:(id)arg1;
- (void)setSubscriptionsFamilyViewSpecifier:(id)arg1;
- (id)specifiers;
- (id)subscriptionSpecifiers;
- (id)subscriptionsFamilyViewSpecifier;

@end
