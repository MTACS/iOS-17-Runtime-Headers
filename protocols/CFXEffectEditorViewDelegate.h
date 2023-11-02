
@protocol CFXEffectEditorViewDelegate <NSObject>

@required

- (void)effectEditorView:(CFXEffectEditorView *)arg1 didBeginEditingTextForEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didEditTextForEffect:(CFXEffect *)arg2 newText:(NSString *)arg3;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didEndEditingTextForEffect:(CFXEffect *)arg2 wasCancelled:(bool)arg3;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didRemoveEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didTransformEffect:(CFXEffect *)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (CFXEffect *)effectEditorView:(CFXEffectEditorView *)arg1 effectAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectEditorView:(CFXEffectEditorView *)arg1 frameForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectEditorView:(CFXEffectEditorView *)arg1 hitAreaBoundingFrameForEffect:(CFXEffect *)arg2 adjustForMinimumSize:(bool)arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 isEffectAtPoint:(struct CGPoint { double x1; double x2; })arg2 effect:(CFXEffect *)arg3;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 isFaceTrackingDataAvailableForEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 isFaceTrackingEffect:(CFXEffect *)arg2;
- (JFXOverlayEffectFrame *)effectEditorView:(CFXEffectEditorView *)arg1 overlayEffectFrameForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGPoint { double x1; double x2; })effectEditorView:(CFXEffectEditorView *)arg1 removeButtonPositionForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldEditTextForEffect:(CFXEffect *)arg2;
- (struct CGPoint { double x1; double x2; })effectEditorView:(CFXEffectEditorView *)arg1 spacingBetweenCenterPointOfEffect:(CFXEffect *)arg2 point:(struct CGPoint { double x1; double x2; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (JFXEffectTextEditingProperties *)effectEditorView:(CFXEffectEditorView *)arg1 textEditingPropertiesForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (NSString *)effectEditorView:(CFXEffectEditorView *)arg1 textForEffect:(CFXEffect *)arg2;

@optional

- (void)effectEditorView:(CFXEffectEditorView *)arg1 applyAnimationTransformsToEffect:(CFXEffect *)arg2 transforms:(JFXOverlayEffectTransforms *)arg3;
- (JFXOverlayEffectFrame *)effectEditorView:(CFXEffectEditorView *)arg1 beginEditingAnimationFromFrameForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (JFXOverlayEffectFrame *)effectEditorView:(CFXEffectEditorView *)arg1 beginEditingAnimationToFrameForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (JFXFaceTrackedEffectTransform *)effectEditorView:(CFXEffectEditorView *)arg1 calculateAnimatedFaceTrackingTransformWithCurrentFaceTrackingDataFromTrackingType:(long long)arg2 interpolatedWithFaceTrackingTransform:(JFXFaceTrackedEffectTransform *)arg3 toTrackingType:(long long)arg4 atAnimationProgress:(float)arg5;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didBeginEditingEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didCompleteBeginEditingAnimationForEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(void *)arg1 didCompleteEndEditingAnimationForEffect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CFXEffectEditorView *, CFXEffect *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didEndEditingByTappingOutSideEffectAtScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didEndEditingEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didMoveEffect:(CFXEffect *)arg2 withTouchPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)effectEditorView:(void *)arg1 didStartBeginEditingAnimationForEffect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CFXEffectEditorView *, CFXEffect *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didStartEndEditingAnimationForEffect:(CFXEffect *)arg2;
- (double)effectEditorView:(CFXEffectEditorView *)arg1 durationForBeginEditingAnimationForEffect:(CFXEffect *)arg2;
- (double)effectEditorView:(CFXEffectEditorView *)arg1 durationForEndEditingAnimationForEffect:(CFXEffect *)arg2;
- (JFXOverlayEffectFrame *)effectEditorView:(CFXEffectEditorView *)arg1 endEditingAnimationFromFrameForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (JFXOverlayEffectFrame *)effectEditorView:(CFXEffectEditorView *)arg1 endEditingAnimationToFrameForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (unsigned long long)effectEditorView:(CFXEffectEditorView *)arg1 maximumTextLengthForEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 presentCustomTextEditingUI:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldDisableEditingAnimationForEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldMoveEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldRemoveEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldRotateEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldScaleEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 willBeginAnimationAfterEditingEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 willBeginAnimationBeforeEditingEffect:(CFXEffect *)arg2;
- (void)effectEditorViewDidBeginEditing:(CFXEffectEditorView *)arg1;
- (void)effectEditorViewDidEndEditing:(CFXEffectEditorView *)arg1;
- (void)effectEditorViewDidEndPreviewingEditingEffect:(CFXEffectEditorView *)arg1;
- (bool)effectEditorViewShouldPreviewEditEffect:(CFXEffectEditorView *)arg1;
- (bool)effectEditorViewShouldShowFaceReticle:(CFXEffectEditorView *)arg1;
- (void)effectEditorViewWillBeginPreviewingEditEffect:(CFXEffectEditorView *)arg1;

@end
