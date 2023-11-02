
@interface _HKTimeScopeControlBar : HKTimeScopeControl {
    UISegmentedControl * _segments;
}

- (void).cxx_destruct;
- (void)_rebuildSegments;
- (void)_segmentValueChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 timeScopes:(id)arg2;
- (void)layoutSubviews;
- (double)minimumWidth;
- (long long)selectedTimeScope;
- (void)setSelectedTimeScope:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
