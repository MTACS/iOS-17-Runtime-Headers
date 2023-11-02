
@interface PKRewardsHubSummarySectionController : NSObject <PKDynamicSectionController, PKPaymentDataProviderDelegate, PKViewControllerPreflightable> {
    <PKRewardsHubSectionControllerDelegate> * _delegate;
    NSArray * _identifiers;
    NSArray * _items;
    PKAccountRewardsTierSummary * _lifetimeSummary;
    <PKPaymentDataProvider> * _paymentDataProvider;
    NSMutableSet * _pendingCompletionHandlers;
    PKRewardsSummaryFetcher * _rewardsFetcher;
    NSMutableDictionary * _sectionIDToItemsMap;
    NSMutableDictionary * _sectionIDToPresenterMap;
    bool  _showRewardsGraph;
    bool  _summaryFetchInProgress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _summaryFetchLock;
    bool  _transactionsNeedUpdate;
}

@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic, retain) NSArray *items;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cellPresenterIdentifierForItem:(id)arg1;
- (id)_collectionView;
- (void)_configureFooterView:(id)arg1 inSection:(id)arg2;
- (void)_configureHeaderView:(id)arg1 inSection:(id)arg2;
- (id)_createPresenterForSection:(id)arg1;
- (bool)_hasFooterForSection:(id)arg1;
- (bool)_hasHeaderForSection:(id)arg1;
- (id)_itemsForSection:(id)arg1;
- (id)_presenterForSection:(id)arg1;
- (void)_reloadData;
- (void)_reloadDataAndUpdateDelegate;
- (void)_reloadDataWithCompletion:(id /* block */)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (void)_setCornerMaskForCell:(id)arg1 indexPath:(id)arg2 section:(id)arg3;
- (void)_setItems:(id)arg1 forSection:(id)arg2;
- (id)cellRegistrationForItem:(id)arg1;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (void)dealloc;
- (id)identifiers;
- (id)initWithSectionIdentifiers:(id)arg1 rewardsFetcher:(id)arg2 paymentDataProvider:(id)arg3 showRewardsGraph:(bool)arg4 delegate:(id)arg5;
- (id)items;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setItems:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (Class)supplementaryRegistrationClassForKind:(id)arg1 sectionIdentifier:(id)arg2;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;

@end
