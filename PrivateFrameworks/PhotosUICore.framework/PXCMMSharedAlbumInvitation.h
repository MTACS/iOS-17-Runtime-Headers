
@interface PXCMMSharedAlbumInvitation : NSObject <NSCopying, PXCMMInvitation, PXMediaTypeAggregating> {
    PHAssetCollection * _assetCollection;
    <PXCMMInvitationParticipant> * _owner;
    <PXDisplayAsset> * _posterAsset;
    <PXUIImageProvider> * _posterMediaProvider;
    PHFetchResult * _previewAssetsFetchResult;
    long long  _shareType;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) long long aggregateMediaType;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (nonatomic, readonly) PXPhotosViewConfiguration *assetViewConfiguration;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) <PXCMMInvitationParticipant> *owner;
@property (nonatomic, readonly) <PXDisplayAsset> *posterAsset;
@property (nonatomic, readonly) <PXUIImageProvider> *posterMediaProvider;
@property (nonatomic, readonly) PHFetchResult *previewAssetsFetchResult;
@property (nonatomic, readonly) long long shareType;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) PXMomentShareStatusPresentation *statusPresentation;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)_invitationWithAssetCollection:(id)arg1 previewAssetsFetchResult:(id)arg2;
+ (id)_participantsForAssetCollection:(id)arg1;
+ (void)deleteInvitations:(id)arg1 presentationEnvironment:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)invitationWithAssetCollection:(id)arg1;
+ (id)menuItemTitleForDeletingInvitations:(id)arg1;
+ (id)new;
+ (void)saveAllAssetsForInvitations:(id)arg1 toDestinationPhotoLibrary:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportsSavingAssetsForInvitations:(id)arg1 numberOfAssetsToSave:(unsigned long long*)arg2 assetsToSaveMediaType:(long long*)arg3;

- (void).cxx_destruct;
- (void)acceptWithCompletionHandler:(id /* block */)arg1;
- (long long)aggregateMediaType;
- (id)assetCollection;
- (id)assetCollectionActionManager;
- (id)assetViewConfiguration;
- (id)contextForActivityType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)creationDate;
- (id)description;
- (id)expiryDate;
- (id)identifier;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)arg1;
- (id)owner;
- (id)posterAsset;
- (id)posterMediaProvider;
- (id)previewAssetsFetchResult;
- (void)requestNotificationOnUploadCompletion;
- (id)sessionForActivityType:(unsigned long long)arg1;
- (long long)shareType;
- (id)shareURL;
- (id)statusPresentation;
- (id)subtitle;
- (id)title;

@end
