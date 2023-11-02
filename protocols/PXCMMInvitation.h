
@protocol PXCMMInvitation <NSObject, PXMediaTypeAggregating>

@required

+ (void)deleteInvitations:(void *)arg1 presentationEnvironment:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: <PXFastEnumeration> *, <PXPresentationEnvironment> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
+ (NSString *)menuItemTitleForDeletingInvitations:(id <PXFastEnumeration>)arg1;
+ (void)saveAllAssetsForInvitations:(void *)arg1 toDestinationPhotoLibrary:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: <PXFastEnumeration> *, PHPhotoLibrary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
+ (bool)supportsSavingAssetsForInvitations:(id <PXFastEnumeration>)arg1 numberOfAssetsToSave:(unsigned long long*)arg2 assetsToSaveMediaType:(long long*)arg3;

- (void)acceptWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (<PXDisplayAssetCollection> *)assetCollection;
- (PXAssetCollectionActionManager *)assetCollectionActionManager;
- (PXPhotosViewConfiguration *)assetViewConfiguration;
- (PXCMMContext *)contextForActivityType:(unsigned long long)arg1;
- (unsigned long long)count;
- (NSDate *)creationDate;
- (NSDate *)expiryDate;
- (NSString *)identifier;
- (<PXCMMInvitationParticipant> *)owner;
- (<PXDisplayAsset> *)posterAsset;
- (<PXUIImageProvider> *)posterMediaProvider;
- (void)requestNotificationOnUploadCompletion;
- (PXCMMSession *)sessionForActivityType:(unsigned long long)arg1;
- (long long)shareType;
- (NSURL *)shareURL;
- (PXMomentShareStatusPresentation *)statusPresentation;
- (NSString *)subtitle;
- (NSString *)title;

@end
