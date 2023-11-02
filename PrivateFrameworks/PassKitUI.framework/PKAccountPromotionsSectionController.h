
@interface PKAccountPromotionsSectionController : NSObject <PKAccountServiceObserver, PKDynamicSectionController, PKViewControllerPreflightable> {
    PKAccount * _account;
    PKAccountService * _accountService;
    UICollectionViewCellRegistration * _cellRegistration;
    <PKRewardsHubSectionControllerDelegate> * _delegate;
    NSArray * _identifiers;
    NSArray * _items;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _itemsLock;
    NSArray * _orderings;
    PKAccountPromotionsPresenter * _presenter;
    PKAccountPromotionBehavior * _promotionBehavior;
    NSMutableSet * _promotionsViewedSinceViewLoad;
    PKRemoteImagePreparer * _remoteImagePreparer;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearViewedPromotions;
- (void)_configureDataSource;
- (id)_promotionsWithDefaultOrdering;
- (id)_promotionsWithOrderingContext:(unsigned long long)arg1;
- (void)_reloadDataWithCompletion:(id /* block */)arg1;
- (bool)_updateImpressionCountForItem:(id)arg1 shouldCountAsImpression:(bool)arg2;
- (void)_updateImpressionCountsForAllItems:(id)arg1 shouldCountAsImpression:(bool)arg2;
- (id)cellRegistration;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (void)dealloc;
- (void)didUpdateAccountPromotions:(id)arg1 accountIdentifier:(id)arg2;
- (id)identifiers;
- (id)initWithSectionIdentifier:(id)arg1 account:(id)arg2 accountService:(id)arg3 delegate:(id)arg4;
- (id)itemsCopy;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)promotionForProgramIdentifier:(id)arg1;
- (void)setCellRegistration:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setItems:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;
- (void)willDisplayItem:(id)arg1;

@end
