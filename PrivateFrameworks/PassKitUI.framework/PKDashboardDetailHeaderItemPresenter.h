
@interface PKDashboardDetailHeaderItemPresenter : NSObject <PKDashboardItemPresenter> {
    PKContactAvatarManager * _avatarManager;
    PKContactResolver * _contactResolver;
    PKObjectDownloader * _fileDownloader;
    bool  _hasNetworkAccess;
    UIImage * _heroImage;
    UIImage * _logoBackgroundImage;
    UIImage * _logoImage;
    UIVisualEffect * _overlayEffect;
    PKPaymentService * _paymentService;
    UIColor * _shadowColor;
    PKMapsSnapshotManager * _snapshotManager;
    UICollectionViewCell * _templateCell;
}

@property (nonatomic, retain) PKContactAvatarManager *avatarManager;
@property (nonatomic, retain) PKContactResolver *contactResolver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIVisualEffect *overlayEffect;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, retain) PKMapsSnapshotManager *snapshotManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundImageFromLogoImage:(id)arg1;
- (void)_configureCategoryHeaderCell:(id)arg1 forItem:(id)arg2 isUpdate:(bool)arg3;
- (void)_configureCell:(id)arg1 withRegion:(id)arg2 isUpdate:(bool)arg3;
- (void)_configureInstallmentProductHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)_configureMerchantHeaderCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;
- (void)_configurePeerPaymentHeaderCell:(id)arg1 forItem:(id)arg2;
- (void)_configureTransactionTypeHeaderCell:(id)arg1 forItem:(id)arg2;
- (void)_downloadLogoForItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_installmentProductHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_merchantHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_peerPaymentHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_transactionGroupHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)_transactionTypeHeaderCellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateMerchantHeaderImagesOnCell:(id)arg1 item:(id)arg2;
- (id)avatarManager;
- (bool)canSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)cellForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionViewCellClasses;
- (id)contactResolver;
- (void)dealloc;
- (void)didSelectItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 navigationController:(id)arg4 canPresent:(id /* block */)arg5;
- (id)init;
- (Class)itemClass;
- (id)overlayEffect;
- (void)setAvatarManager:(id)arg1;
- (void)setContactResolver:(id)arg1;
- (void)setOverlayEffect:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setSnapshotManager:(id)arg1;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })sizeForItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)snapshotManager;
- (void)updateCell:(id)arg1 forItem:(id)arg2 inCollectionView:(id)arg3 atIndexPath:(id)arg4;

@end
