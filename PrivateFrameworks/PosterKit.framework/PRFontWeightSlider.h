
@interface PRFontWeightSlider : UISlider {
    UIColor * _contentBackgroundColor;
    CAShapeLayer * _thumbBorderLayer;
    CAShapeLayer * _thumbClippingLayer;
    CALayer * _thumbContentLayer;
    CALayer * _thumbSoftShadowLayer;
    UIImageView * _thumbView;
    _PRFontWeightSliderTrackView * _trackView;
    <UITraitChangeRegistration> * _userInterfaceStyleTraitChangeRegistration;
}

@property (nonatomic, retain) UIColor *contentBackgroundColor;
@property (nonatomic, retain) CAShapeLayer *thumbBorderLayer;
@property (nonatomic, retain) CAShapeLayer *thumbClippingLayer;
@property (nonatomic, retain) CALayer *thumbContentLayer;
@property (nonatomic, retain) CALayer *thumbSoftShadowLayer;
@property (nonatomic, retain) UIImageView *thumbView;
@property (nonatomic, retain) <UITraitChangeRegistration> *userInterfaceStyleTraitChangeRegistration;

- (void).cxx_destruct;
- (id)_createCustomThumbView;
- (id)contentBackgroundColor;
- (id)createThumbView;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (void)setContentBackgroundColor:(id)arg1;
- (void)setThumbBorderLayer:(id)arg1;
- (void)setThumbClippingLayer:(id)arg1;
- (void)setThumbContentLayer:(id)arg1;
- (void)setThumbSoftShadowLayer:(id)arg1;
- (void)setThumbView:(id)arg1;
- (void)setUserInterfaceStyleTraitChangeRegistration:(id)arg1;
- (id)thumbBorderLayer;
- (id)thumbClippingLayer;
- (id)thumbContentLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)thumbSoftShadowLayer;
- (id)thumbView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)userInterfaceStyleTraitChangeRegistration;

@end
