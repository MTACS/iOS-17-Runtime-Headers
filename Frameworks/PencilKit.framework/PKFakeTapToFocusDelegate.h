
@interface PKFakeTapToFocusDelegate : NSObject <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, UIGestureRecognizerDelegate> {
    NSUUID * _elementID;
    _PKFakeTapToFocusInfo * _focusInfo;
    PKFakeUITapGestureForRequirements * _gestureForRequirements;
    UITapGestureRecognizer * _tapGesture;
    UIView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_infoInProcess;
+ (bool)_shouldAttachForView:(id)arg1;
+ (id)_tapGestureForView:(id)arg1;
+ (bool)isPossibleForView:(id)arg1 focusInfo:(id)arg2;

- (void).cxx_destruct;
- (void)_focusWithFocusInfo:(id)arg1;
- (void)_scribbleInteraction:(id)arg1 didTargetElement:(id)arg2 forTouches:(id)arg3 event:(id)arg4;
- (void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (bool)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_scribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (void)_scribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_scribbleInteractionIsEnabled:(id)arg1;
- (bool)_shouldFocusBeforeObservingWithFocusInfo:(id)arg1;
- (void)_waitForFirstResponderChangeWithFocusInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithView:(id)arg1;

@end
