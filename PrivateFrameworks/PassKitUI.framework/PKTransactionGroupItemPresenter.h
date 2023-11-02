
@interface PKTransactionGroupItemPresenter : NSObject <PKDashboardItemPresenter> {
    UIImage * _adjustmentsImage;
    UIImage * _appleCardImage;
    PKContactAvatarManager * _avatarManager;
    UIImage * _cashbackImage;
    PKContactResolver * _contactResolver;
    UIImage * _emptyImage;
    NSDateFormatter * _formatterMonth;
    NSDateFormatter * _formatterYear;
    struct CGSize { 
        double width; 
        double height; 
    }  _groupSize;
    PKPaymentTransactionIconGenerator * _iconGenerator;
    NSCache * _iconsPerMerchantCategory;
    UIImage * _interestImage;
    bool  _needsSizing;
    <PKPaymentDataProvider> * _paymentDataProvider;
    UIImage * _refundsImage;
    PKPaymentTransactionCollectionViewCell * _sampleCell;
    PKMapsSnapshotManager * _snapshotManager;
    UIFont * _transactionCellPrimaryLabelFont;
    UIFont * _transactionCellSecondaryLabelFont;
    UIFont * _transactionCellValueLabelFont;
    UIImage * _transactionListImage;
    bool  _useAccessibilityLayout;
}

@property (nonatomic, retain) PKContactAvatarManager *avatarManager;
@property (nonatomic, retain) PKContactResolver *contactResolver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PKPaymentDataProvider> *paymentDataProvider;
@property (nonatomic, retain) PKMapsSnapshotManager *snapshotManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyTokenFiltersFromItem:(id)arg1 toFetcher:(id)arg2;
- (void)_configureCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 forIndexPath:(id)arg4 forSizing:(bool)arg5;
- (id)_contactKeysToFetch;
- (struct CGSize { double x1; double x2; })_imageSize;
- (void)_updateAvatarOnTransactionCell:(id)arg1 withGroup:(id)arg2 contact:(id)arg3;
- (void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (void)_viewControllerForItem:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)adjustmentsImage;
- (id)appleCardImage;
- (id)avatarManager;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cashbackImage;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (id)contactResolver;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (id)init;
- (id)interestImage;
- (Class)itemClass;
- (id)paymentDataProvider;
- (id)refundsImage;
- (void)setAvatarManager:(id)arg1;
- (void)setContactResolver:(id)arg1;
- (void)setPaymentDataProvider:(id)arg1;
- (void)setSnapshotManager:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)snapshotManager;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (id)transactionListImage;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end
