
@interface HealthVisualization.HighlightCalendarDayView : UIView {
    void activityRingsView;
    void dayLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    void ringsRenderer;
    void todayIndicatorLayer;
}

@property (nonatomic, readonly) long long axCircleState;
@property (nonatomic, readonly) NSDate *axDate;
@property (nonatomic, readonly) long long axProbability;
@property (nonatomic, readonly) NSString *axProjectionKind;

- (void).cxx_destruct;
- (long long)axCircleState;
- (id)axDate;
- (long long)axProbability;
- (id)axProjectionKind;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
