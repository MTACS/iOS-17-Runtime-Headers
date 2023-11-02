
@interface PaperKit.StickerDragPreviewContainerView : UIView <_UIDragPreviewContainer> {
    void isDropAnimation;
    void isLifted;
    void meshView;
    void shadowView;
    void shineView;
    void transformView;
}

- (void).cxx_destruct;
- (void)_animateDropAlongsideAnimator:(id)arg1 completion:(id /* block */)arg2;
- (void)_animateLiftAlongsideAnimator:(id)arg1 completion:(id /* block */)arg2;
- (void)_animateLiftCancellationAlongsideAnimator:(id)arg1 completion:(id /* block */)arg2;
- (void)_preparePreviewContainerWithPreview:(id)arg1 source:(id)arg2 initialTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
