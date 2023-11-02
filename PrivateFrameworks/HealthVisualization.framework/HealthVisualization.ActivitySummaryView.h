
@interface HealthVisualization.ActivitySummaryView : UIView {
    void $__lazy_storage_$_activityRingCircleView;
    void $__lazy_storage_$_exerciseView;
    void $__lazy_storage_$_moveView;
    void $__lazy_storage_$_spacerView0;
    void $__lazy_storage_$_spacerView1;
    void $__lazy_storage_$_standView;
    void activitySummary;
    void currentLayoutMode;
    void healthStore;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
