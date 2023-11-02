
@interface LPPlayButtonControl : UIControl <LPComponentMediaPlayable, UIGestureRecognizerDelegate> {
    UIView * _backgroundView;
    CAShapeLayer * _borderLayer;
    CAShapeLayer * _highlightLayer;
    UILongPressGestureRecognizer * _highlightRecognizer;
    UIImageView * _imageView;
    bool  _indeterminate;
    CAShapeLayer * _innerProgressLayer;
    bool  _isPlaying;
    CAShapeLayer * _outerProgressLayer;
    float  _progress;
    bool  _showingProgress;
    LPAudioPlayButtonStyle * _style;
    LPAudioPlayButtonTheme * _theme;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (getter=isIndeterminate, nonatomic, readonly) bool indeterminate;
@property (nonatomic) float progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createBackgroundView;
- (void)_createBorderView;
- (void)_createHighlightLayer;
- (void)_createImageView;
- (void)_createInnerProgressView;
- (void)_createOuterProgressView;
- (id)_createProgressIndicatorLayerWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineWidth:(double)arg2;
- (void)_didScroll;
- (void)_hideTapHighlight;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_showPlayIndicator:(bool)arg1;
- (void)_toggleToPlayState;
- (void)_traitAffectingColorAppearanceDidChange:(id)arg1;
- (void)_updateEnabledState;
- (void)_updateInnerProgressLayerStroke;
- (void)_updateOuterProgressLayerStroke;
- (void)beginIndeterminateAnimation;
- (float)buttonCornerRadius;
- (void)buttonPressed:(id)arg1;
- (struct CGSize { double x1; double x2; })buttonSize;
- (id)defaultBackgroundColor;
- (void)endIndeterminateAnimation;
- (bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideProgressAnimated:(bool)arg1;
- (id)imageView;
- (id)initWithStyle:(id)arg1 theme:(id)arg2;
- (void)installRecognizersOnView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFlipped;
- (bool)isIndeterminate;
- (void)layoutPlayButton;
- (void)layoutSubviews;
- (id)outerBorderColor;
- (id)pauseImage;
- (id)playImage;
- (id)playable;
- (float)progress;
- (void)setEnabled:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setPlayButtonState:(unsigned long long)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)setShowBorder:(bool)arg1;
- (void)setShowOuterBorder:(bool)arg1;
- (void)showPlayIndicator:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
