
@interface ICQUIiCloudPlusSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    NSArray * _specifiers;
    ICQCloudStorageSummary * _storageSummary;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildiCloudPlusFeatureSpecifiersFrom:(id)arg1;
- (id)_buildiCloudPlusGroupTitleSpecifierFrom:(id)arg1;
- (id)_buildiCloudPlusSpecifiers;
- (id)account;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end
