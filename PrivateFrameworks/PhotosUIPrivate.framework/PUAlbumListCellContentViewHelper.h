
@interface PUAlbumListCellContentViewHelper : NSObject <PXChangeObserver> {
    struct CGSize { 
        double width; 
        double height; 
    }  _albumCellSize;
    PXAssetBadgeManager * _badgeManager;
    PXCollectionTileLayoutTemplate * _collectionTileLayoutTemplate;
    PUAlbumListCellContentViewHelperConfiguration * _configuration;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    UIImage * _emptyAlbumPlaceholderImage;
    UIImage * _emptyPeopleAlbumPlaceholderImage;
    UIImage * _emptySharedAlbumPlaceholderImage;
    PXFeatureSpec * _featureSpec;
    PXFeatureSpecManager * _featureSpecManager;
    PUFontManager * _fontManager;
    PXImageRequestOptions * _imageRequestOptions;
    PXUIMediaProvider * _mediaProvider;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _previewInsets;
    PXExtendedTraitCollection * _traitCollection;
}

@property (nonatomic) struct CGSize { double x1; double x2; } albumCellSize;
@property (nonatomic, retain) PXAssetBadgeManager *badgeManager;
@property (nonatomic, retain) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate;
@property (nonatomic, readonly) PUAlbumListCellContentViewHelperConfiguration *configuration;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *emptyAlbumPlaceholderImage;
@property (nonatomic, retain) UIImage *emptyPeopleAlbumPlaceholderImage;
@property (nonatomic, retain) UIImage *emptySharedAlbumPlaceholderImage;
@property (nonatomic, retain) PXFeatureSpec *featureSpec;
@property (nonatomic, retain) PXFeatureSpecManager *featureSpecManager;
@property (nonatomic, retain) PUFontManager *fontManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXImageRequestOptions *imageRequestOptions;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } previewInsets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;

- (void).cxx_destruct;
- (unsigned long long)_editCapabilitiesForAlbum:(id)arg1;
- (void)_getDisplayableAssets:(id*)arg1 indexes:(id*)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(bool)arg5;
- (id)_getDisplayableAssetsForFolder:(id)arg1 maximumCount:(long long)arg2 useCache:(bool)arg3 correspondingCollections:(out id*)arg4;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2;
- (void)_invalidateAlbumCellSize;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (void)_recalculateAlbumCellSize;
- (void)_updateAlbumListCellContentViewForPeopleAlbum:(id)arg1 sharedLibraryStatusProvider:(id)arg2;
- (void)_updateAlbumListCellContentViewForPlacesAlbum:(id)arg1;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id*)arg2;
- (id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id*)arg3;
- (struct CGSize { double x1; double x2; })albumCellSize;
- (id)badgeManager;
- (id)collectionTileLayoutTemplate;
- (id)configuration;
- (void)configureAlbumListCellContentView:(id)arg1 forCollection:(id)arg2 title:(id)arg3 animated:(bool)arg4 enabled:(bool)arg5 editing:(bool)arg6;
- (id)dataSourceManager;
- (id)emptyAlbumPlaceholderImage;
- (id)emptyPeopleAlbumPlaceholderImage;
- (id)emptySharedAlbumPlaceholderImage;
- (long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)arg1 inCollection:(id)arg2 albumListCellContentView:(id)arg3;
- (id)featureSpec;
- (id)featureSpecManager;
- (id)fontManager;
- (id)imageRequestOptions;
- (id)initWithConfiguration:(id)arg1 dataSourceManager:(id)arg2 mediaProvider:(id)arg3 extendedTraitCollection:(id)arg4;
- (id)mediaProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })previewInsets;
- (void)reconfigureImageInAlbumListCellContentView:(id)arg1 withImage:(id)arg2 isPlaceholder:(bool)arg3;
- (void)setAlbumCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBadgeManager:(id)arg1;
- (void)setCollectionTileLayoutTemplate:(id)arg1;
- (void)setEmptyAlbumPlaceholderImage:(id)arg1;
- (void)setEmptyPeopleAlbumPlaceholderImage:(id)arg1;
- (void)setEmptySharedAlbumPlaceholderImage:(id)arg1;
- (void)setFeatureSpec:(id)arg1;
- (void)setFeatureSpecManager:(id)arg1;
- (void)setFontManager:(id)arg1;
- (void)setImageRequestOptions:(id)arg1;
- (id)subtitleForCollection:(id)arg1;
- (id)traitCollection;

@end
