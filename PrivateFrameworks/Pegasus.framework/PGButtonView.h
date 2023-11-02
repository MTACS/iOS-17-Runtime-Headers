
@interface PGButtonView : PGMaterialView <UIPointerInteractionDelegate> {
    _PGButton * _actualButton;
    bool  _circular;
    UIImage * _currentCustomImage;
    NSString * _currentGlyphImageName;
    double  _currentGlyphSize;
    <PGButtonViewDelegate> * _delegate;
    double  _glyphSize;
    UIViewPropertyAnimator * _highlightAnimator;
    bool  _highlighted;
    UIImage * _image;
    UIPointerInteraction * _pointerInteraction;
    <BSInvalidatable> * _preventAutoHideOfControlsAssertion;
    NSString * _systemImageName;
}

@property (nonatomic, retain) _PGButton *actualButton;
@property (getter=isCircular, nonatomic) bool circular;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PGButtonViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) UIColor *enabledTintColor;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic) double glyphSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) UIPointerInteraction *pointerInteraction;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *systemImageName;
@property (nonatomic, copy) NSString *text;

+ (id)buttonWithDelegate:(id)arg1;
+ (id)disabledTintColor;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_handleDragEnter:(id)arg1;
- (void)_handleDragExit:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchUpOrCancel:(id)arg1;
- (bool)_shouldHitTest;
- (void)_updateForCircularAppearanceIfNeeded;
- (void)_updateGlyphConfigurationIfNeeded;
- (id)accessibilityIdentifier;
- (id)actualButton;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)enabledTintColor;
- (id)font;
- (double)glyphSize;
- (id)highlightAnimator;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)image;
- (bool)isCircular;
- (bool)isEnabled;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setActualButton:(id)arg1;
- (void)setCircular:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setGlyphSize:(double)arg1;
- (void)setHighlightAnimator:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setPointerInteraction:(id)arg1;
- (void)setSystemImageName:(id)arg1;
- (void)setText:(id)arg1;
- (void)sizeToFit;
- (id)systemImageName;
- (id)text;

@end
