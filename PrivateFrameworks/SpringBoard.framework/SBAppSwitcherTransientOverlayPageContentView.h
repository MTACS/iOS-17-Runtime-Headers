
@interface SBAppSwitcherTransientOverlayPageContentView : UIView <SBAppSwitcherPageContentView> {
    bool  _active;
    SBAppLayout * _appLayout;
    UIView * _contentView;
    BSUIOrientationTransformWrapperView * _contentWrapperView;
    <SBAppSwitcherTransientOverlayPageContentViewDelegate> * _delegate;
    long long  _orientation;
    bool  _visible;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly, copy) SBAppLayout *appLayout;
@property (nonatomic) long long contentOrientation;
@property (nonatomic, readonly) bool contentRequiresGroupOpacity;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBAppSwitcherTransientOverlayPageContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientation;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (id)appLayout;
- (long long)contentOrientation;
- (bool)contentRequiresGroupOpacity;
- (id)contentView;
- (double)cornerRadius;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 appLayout:(id)arg2;
- (void)invalidate;
- (bool)isActive;
- (bool)isVisible;
- (void)layoutSubviews;
- (unsigned long long)maskedCorners;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setContentOrientation:(long long)arg1;
- (void)setContentView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setVisible:(bool)arg1;

@end
