
@interface SBIconImageCrossfadeView : SBFTouchPassThroughView {
    UIView * _backgroundView;
    double  _containerScaleX;
    double  _containerScaleY;
    UIView * _containerView;
    UIView * _crossfadeContainerView;
    unsigned long long  _crossfadeStyle;
    UIView * _crossfadeView;
    <SBCrossfadingIconImageSource> * _iconImageSource;
    UIView * _iconImageView;
    bool  _masksCorners;
    double  _morphFraction;
    bool  _performsTrueCrossfade;
    struct CGPoint { 
        double x; 
        double y; 
    }  _stretchAnchorPoint;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIView *crossfadeContainerView;
@property (nonatomic) unsigned long long crossfadeStyle;
@property (nonatomic, readonly) UIView *crossfadeView;
@property (nonatomic, readonly) <SBCrossfadingIconImageSource> *iconImageSource;
@property (nonatomic, readonly) UIView *iconImageView;
@property (nonatomic) bool masksCorners;
@property (nonatomic, readonly) double morphFraction;
@property (nonatomic) bool performsTrueCrossfade;
@property (nonatomic) struct CGPoint { double x1; double x2; } stretchAnchorPoint;

+ (Class)_containerViewClass;

- (void).cxx_destruct;
- (void)_applyCornerRadius:(double)arg1;
- (void)_applyCrossfadeScaleX:(double)arg1 scaleY:(double)arg2;
- (void)_setCornerRadiusEnabled:(bool)arg1;
- (void)_updateCornerMask;
- (id)backgroundView;
- (void)cleanup;
- (id)containerView;
- (id)crossfadeContainerView;
- (unsigned long long)crossfadeStyle;
- (id)crossfadeView;
- (id)iconImageSource;
- (id)iconImageView;
- (id)initWithSource:(id)arg1 crossfadeView:(id)arg2;
- (void)layoutSubviews;
- (bool)masksCorners;
- (double)morphFraction;
- (bool)performsTrueCrossfade;
- (void)prepareGeometry;
- (void)setAppSnapshotCornerRadius:(double)arg1;
- (void)setCrossfadeFraction:(double)arg1;
- (void)setCrossfadeStyle:(unsigned long long)arg1;
- (void)setCrossfadeViewFadeFraction:(double)arg1;
- (void)setMasksCorners:(bool)arg1;
- (void)setMorphFraction:(double)arg1;
- (void)setPerformsTrueCrossfade:(bool)arg1;
- (void)setSourceFadeFraction:(double)arg1;
- (void)setStretchAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })stretchAnchorPoint;

@end
