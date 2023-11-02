
@interface SBAppSwitcherServicePageContentView : UIView <SBAppSwitcherPageContentView> {
    bool  _active;
    long long  _orientation;
    bool  _visible;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) bool contentRequiresGroupOpacity;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientation;
@property (readonly) Class superclass;
@property (getter=isVisible, nonatomic) bool visible;

- (bool)contentRequiresGroupOpacity;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isActive;
- (bool)isVisible;
- (unsigned long long)maskedCorners;
- (long long)orientation;
- (void)setActive:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setVisible:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
