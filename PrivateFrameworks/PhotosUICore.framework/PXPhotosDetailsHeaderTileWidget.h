
@interface PXPhotosDetailsHeaderTileWidget : NSObject <PXChangeObserver, PXDiagnosticsEnvironment, PXPhotosDataSourceChangeObserver, PXPhotosDetailsHeaderTileLayoutDelegate, PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXUIPlayButtonTileDelegate, PXUIWidget, UIGestureRecognizerDelegate> {
    PHAssetCollection * __assetCollection;
    bool  __basicContentLoaded;
    struct CGSize { 
        double width; 
        double height; 
    }  __contentSize;
    PHAssetCollection * __curatedAssetCollection;
    PXPhotosDetailsHeaderSpec * __headerSpec;
    PHFetchResult * __keyAssetsFetchResult;
    PXPhotosDetailsLoadCoordinationToken * __loadCoordinationToken;
    PXPhotosDataSource * __photosDataSource;
    PXUIPlayButtonTile * __playButtonTile;
    PXTitleSubtitleUILabelTile * __titleTile;
    bool  _canLoadContentData;
    PXPhotosDetailsContext * _context;
    bool  _hasLoadedContentData;
    NSObject<OS_dispatch_queue> * _internalWorkQueue;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyAssetCropRect;
    PXPhotoKitUIMediaProvider * _mediaProvider;
    PXMoviePresenter * _moviePresenter;
    struct { 
        bool keyAssets; 
        bool assetCollection; 
        bool curatedAssetCollection; 
    }  _needsUpdateFlags;
    PXUITapGestureRecognizer * _pressGestureRecognizer;
    PXPhotosDetailsHeaderPreviewTile * _previewTile;
    PXImageRequester * _primaryAssetImageRequester;
    PXWidgetSpec * _spec;
    PXPhotosDetailsHeaderSpecManager * _specManager;
    PXUITapGestureRecognizer * _tapGestureRecognizer;
    PXBasicUIViewTileAnimator * _tileAnimator;
    PXReusableObjectPool * _tilePool;
    NSMutableSet * _tilesInUse;
    PXTilingController * _tilingController;
    bool  _userInteractionEnabled;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setAssetCollection:, nonatomic, retain) PHAssetCollection *_assetCollection;
@property (getter=_isBasicContentLoaded, setter=_setBasicContentLoaded:, nonatomic) bool _basicContentLoaded;
@property (setter=_setContentSize:, nonatomic) struct CGSize { double x1; double x2; } _contentSize;
@property (setter=_setCuratedAssetCollection:, nonatomic, retain) PHAssetCollection *_curatedAssetCollection;
@property (setter=_setHeaderSpec:, nonatomic, retain) PXPhotosDetailsHeaderSpec *_headerSpec;
@property (setter=_setKeyAssetsFetchResult:, nonatomic, retain) PHFetchResult *_keyAssetsFetchResult;
@property (setter=_setLoadCoordinationToken:, nonatomic, retain) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken;
@property (setter=_setPhotosDataSource:, nonatomic, retain) PXPhotosDataSource *_photosDataSource;
@property (setter=_setPlayButtonTile:, nonatomic, retain) PXUIPlayButtonTile *_playButtonTile;
@property (setter=_setTitleTile:, nonatomic, retain) PXTitleSubtitleUILabelTile *_titleTile;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager;
@property (nonatomic) bool canLoadContentData;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, readonly) bool cursorInteractionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double extraSpaceNeededAtContentBottom;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (setter=_setHasLoadedContentData:, nonatomic) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInEditMode;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) struct CGSize { double x1; double x2; } maxVisibleSizeInEditMode;
@property (nonatomic, retain) PXMoviePresenter *moviePresenter;
@property (nonatomic, retain) PXOneUpPresentation *oneUpPresentation;
@property (nonatomic, readonly) <PXDisplayAsset> *presentedKeyAsset;
@property (nonatomic, retain) PXPhotosDetailsHeaderPreviewTile *previewTile;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic, readonly) bool wantsFocus;
@property (nonatomic, readonly) bool wantsNoSpaceAfterContentBottom;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (nonatomic) <PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

+ (bool)canShowMovieHeaderForDataSource:(id)arg1;
+ (double)preferredHeaderContentHeightForWidth:(double)arg1 screen:(id)arg2;

- (void).cxx_destruct;
- (id)_assetCollection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectInCoordinateSpace:(id)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (id)_contentRegionOfInterestForTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (struct CGSize { double x1; double x2; })_contentSize;
- (id)_curatedAssetCollection;
- (void)_filterOutVideosFromAssetCollection:(id)arg1 filteredAssetCollection:(id*)arg2 assets:(id*)arg3;
- (void)_handleTapGesture:(id)arg1;
- (id)_headerSpec;
- (void)_headerSpecDidChange;
- (void)_invalidateAssetCollection;
- (void)_invalidateCuratedAssetCollection;
- (void)_invalidateKeyAssets;
- (bool)_isBasicContentLoaded;
- (bool)_isPointWithinCurrentLayoutBounds:(struct CGPoint { double x1; double x2; })arg1;
- (id)_keyAssetsFetchResult;
- (void)_loadBasicContent;
- (id)_loadCoordinationToken;
- (bool)_needsUpdate;
- (id)_photosDataSource;
- (id)_playButtonLocalizedTitle;
- (struct CGSize { double x1; double x2; })_playButtonSize;
- (id)_playButtonTile;
- (id)_scrollViewController;
- (void)_setAssetCollection:(id)arg1;
- (void)_setBasicContentLoaded:(bool)arg1;
- (void)_setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCuratedAssetCollection:(id)arg1;
- (void)_setHasLoadedContentData:(bool)arg1;
- (void)_setHeaderSpec:(id)arg1;
- (void)_setKeyAssetsFetchResult:(id)arg1;
- (void)_setLoadCoordinationToken:(id)arg1;
- (void)_setPhotosDataSource:(id)arg1;
- (void)_setPlayButtonTile:(id)arg1;
- (void)_setTitleTile:(id)arg1;
- (bool)_showPlaceholder;
- (bool)_startMovie;
- (id)_subtitle;
- (void*)_tileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)_title;
- (id)_titleFontName;
- (id)_titleTile;
- (void)_updateAssetCollectionIfNeeded;
- (void)_updateBasicContent;
- (void)_updateCuratedAssetCollectionIfNeeded;
- (void)_updateKeyAssetCropRect;
- (void)_updateKeyAssetsIfNeeded;
- (void)_updateLayoutStyle;
- (void)_updatePreview;
- (void)_updateTitleTile;
- (bool)canLoadContentData;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 forCoordinateSpace:(id)arg2;
- (long long)contentLayoutStyle;
- (id)contentTilingController;
- (id)context;
- (id)createHeaderSnapshotViewForMemoryCreationAnimation;
- (id)extendedTraitCollection;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (id)init;
- (bool)isUserInteractionEnabled;
- (id)keyAsset;
- (void)loadContentData;
- (id)localizedTitle;
- (id)moviePresenter;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })photosDetailsHeaderTileLayout:(id)arg1 contentsRectForAspectRatio:(double)arg2;
- (id)photosDetailsHeaderTileLayoutFontName:(id)arg1;
- (struct CGSize { double x1; double x2; })photosDetailsHeaderTileLayoutPlayButtonSize:(id)arg1;
- (void)playButtonTileWasTapped:(id)arg1;
- (void)playMovieWithCompletionHandler:(id /* block */)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (id)presentedKeyAsset;
- (id)previewTile;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)regionOfInterestForContext:(id)arg1;
- (void)setCanLoadContentData:(bool)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setMoviePresenter:(id)arg1;
- (void)setPreviewTile:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)spec;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)viewToBeFocused;
- (id)widgetDelegate;

@end
