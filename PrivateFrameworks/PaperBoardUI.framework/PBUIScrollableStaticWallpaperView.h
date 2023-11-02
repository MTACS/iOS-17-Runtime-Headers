
@interface PBUIScrollableStaticWallpaperView : PBUIStaticWallpaperView <UIScrollViewDelegate> {
    bool  _automaticallyEnablesParallax;
    UIImageView * _imageView;
    double  _minimumZoomScale;
    double  _minimumZoomScaleForParallax;
    PBUIWallpaperParallaxSettings * _parallaxSettings;
    UIScrollView * _scrollView;
    BSAtomicFlag * _throttleCanUpdateFlag;
    NSObject<OS_dispatch_source> * _throttleTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) bool automaticallyEnablesParallax;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_canCacheImages;
+ (bool)_canDownscaleSampleImage;
+ (bool)_shouldScaleForParallax;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_boundedContentOffsetForOverhang;
- (void)_cancelThrottle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cropRect;
- (struct CGSize { double x1; double x2; })_imageSize;
- (struct CGPoint { double x1; double x2; })_maximumContentOffsetForOverhang;
- (struct CGPoint { double x1; double x2; })_minimumContentOffsetForOverhang;
- (id)_newImageView;
- (double)_parallaxFactorWithZoomScale:(double)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_resetColorBoxes;
- (id)_scrollView;
- (void)_scrollViewDidUpdate;
- (double)_scrollViewParallaxFactor;
- (void)_setupContentViewWithOptions:(unsigned long long)arg1;
- (void)_setupScrollView;
- (double)_throttleDuration;
- (void)_updateParallaxForScroll;
- (void)_updateScrollViewZoomScales;
- (id)_wallpaperImageForAnalysis;
- (bool)automaticallyEnablesParallax;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (double)cropZoomScale;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6;
- (void)layoutSubviews;
- (double)parallaxFactor;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)setAutomaticallyEnablesParallax:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)setParallaxEnabled:(bool)arg1;
- (bool)supportsCropping;
- (id)viewForZoomingInScrollView:(id)arg1;

@end
