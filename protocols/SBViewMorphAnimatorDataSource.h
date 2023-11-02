
@protocol SBViewMorphAnimatorDataSource <NSObject>

@required

- (double)sourceBlackCurtainCornerRadiusForAnimator:(SBViewMorphAnimator *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentContainerFrameForAnimator:(SBViewMorphAnimator *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceContentFrameForAnimator:(SBViewMorphAnimator *)arg1;
- (double)sourceCornerRadiusForAnimator:(SBViewMorphAnimator *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceSubviewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inScreenSpaceForAnimator:(SBViewMorphAnimator *)arg2;
- (double)targetFinalCornerRadiusForAnimator:(SBViewMorphAnimator *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFinalFrameForAnimator:(SBViewMorphAnimator *)arg1;

@end
