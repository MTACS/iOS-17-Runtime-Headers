
@interface SBAppSwitcherScrollView : BSUIScrollView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousContentOffset;
    double  _previousScrollTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rawContentOffsetVelocity;
}

- (struct CGPoint { double x1; double x2; })contentOffsetVelocity;
- (struct CGPoint { double x1; double x2; })contentOffsetVelocityConsideringNextContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
