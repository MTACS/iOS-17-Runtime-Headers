
@interface _SFDownloadsIconView : UIView {
    UIView * _arrowContainerView;
    UIImageView * _arrowImageView;
    UIView * _circleContainerView;
    UIImageView * _circleImageView;
    double  _iconScale;
    bool  _pulsing;
    bool  _suppressesPixelAlignment;
}

@property (nonatomic, retain) UIImage *arrowImage;
@property (nonatomic, retain) UIImage *circleImage;
@property (nonatomic) double iconScale;
@property (nonatomic) bool suppressesPixelAlignment;

- (void).cxx_destruct;
- (void)_finishedPulsing;
- (id)_makeSpringAnimationWithDelay:(double)arg1 offset:(double)arg2;
- (void)_setPulsing:(bool)arg1;
- (void)_setUp;
- (void)_updateSuppressesPixelAlignment;
- (id)arrowImage;
- (id)circleImage;
- (double)iconScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)pulse;
- (void)setArrowImage:(id)arg1;
- (void)setCircleImage:(id)arg1;
- (void)setIconScale:(double)arg1;
- (void)setSuppressesPixelAlignment:(bool)arg1;
- (bool)suppressesPixelAlignment;

@end
