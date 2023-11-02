
@interface PKEnhancedMerchantsShelfSectionController : NSObject <PKDynamicSectionController, PKViewControllerPreflightable> {
    UICollectionViewCellRegistration * _cellRegistration;
    <PKRewardsHubSectionControllerDelegate> * _delegate;
    PKAccountEnhancedMerchantsFetcher * _fetcher;
    NSArray * _identifiers;
    NSUUID * _merchantsUpdateToken;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureDataSource;
- (id)cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (void)dealloc;
- (void)didPressEnhancedMerchantsListButton;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithSectionIdentifier:(id)arg1 fetcher:(id)arg2 delegate:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)setCellRegistration:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;

@end
