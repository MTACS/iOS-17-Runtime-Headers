
@interface ICQUIManageStorageHeaderSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <ICQUIManageStorageSpecifierProviderDelegate> * _delegate;
    NSArray * _specifiers;
    PSSpecifier * _storageSpecifier;
    ICQCloudStorageSummary * _storageSummary;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQUIManageStorageSpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic, retain) PSSpecifier *storageSpecifier;
@property (nonatomic, retain) ICQCloudStorageSummary *storageSummary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchStorageSummaryAndRefreshSpecifiers;
- (id)_valueForStorageGraphSpecifier:(id)arg1;
- (id)account;
- (id)accountManager;
- (long long)cellTypeForAction:(long long)arg1;
- (long long)cellTypeForSpecifierInfo:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithAccountManager:(id)arg1 storageSummary:(id)arg2;
- (void)launchActionFromSpecifier:(id)arg1;
- (id)makeFamilyAndPlanManagementSpecifiers;
- (id)makeThermometerSpecifiers;
- (void)refreshHeaderSpecifiersWithSummary:(id)arg1;
- (void)setAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setStorageSpecifier:(id)arg1;
- (void)setStorageSummary:(id)arg1;
- (id)specifiers;
- (id)storageSpecifier;
- (id)storageSummary;

@end
