
@interface PXMomentShareStatus : PXObservable <PXMutableMomentShareStatus, PXPhotoLibraryUIChangeObserver> {
    <PXDisplayAssetFetchResult> * _allAssetsFetchResult;
    <PXDisplayAssetFetchResult> * _copiedAssetsFetchResult;
    <PXDisplayAssetFetchResult> * _copyingAssetsFetchResult;
    <PXCMMInvitation> * _invitation;
    <PXDisplayMomentShare> * _momentShare;
    PXCPLUIStatusProvider * _statusProvider;
}

@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *allAssetsFetchResult;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *copiedAssetsFetchResult;
@property (nonatomic, readonly) <PXDisplayAssetFetchResult> *copyingAssetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXCMMInvitation> *invitation;
@property (nonatomic, readonly) <PXDisplayMomentShare> *momentShare;
@property (nonatomic, readonly) PXCPLUIStatusProvider *statusProvider;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (id)_createStatusProvider;
- (id)allAssetsFetchResult;
- (id)copiedAssetsFetchResult;
- (id)copyingAssetsFetchResult;
- (id)description;
- (id)init;
- (id)initWithMomentShare:(id)arg1;
- (id)invitation;
- (id)momentShare;
- (void)performChanges:(id /* block */)arg1;
- (void)setAllAssetsFetchResult:(id)arg1;
- (void)setCopiedAssetsFetchResult:(id)arg1;
- (void)setCopyingAssetsFetchResult:(id)arg1;
- (void)setMomentShare:(id)arg1;
- (id)statusProvider;

@end
