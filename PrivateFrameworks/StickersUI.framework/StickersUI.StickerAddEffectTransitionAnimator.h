
@interface StickersUI.StickerAddEffectTransitionAnimator : _TtCs12_SwiftObject {
    void delegate;
    void duration;
    void isAnimating;
    void needsTransition;
    void needsTransitionToCollectionView;
    void originView;
    void originViewFrameInWindow;
    void stickerAspectRatio;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stickerIdentifier;
    void transitionCellView;
    void transitionPreviewView;
    void transitionWindow;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameIncludingStrokeForView:(id)arg1;
- (double)transitionScaleForView:(id)arg1;

@end
