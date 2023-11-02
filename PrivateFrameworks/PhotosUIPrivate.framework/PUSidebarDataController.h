
@interface PUSidebarDataController : PXSidebarDataController {
    UIImage * _emptyAlbumPlaceholderImage;
}

@property (nonatomic, retain) UIImage *emptyAlbumPlaceholderImage;
@property (nonatomic, readonly) NSOperationQueue *workQueue;

+ (id)_actionManagerWithActionType:(id)arg1;
+ (void)_prepareSectionConfiguration:(id)arg1 assetsFilterPredicate:(id)arg2;
+ (id)_singleItemDataSourceManagerForCollection:(id)arg1 context:(id)arg2;
+ (id)fromMyMacAlbumsDataSectionManagerWithPhotoLibrary:(id)arg1 context:(id)arg2;
+ (id)myAlbumsDataSectionManagerForPhotoLibrary:(id)arg1 context:(id)arg2 hideAdd:(bool)arg3;
+ (id)otherAlbumsDataSectionManagerWithPhotoLibrary:(id)arg1 context:(id)arg2;
+ (id)sharedAlbumsDataSectionManagerWithPhotoLibrary:(id)arg1 context:(id)arg2 hideAdd:(bool)arg3;

- (void).cxx_destruct;
- (long long)_requestImageForAsset:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)appearanceDidChange;
- (id)backedPlusButtonImage;
- (id)emptyAlbumPlaceholderImage;
- (id)makeSectionManagers;
- (long long)requestImageForItem:(id)arg1 parentItem:(id)arg2 completion:(id /* block */)arg3;
- (void)setEmptyAlbumPlaceholderImage:(id)arg1;
- (id)sidebarCustomSymbolImageWithName:(id)arg1 symbolColor:(id)arg2 scale:(double)arg3;

@end
