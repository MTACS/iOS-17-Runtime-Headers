
@interface _MKBalloonCalloutView : MKCalloutView {
    _MKMarkerAnnotationBaseImageView * _backgroundShapeGradientView;
    _MKBezierPathView * _backgroundShapeView;
    UIView * _backgroundView;
    UIVisualEffectView * _backgroundVisualEffectView;
    UIImageView * _balloonBodyImageView;
    UIColor * _balloonTintColor;
    bool  _centerAnnotationWhenOffscreen;
    UIView * _containerView;
    UIView * _contentView;
    UIImageView * _contentViewMaskView;
    double  _croppedImageScale;
    bool  _dismissed;
    UIImage * _image;
    UIColor * _imageTintColor;
    UIImageView * _imageView;
    UIView * _innerBackgroundView;
    UIColor * _innerStrokeColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicSize;
    bool  _originatesAsSmallBalloon;
    _MKMarkerAnnotationBaseImageView * _rectangularImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowSize;
    UIView * _shadowView;
    bool  _showsArrow;
    double  _smallBalloonScale;
    UIColor * _strokeColor;
    long long  _style;
    UIImageView * _tailView;
}

@property (nonatomic, copy) UIColor *balloonTintColor;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, copy) UIColor *imageTintColor;
@property (nonatomic, copy) UIColor *innerStrokeColor;
@property (nonatomic) bool originatesAsSmallBalloon;
@property (nonatomic) bool showsArrow;
@property (nonatomic) double smallBalloonScale;
@property (nonatomic, copy) UIColor *strokeColor;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centerFrame;
- (void)_commonInit;
- (void)_configureForArrowStateWithDuration:(double)arg1;
- (void)_handleTapOnCallout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_idealFrame;
- (double)_innerDiameter;
- (void)_showAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)_updateCroppedImage;
- (void)_updateStyle;
- (id)balloonTintColor;
- (bool)calloutContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contentView;
- (void)didMoveToWindow;
- (void)dismissAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)hideCalloutAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)image;
- (id)imageTintColor;
- (id)initWithAnnotationView:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)innerStrokeColor;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)originatesAsSmallBalloon;
- (void)setBalloonTintColor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageTintColor:(id)arg1;
- (void)setInnerStrokeColor:(id)arg1;
- (void)setOriginatesAsSmallBalloon:(bool)arg1;
- (void)setShowsArrow:(bool)arg1;
- (void)setShowsArrow:(bool)arg1 animated:(bool)arg2;
- (void)setSmallBalloonScale:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)showAnimated:(bool)arg1 completionBlock:(id /* block */)arg2;
- (void)showCalloutAnimated:(bool)arg1;
- (bool)showsArrow;
- (double)smallBalloonScale;
- (id)strokeColor;
- (long long)style;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (void)updateWithNewCalloutOffset;

@end
