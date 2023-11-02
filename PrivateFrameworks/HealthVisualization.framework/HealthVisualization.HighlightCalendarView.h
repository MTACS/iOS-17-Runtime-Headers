
@interface HealthVisualization.HighlightCalendarView : NUIContainerGridView {
    void $__lazy_storage_$_ringsRenderer;
    void longWeekdayStrings;
    void monthLabels;
    void shortWeekdayStrings;
    void weekdayLabels;
}

@property (nonatomic, readonly) NSArray *accessibilityMonthLabels;
@property (nonatomic, readonly) NSArray *accessibilityWeekdayLabels;

- (void).cxx_destruct;
- (id)accessibilityMonthLabels;
- (id)accessibilityWeekdayLabels;
- (id)initWithArrangedSubviewRows:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
