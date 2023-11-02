
@interface PKMerchantTokensViewController : UICollectionViewController <PKMerchantTokenDetailViewControllerDelegate> {
    UICollectionViewDiffableDataSource * _dataSource;
    <PKMerchantTokensViewControllerDelegate> * _delegate;
    NSMutableDictionary * _idsToMerchantTokens;
    bool  _isFetchingMerchantTokens;
    bool  _merchantIconsEnabled;
    NSMutableArray * _merchantTokens;
    PKSecureElementPass * _pass;
    PKRetrieveMerchantTokensResponse * _previousMerchantTokensResponse;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKMerchantTokensViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_collectionViewLayout;

- (void).cxx_destruct;
- (void)_deselectSelectedItemAnimated:(bool)arg1;
- (void)_fetchNextPageOfMerchantTokens;
- (bool)_hasMoreUnfetchedMerchantTokens;
- (id)_initialSnapshot;
- (bool)_isLoadingRow:(id)arg1;
- (bool)_isMerchantRow:(id)arg1;
- (void)_setUpCollectionView;
- (void)_setUpSelf;
- (void)_setUpViews;
- (bool)_shouldShowLoadingRow;
- (void)_trackButtonTapForMerchantToken:(id)arg1;
- (id)_updateIdentifiersWithMerchantTokens:(id)arg1;
- (id)_updatedSnapshotRemovingMerchantToken:(id)arg1;
- (id)_updatedSnapshotWithMerchantTokens:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)delegate;
- (id)initWithPass:(id)arg1 merchantTokensResponse:(id)arg2;
- (void)merchantTokenDetailViewController:(id)arg1 didDeleteMerchantToken:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
