
@interface SBCoverSheetPositionView : SBFTouchPassThroughView {
    UIView * _contentView;
    double  _progress;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)_createContentView;
- (double)_progressForTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_progressFromContenViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })_simulatedTouchLocationForProgress;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })positionContentForTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })positionContentForTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 transformMode:(long long)arg3 forPresentationValue:(bool)arg4;
- (double)progress;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setProgress:(double)arg1;

@end
