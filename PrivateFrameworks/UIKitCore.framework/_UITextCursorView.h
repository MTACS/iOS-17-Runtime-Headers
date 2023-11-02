
@interface _UITextCursorView : UIView <CAAnimationDelegate, UITextCursorView, _UIAssertionControllerSubject, _UITextSelectionWidgetAnimating> {
    _UIAssertionController * _assertionController;
    _UITextCursorBlinkAnimation * _blinkAnimation;
    bool  _blinking;
    _UIShapeView * _cursorShapeView;
    _UITextCursorDictationAnimation * _dictationAnimation;
    bool  _floatingEffectEnabled;
    bool  _ghostEffectEnabled;
    bool  _glowEffectEnabled;
    bool  _hiddenForLoupeAnimation;
    double  _shapeScale;
    long long  _style;
    _UITextCursorView * _trackedFloatingCursorView;
}

@property (setter=_setShapeScale:, nonatomic) double _shapeScale;
@property (getter=isBlinking, nonatomic) bool blinking;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) bool crossfadeOnDismissal;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingEffectEnabled, nonatomic) bool floatingEffectEnabled;
@property (getter=isGhostEffectEnabled, nonatomic) bool ghostEffectEnabled;
@property (getter=isGlowEffectEnabled, nonatomic) bool glowEffectEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hiddenForLoupeAnimation;
@property (nonatomic, readonly) struct { id x1; double x2; double x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; } originShadow;
@property (nonatomic, readonly) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; id x4; } originShape;
@property (nonatomic, readonly) UIView *originView;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createFloatingCursorView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cursorBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forStyle:(long long)arg2;
- (struct CGPath { }*)_cursorPathForShapeStyle:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cursorShapeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forStyle:(long long)arg2;
- (id)_dictationAnimation;
- (id)_fillColorForEffects;
- (void)_setNeedsInitialDictationAnimation;
- (void)_setShapeScale:(double)arg1;
- (struct { id x1; double x2; double x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })_shadowSpecForEffects;
- (double)_shapeScale;
- (bool)_trackingFloatingCursorView;
- (void)assertionActivationStateChangedToState:(bool)arg1 forType:(unsigned long long)arg2;
- (bool)assertionActivationStateForType:(unsigned long long)arg1;
- (bool)crossfadeOnDismissal;
- (bool)hiddenForLoupeAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBlinking;
- (bool)isFloatingEffectEnabled;
- (bool)isGhostEffectEnabled;
- (bool)isGlowEffectEnabled;
- (void)layoutSubviews;
- (id)obtainBlinkAnimationSuppressionAssertionForReason:(id)arg1;
- (struct { id x1; double x2; double x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; })originShadow;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; double x3; id x4; })originShape;
- (id)originView;
- (void)resetBlinkAnimation;
- (void)setBlinking:(bool)arg1;
- (void)setFloatingEffectEnabled:(bool)arg1;
- (void)setGhostEffectEnabled:(bool)arg1;
- (void)setGlowEffectEnabled:(bool)arg1;
- (void)setHiddenForLoupeAnimation:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)tintColorDidChange;

@end
