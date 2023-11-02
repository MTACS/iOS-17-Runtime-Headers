
@interface _SFNavigationBarURLButton : UIButton <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIEditMenuInteractionDelegate, UIGestureRecognizerDelegate> {
    double  _backgroundAlphaFactor;
    <_SFNavigationBarURLButtonDelegate> * _delegate;
    UIEditMenuInteraction * _editMenuInteraction;
    UIView * _effectMask;
    UIVisualEffectView * _effectView;
    UIVibrancyEffect * _highlightedVibrancyEffect;
    UIGestureRecognizer * _longPressGestureRecognizer;
    PKScribbleInteraction * _pencilScribbleInteraction;
    _SFNavigationBarTheme * _theme;
    double  _urlOutlineCornerRadius;
    UIVibrancyEffect * _vibrancyEffect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissMenu:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_hover:(id)arg1;
- (void)_scribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_scribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pasteAndGo:(id)arg1;
- (void)pasteAndSearch:(id)arg1;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHighlighted:(bool)arg1;

@end
