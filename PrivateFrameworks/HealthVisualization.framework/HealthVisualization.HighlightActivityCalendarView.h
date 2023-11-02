
@interface HealthVisualization.HighlightActivityCalendarView : NUIContainerGridView <_HKWheelchairUseCharacteristicCacheObserver> {
    void $__lazy_storage_$_displayTypeController;
    void $__lazy_storage_$_ringsRenderer;
    void $__lazy_storage_$_unitPreferenceController;
    void currentLabelMaximumContentSizeCategory;
    void currentWeekdayStringLength;
    void healthStore;
    void longWeekdayStrings;
    void shortWeekdayStrings;
}

- (void).cxx_destruct;
- (id)initWithArrangedSubviewRows:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(bool)arg2;

@end
