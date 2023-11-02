
@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    NSArray * _specifiers;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountManager;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (bool)isAccountInGrayMode;
- (bool)locationServicesDisabledByRestrictions;
- (void)locationSharingSpecifierWasTapped:(id)arg1;
- (void)setAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (bool)shouldEnableLocationSharingSpecifier;
- (bool)shouldShowLocationSharingSpecifier;
- (id)specifiers;

@end
