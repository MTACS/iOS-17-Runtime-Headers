
@interface PKDashboardPaymentTransactionItemPresenter : NSObject <PKDashboardItemPresenter> {
    UIImage * _appleCardImage;
    <CNAvatarViewDelegate> * _avatarViewDelegate;
    UIImage * _cashbackImage;
    PKContactResolver * _contactResolver;
    unsigned long long  _context;
    PKPaymentDefaultDataProvider * _dataProvider;
    <PKPaymentTransactionDetailViewControllerDeleteOverrider> * _deleteOverrider;
    UIImage * _emptyImage;
    PKPaymentTransactionIconGenerator * _iconGenerator;
    PKPaymentTransactionCollectionViewCell * _sampleCell;
    UIFont * _transactionCellPrimaryLabelFont;
    UIFont * _transactionCellPrimaryLabelPeerPaymentFont;
    UIFont * _transactionCellSecondaryLabelFont;
    UIFont * _transactionCellSecondaryLabelPeerPaymentFont;
    UIFont * _transactionCellValueLabelFont;
    UIFont * _transactionCellValueLabelPeerPaymentFont;
    PKPaymentTransactionDetailsFactory * _transactionDetailsFactory;
    bool  _useAccessibilityLayout;
}

@property (nonatomic, retain) PKContactResolver *contactResolver;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PKPaymentTransactionDetailViewControllerDeleteOverrider> *deleteOverrider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4;
- (id)_contactKeysToFetch;
- (struct CGSize { double x1; double x2; })_imageSize;
- (bool)_shouldShowIconForTransactionSource:(id)arg1 transaction:(id)arg2 context:(unsigned long long)arg3;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (id)appleCardImage;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cashbackImage;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (id)contactResolver;
- (id)deleteOverrider;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (bool)hideSeparatorForItem:(id)arg1 inCollectionView:(id)arg2;
- (id)initWithContext:(unsigned long long)arg1 detailViewStyle:(long long)arg2 avatarViewDelegate:(id)arg3;
- (Class)itemClass;
- (void)prefetchForItem:(id)arg1 inCollectionView:(id)arg2;
- (void)setContactResolver:(id)arg1;
- (void)setDeleteOverrider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)viewControllerForTransaction:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 physicalCards:(id)arg6 forcePreventHistory:(bool)arg7 completion:(id /* block */)arg8;

@end
