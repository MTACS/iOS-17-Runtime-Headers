
@interface ClockPoster.WorldView : UIView {
    void alarmComplicationLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  alarmTime;
    void currentLocationClockLabel;
    void dashboardView;
    void mapView;
    void shouldHideAlarmComplication;
    void shouldHideClockComplication;
    void viewModel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
