
@interface SleepHealthUI.SleepScheduleComponentsEditView : UIView {
    void $__lazy_storage_$_formatter;
    void captionTopConstraint;
    void clock;
    void clockCaption;
    void clockWidthConstraint;
    void componentsHeader;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  model;
    void timeInBed;
}

- (void).cxx_destruct;
- (id)accessibilityClock;
- (id)accessibilityClockCaption;
- (id)accessibilityComponentsHeader;
- (id)accessibilityTimeInBedLabel;
- (void)clockDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;

@end
