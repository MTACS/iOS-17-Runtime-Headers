
@interface PXLivePhotoTrimScrubberLoupeView : UIView {
    double  _aspectRatio;
    AVAsset * _asset;
    CAShapeLayer * _borderLayer;
    UIView * _container;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest * _currentImageRequest;
    bool  _forceDarkUserInterfaceStyle;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameTime;
    bool  _imageIsValid;
    UIImageView * _imageView;
    double  _innerCornerRadius;
    CAShapeLayer * _maskLayer;
    double  _needleWidth;
    double  _outerCornerRadius;
    UIView * _playerView;
    bool  _playheadIsValid;
    unsigned long long  _playheadStyle;
    double  _verticalInset;
    AVVideoComposition * _videoComposition;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } frameTime;
@property (nonatomic) double innerCornerRadius;
@property (nonatomic) double outerCornerRadius;
@property (nonatomic, retain) UIView *playerView;
@property (nonatomic, readonly) unsigned long long playheadStyle;
@property (nonatomic) double verticalInset;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
- (id)_collapsedPathForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_expandedPathForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 needsCutout:(bool)arg2;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_invalidateImage;
- (void)_invalidatePlayhead;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_loupeFrameWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_presentImage:(id)arg1;
- (void)_setPlayheadStyle:(unsigned long long)arg1 animate:(bool)arg2;
- (id)_transitionPathForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 needsCutout:(bool)arg2;
- (void)_updateImageIfNeeded;
- (void)_updatePlayheadBorderAnimate:(bool)arg1;
- (void)_updatePlayheadIfNeeded;
- (double)aspectRatio;
- (id)asset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceDarkUserInterfaceStyle:(bool)arg2;
- (double)innerCornerRadius;
- (void)layoutSubviews;
- (double)outerCornerRadius;
- (id)playerView;
- (unsigned long long)playheadStyle;
- (void)setAspectRatio:(double)arg1;
- (void)setAsset:(id)arg1 videoComposition:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInnerCornerRadius:(double)arg1;
- (void)setOuterCornerRadius:(double)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setShowLoupePlayerAnimate:(bool)arg1;
- (void)setShowLoupeThumbnailWithFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 animate:(bool)arg2;
- (void)setShowNeedleWithWidth:(double)arg1 animate:(bool)arg2;
- (void)setShowPlayerView:(bool)arg1;
- (void)setVerticalInset:(double)arg1;
- (bool)showPlayerView;
- (double)verticalInset;
- (id)videoComposition;

@end
