
@interface PXRoundProgressView : UIView {
    CAShapeLayer * __circleLayer;
    UIView * __contentView;
    double  __contentsScale;
    CAShapeLayer * __foregroundCircleLayer;
    CALayer * __irisGlyphLayer;
    PXProgressArcLayer * __progressArcLayer;
    CAShapeLayer * __sliceLayer;
    double  _increaseRate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pieCenter;
    double  _pieRadius;
    NSDate * _prevUpdateTime;
    float  _progress;
    NSTimer * _progressTimer;
    double  _realProgress;
    long long  _style;
    double  _uiProgress;
}

@property (setter=_setCircleLayer:, nonatomic, retain) CAShapeLayer *_circleLayer;
@property (setter=_setContentView:, nonatomic, retain) UIView *_contentView;
@property (setter=_setContentsScale:, nonatomic) double _contentsScale;
@property (setter=_setForegroundCircleLayer:, nonatomic, retain) CAShapeLayer *_foregroundCircleLayer;
@property (setter=_setIrisGlyphLayer:, nonatomic, retain) CALayer *_irisGlyphLayer;
@property (setter=_setProgressArcLayer:, nonatomic, retain) PXProgressArcLayer *_progressArcLayer;
@property (setter=_setSliceLayer:, nonatomic, retain) CAShapeLayer *_sliceLayer;
@property (nonatomic) float progress;
@property (nonatomic) long long style;

+ (long long)_sizeClassForSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })sizeForSizeClass:(long long)arg1;
+ (double)toRadian:(double)arg1;

- (void).cxx_destruct;
- (id)_circleLayer;
- (id)_contentView;
- (double)_contentsScale;
- (id)_foregroundCircleLayer;
- (id)_irisGlyphLayer;
- (id)_progressArcLayer;
- (void)_recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)_resetProgress;
- (void)_setCircleLayer:(id)arg1;
- (void)_setContentView:(id)arg1;
- (void)_setContentsScale:(double)arg1;
- (void)_setForegroundCircleLayer:(id)arg1;
- (void)_setIrisGlyphLayer:(id)arg1;
- (void)_setPieRadius:(double)arg1;
- (void)_setProgressArcLayer:(id)arg1;
- (void)_setSliceLayer:(id)arg1;
- (id)_sliceLayer;
- (void)_updateSublayersContentsScale;
- (void)_updateSubviews;
- (void)_updateUIProgress;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)increaseUIProgress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (float)progress;
- (void)removeFromSuperview;
- (void)setProgress:(float)arg1;
- (void)setStyle:(long long)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (long long)style;

@end
