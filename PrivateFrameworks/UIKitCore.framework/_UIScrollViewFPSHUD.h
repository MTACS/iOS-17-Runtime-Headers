
@interface _UIScrollViewFPSHUD : UIView {
    _UIScrollViewFPSHUDGraphView * _mismatchesGraph;
    UILabel * _mismatchesLabel;
    _UIScrollViewFPSHUDGraphView * _preferredGraph;
    UILabel * _preferredLabel;
    unsigned int  _previousFramePreferred;
    _UIScrollViewFPSHUDGraphView * _reportedGraph;
    UILabel * _reportedLabel;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
