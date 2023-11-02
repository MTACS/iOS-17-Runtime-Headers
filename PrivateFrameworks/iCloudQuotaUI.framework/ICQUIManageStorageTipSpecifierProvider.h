
@interface ICQUIManageStorageTipSpecifierProvider : ICQUITipSpecifierProvider <AAUISpecifierProvider> {
    NSArray * _specifiers;
    ICQCloudStorageSummary * _storageSummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (nonatomic) ICQCloudStorageSummary *storageSummary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchStorageSummaryAndRefreshSpecifiers;
- (void)_refreshTipsWithSummary:(id)arg1;
- (void)_removeVisibleTip;
- (id)account;
- (id)initWithAccountManager:(id)arg1 presenter:(id)arg2 summary:(id)arg3;
- (id)manageStorageSpecifiersForSummary:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setStorageSummary:(id)arg1;
- (id)specifiers;
- (id)storageSummary;

@end
