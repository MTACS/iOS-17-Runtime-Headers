
@interface PKTransactionGroupThumbnailPresenter : NSObject <PKDashboardItemPresenter> {
    PKContactAvatarManager * _avatarManager;
    PKContactResolver * _contactResolver;
    PKPaymentTransactionIconGenerator * _iconGenerator;
    NSCache * _iconsPerMerchantCategory;
    UIImage * _mapsPlaceholderImage;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKThumbnailCollectionViewCell * _sampleCell;
    PKMapsSnapshotManager * _snapshotManager;
}

@property (nonatomic, retain) PKContactAvatarManager *avatarManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PKPaymentDataProvider> *paymentDataProvider;
@property (nonatomic, retain) PKMapsSnapshotManager *snapshotManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (void)_updateAvatarOnThumbnailCell:(id)arg1 contact:(id)arg2;
- (void)_updateTitleOnThumbnailCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3;
- (id)avatarManager;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (id)init;
- (Class)itemClass;
- (id)paymentDataProvider;
- (void)setAvatarManager:(id)arg1;
- (void)setPaymentDataProvider:(id)arg1;
- (void)setSnapshotManager:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)snapshotManager;
- (double)thumbnailWidth;
- (void)traitCollectionDidChangeFromTrait:(id)arg1 toTrait:(id)arg2 inCollectionView:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end
