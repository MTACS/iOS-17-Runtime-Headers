
@interface _UIEditMenuContainerView : UIView <_UIEditMenuDismissalGestureRecognizerDelegate, _UITouchFallbackViewDelegate> {
    bool  _didDismissFromGesture;
    _UIEditMenuDismissalGestureRecognizer * _dismissalGestureRecognizer;
    bool  _dismissesOnViewportResize;
    bool  _ignoresPassthroughInPresentationSource;
    bool  _lastHitTestPassedThrough;
    _UIEditMenuPresentation * _presentation;
    _UITouchFallbackView * _touchFallbackView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _UIEditMenuDismissalGestureRecognizer *dismissalGestureRecognizer;
@property (nonatomic) bool dismissesOnViewportResize;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresPassthroughInPresentationSource;
@property (nonatomic, readonly) _UIEditMenuPresentation *presentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UITouchFallbackView *touchFallbackView;

- (void).cxx_destruct;
- (void)_dismissMenuPresentationForSizeChange;
- (void)_installDismissalGesture;
- (bool)_touchesInsideShouldHideCalloutBar;
- (void)didMoveToWindow;
- (void)didRecognizeDismissalGestureRecognizer:(id)arg1;
- (id)dismissalGestureRecognizer;
- (bool)dismissalGestureRecognizer:(id)arg1 shouldInteractAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (bool)dismissesOnViewportResize;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)ignoresPassthroughInPresentationSource;
- (id)initWithPresentation:(id)arg1 enablePassthrough:(bool)arg2;
- (id)presentation;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDismissesOnViewportResize:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIgnoresPassthroughInPresentationSource:(bool)arg1;
- (id)touchFallbackView;
- (bool)touchFallbackView:(id)arg1 shouldHitTestAtLocation:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (void)willMoveToWindow:(id)arg1;

@end
