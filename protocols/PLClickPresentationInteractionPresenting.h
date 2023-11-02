
@protocol PLClickPresentationInteractionPresenting <NSObject>

@required

- (PLClickPresentationInteractionManager *)clickPresentationInteractionManager;
- (UIView *)viewForPreview;

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalDismissedFrameOfViewForPreview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalPresentedFrameOfViewForPreview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialPresentedFrameOfViewForPreview;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;

@end
