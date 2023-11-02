
@interface _UIStatusBarVPNDisconnectView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable> {
    CAShapeLayer * _iconSlashMaskShapeLayer;
    _UIStatusBarImageView * _iconView;
    CAShapeLayer * _slashShapeLayer;
    UIView * _slashView;
}

@property (nonatomic, readonly) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAShapeLayer *iconSlashMaskShapeLayer;
@property (nonatomic, retain) _UIStatusBarImageView *iconView;
@property (nonatomic, readonly) long long overriddenVerticalAlignment;
@property (nonatomic, readonly) bool prefersBaselineAlignment;
@property (nonatomic, readonly) bool prefersCenterVerticalAlignment;
@property (nonatomic, retain) CAShapeLayer *slashShapeLayer;
@property (nonatomic, retain) UIView *slashView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsCrossfade;

- (void).cxx_destruct;
- (void)_setupForStyleAttributes:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)animateSlashForUpdate:(id)arg1;
- (void)applyStyleAttributes:(id)arg1;
- (id)iconSlashMaskShapeLayer;
- (id)iconView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)resetSlashForUpdate:(id)arg1;
- (void)setIconSlashMaskShapeLayer:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setSlashShapeLayer:(id)arg1;
- (void)setSlashView:(id)arg1;
- (id)slashShapeLayer;
- (id)slashView;
- (void)updateFramesForStyleAttributes:(id)arg1;
- (id)viewForLastBaselineLayout;

@end
