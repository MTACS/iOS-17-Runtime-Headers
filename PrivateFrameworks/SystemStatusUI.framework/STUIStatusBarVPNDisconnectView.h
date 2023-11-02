
@interface STUIStatusBarVPNDisconnectView : UIView <CAAnimationDelegate, STUIStatusBarDisplayable> {
    CAShapeLayer * _slashShapeLayer;
    UIView * _slashView;
    CAShapeLayer * _vpnSlashMaskShapeLayer;
    STUIStatusBarStringView * _vpnView;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic, retain) CAShapeLayer *slashShapeLayer;
@property (nonatomic, retain) UIView *slashView;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAShapeLayer *vpnSlashMaskShapeLayer;
@property (nonatomic, retain) STUIStatusBarStringView *vpnView;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)_setupForStyleAttributes:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)animateSlashForUpdate:(id)arg1;
- (void)applyStyleAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)prefersBaselineAlignment;
- (void)resetSlashForUpdate:(id)arg1;
- (void)setSlashShapeLayer:(id)arg1;
- (void)setSlashView:(id)arg1;
- (void)setVpnSlashMaskShapeLayer:(id)arg1;
- (void)setVpnView:(id)arg1;
- (id)slashShapeLayer;
- (id)slashView;
- (id)viewForLastBaselineLayout;
- (id)vpnSlashMaskShapeLayer;
- (id)vpnView;

@end
