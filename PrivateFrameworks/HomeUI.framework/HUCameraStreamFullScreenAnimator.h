
@interface HUCameraStreamFullScreenAnimator : NSObject {
    HUGridCameraCell * _sourceCameraCell;
}

@property (nonatomic, readonly) HUGridCameraCell *sourceCameraCell;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustPresentedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forTransitionContext:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_toViewFinalFrame:(id)arg1;
- (id)initWithSourceCameraCell:(id)arg1;
- (id)sourceCameraCell;
- (double)transitionDuration:(id)arg1;

@end
