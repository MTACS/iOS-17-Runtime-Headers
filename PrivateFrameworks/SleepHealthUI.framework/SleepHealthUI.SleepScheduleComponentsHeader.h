
@interface SleepHealthUI.SleepScheduleComponentsHeader : UIView {
    void $__lazy_storage_$_bedtimeDayLabel;
    void $__lazy_storage_$_bedtimeStackView;
    void $__lazy_storage_$_bedtimeTimeLabel;
    void $__lazy_storage_$_bedtimeTitleLabel;
    void $__lazy_storage_$_stackViewCenterConstraints;
    void $__lazy_storage_$_stackViewEdgeConstraints;
    void $__lazy_storage_$_timeLabelConstraints;
    void $__lazy_storage_$_wakeUpDayLabel;
    void $__lazy_storage_$_wakeUpStackView;
    void $__lazy_storage_$_wakeUpTimeLabel;
    void $__lazy_storage_$_wakeUpTitleLabel;
    void isIn24HourTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    void sizingTimeLabel;
}

- (void).cxx_destruct;
- (id)accessibilityBedtimeTimeLabel;
- (id)accessibilityWakeUpTimeLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)tintColorDidChange;

@end
