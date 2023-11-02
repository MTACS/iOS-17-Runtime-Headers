
@interface EKUIAvailabilityTimelineView : UIScrollView {
    UIView * _bottomPixelBorder;
    NSMutableArray * _labels;
    double  _largestLabelWidth;
    double  _offset;
}

- (void).cxx_destruct;
- (id)init;
- (double)minWidth;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentWidth:(double)arg1;
- (void)setHorizontalScrollOffset:(double)arg1;
- (void)setLabels;

@end
