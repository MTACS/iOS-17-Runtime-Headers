
@interface PUFilmstripView : UIView <PHVideoScrubberFilmstripView, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PXLivePhotoTrimScrubberFilmStripView, UIScrollViewDelegate> {
    PUFilmstripDataSource * __dataSource;
    PUFilmstripMediaProvider * __mediaProvider;
    double  __thumbnailAspectRatio;
    PUTilingView * __tilingView;
    PUTileViewAnimator * _animator;
    AVAsset * _asset;
    UIImage * _generatedPlaceholderImage;
    bool  _generatesPlaceholderImage;
    NSArray * _indicatorInfos;
    bool  _needsUpdateDataSource;
    bool  _needsUpdateGeneratedPlaceholder;
    bool  _needsUpdateLayout;
    bool  _needsUpdateThumbnailAspectRatio;
    NSObject<OS_dispatch_queue> * _placeholderGenerationQueue;
    UIImage * _placeholderImage;
    bool  _preserveThumbnailsDuringReload;
    bool  _useContentAspectRatio;
    AVVideoComposition * _videoComposition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (setter=_setDataSource:, nonatomic, retain) PUFilmstripDataSource *_dataSource;
@property (setter=_setMediaProvider:, nonatomic, retain) PUFilmstripMediaProvider *_mediaProvider;
@property (setter=_setThumbnailAspectRatio:, nonatomic) double _thumbnailAspectRatio;
@property (nonatomic, readonly) PUTilingView *_tilingView;
@property (nonatomic, readonly) AVAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double desiredClippingOutset;
@property (nonatomic, retain) UIImage *generatedPlaceholderImage;
@property (nonatomic) bool generatesPlaceholderImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *indicatorInfos;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) bool preserveThumbnailsDuringReload;
@property (readonly) Class superclass;
@property (nonatomic) id thumbnailUpdatingDelegate;
@property (nonatomic) bool useContentAspectRatio;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (id)_dataSource;
- (id)_filmstripLayout;
- (void)_invalidateDataSource;
- (void)_invalidateGeneratedPlaceholderImage;
- (void)_invalidateLayout;
- (void)_invalidateMediaProvider;
- (void)_invalidateThumbnailAspectRatio;
- (bool)_isMediaProviderValid;
- (id)_mediaProvider;
- (void)_releaseAVObjects;
- (void)_setDataSource:(id)arg1;
- (void)_setMediaProvider:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setThumbnailAspectRatio:(double)arg1;
- (double)_thumbnailAspectRatio;
- (id)_tilingView;
- (void)_updateDataSourceIfNeeded;
- (void)_updateGeneratedPlaceholderImageIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateMediaProviderPlaceholderImage;
- (void)_updateThumbnailAspectRatioIfNeeded;
- (id)asset;
- (double)desiredClippingOutset;
- (id)generatedPlaceholderImage;
- (bool)generatesPlaceholderImage;
- (id)indicatorInfos;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)placeholderImage;
- (bool)preserveThumbnailsDuringReload;
- (void)reloadThumbnails;
- (void)setAsset:(id)arg1;
- (void)setAsset:(id)arg1 videoComposition:(id)arg2;
- (void)setGeneratedPlaceholderImage:(id)arg1;
- (void)setGeneratesPlaceholderImage:(bool)arg1;
- (void)setIndicatorInfos:(id)arg1;
- (void)setLivePhotoTrimScrubberThumbnail:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPreserveThumbnailsDuringReload:(bool)arg1;
- (void)setUseContentAspectRatio:(bool)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (bool)useContentAspectRatio;
- (id)videoComposition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
