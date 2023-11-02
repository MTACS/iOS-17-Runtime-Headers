
@interface _UITextCursorDictationAnimation : NSObject <CAAnimationDelegate, _UITextCursorAnimation> {
    _UIShapeView * _cursorShapeView;
    _UITextCursorView * _cursorView;
    bool  _enabled;
    CABasicAnimation * _glowAnimation;
    UIView * _glowContainerView;
    UIDictationGlowEffect * _glowEffect;
    _UIShapeView * _glowShapeView;
    bool  _needsInitialDictationAnimation;
    struct CGPath { } * _originPath;
    CABasicAnimation * _pulseAnimation;
    bool  _pulseAnimationEnabled;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) _UIShapeView *cursorShapeView;
@property (nonatomic) _UITextCursorView *cursorView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (void)_setPulseAnimationEnabled:(bool)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)cursorShapeDidChange;
- (id)cursorShapeView;
- (id)cursorView;
- (id)initWithCursorShapeView:(id)arg1;
- (bool)isEnabled;
- (void)setCursorView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setNeedsInitialDictationAnimation;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
