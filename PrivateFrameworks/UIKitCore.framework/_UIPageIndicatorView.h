
@interface _UIPageIndicatorView : UIView {
    bool  _active;
    UIImage * _activeImage;
    UIColor * _activeIndicatorColor;
    float  _currentProgress;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultModeSize;
    long long  _direction;
    UIViewFloatAnimatableProperty * _expandProgress;
    struct CGSize { 
        double width; 
        double height; 
    }  _expandedModeSize;
    UIImage * _image;
    _UIPageIndicatorImageView * _imageView;
    UIColor * _indicatorColor;
    long long  _mode;
    long long  _offsetDirection;
    long long  _page;
    _UIPageIndicatorProgressView * _progressView;
    bool  _supportsExpandedIndicator;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UIImage *activeImage;
@property (nonatomic, retain) UIColor *activeIndicatorColor;
@property (nonatomic) float currentProgress;
@property (nonatomic) struct CGSize { double x1; double x2; } defaultModeSize;
@property (nonatomic) long long direction;
@property (nonatomic, readonly) UIViewFloatAnimatableProperty *expandProgress;
@property (nonatomic) struct CGSize { double x1; double x2; } expandedModeSize;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) _UIPageIndicatorImageView *imageView;
@property (nonatomic, retain) UIColor *indicatorColor;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) long long offsetDirection;
@property (nonatomic) long long page;
@property (nonatomic, readonly) _UIPageIndicatorProgressView *progressView;
@property (nonatomic) bool supportsExpandedIndicator;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_adjustedDefaultModeSize;
- (struct CGSize { double x1; double x2; })_adjustedExpandedModeSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_currentImageContentInsets;
- (bool)_hasOngoingExpandTransition;
- (bool)_isDefaultSymbolImage;
- (long long)_transitionDirection;
- (void)_updateImage;
- (void)_updateIndicatorExpandProgress;
- (void)_updateProgressBar;
- (id)activeImage;
- (id)activeIndicatorColor;
- (double)currentExpandProgress;
- (float)currentProgress;
- (id)debugDescription;
- (struct CGSize { double x1; double x2; })defaultModeSize;
- (long long)direction;
- (id)expandProgress;
- (struct CGSize { double x1; double x2; })expandedModeSize;
- (id)image;
- (id)imageView;
- (id)indicatorColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isActive;
- (bool)isInvalidated;
- (void)layoutSubviews;
- (long long)mode;
- (long long)offsetDirection;
- (long long)page;
- (void)prepare;
- (id)progressView;
- (void)setActive:(bool)arg1;
- (void)setActiveImage:(id)arg1;
- (void)setActiveIndicatorColor:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (void)setDefaultModeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDirection:(long long)arg1;
- (void)setExpandedModeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setIndicatorColor:(id)arg1;
- (void)setMode:(long long)arg1 direction:(long long)arg2;
- (void)setPage:(long long)arg1;
- (void)setSupportsExpandedIndicator:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeForImage:(id)arg1 traits:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsExpandedIndicator;

@end
