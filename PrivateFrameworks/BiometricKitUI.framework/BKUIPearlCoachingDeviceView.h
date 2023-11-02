
@interface BKUIPearlCoachingDeviceView : UIView {
    BKUIRotationArrowAnimationLayer * _animationLayer;
    bool  _animationRunning;
    UIImage * _deviceImage;
    UIImageView * _deviceView;
    NSLayoutConstraint * _heightConstraint;
    bool  _inSheet;
    bool  _isDisplayZoomEnabled;
    long long  _orientation;
    <UITraitChangeRegistration> * _traitChangeRegistration;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, retain) BKUIRotationArrowAnimationLayer *animationLayer;
@property (nonatomic) bool animationRunning;
@property (nonatomic, retain) UIImage *deviceImage;
@property (nonatomic, retain) UIImageView *deviceView;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) bool inSheet;
@property (nonatomic) bool isDisplayZoomEnabled;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, retain) <UITraitChangeRegistration> *traitChangeRegistration;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (id)_colorForStroke;
- (id)animationLayer;
- (bool)animationRunning;
- (id)deviceImage;
- (id)deviceView;
- (id)heightConstraint;
- (bool)inSheet;
- (id)initWithSheetLayout:(bool)arg1;
- (bool)isDisplayZoomEnabled;
- (void)layoutSubviews;
- (long long)orientation;
- (void)resetDevice;
- (void)rotateDeviceToAngle:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setAnimationLayer:(id)arg1;
- (void)setAnimationRunning:(bool)arg1;
- (void)setDeviceHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setDeviceImage:(id)arg1;
- (void)setDeviceView:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setInSheet:(bool)arg1;
- (void)setIsDisplayZoomEnabled:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setTraitChangeRegistration:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (id)traitChangeRegistration;
- (id)widthConstraint;

@end
