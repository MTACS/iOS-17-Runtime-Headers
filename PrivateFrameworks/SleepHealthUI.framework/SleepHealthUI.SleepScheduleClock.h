
@interface SleepHealthUI.SleepScheduleClock : UIControl <UIGestureRecognizerDelegate> {
    void bedtimeHand;
    void configuration;
    void dial;
    void dragState;
    void gestureRecognizer;
    void grabber;
    void majorFeedbackGenerator;
    void minorFeedbackGenerator;
    void model;
    void ring;
    void track;
    void wakeUpHand;
}

- (void).cxx_destruct;
- (bool)accessibilityAlarmEnabled;
- (id)accessibilityBedtimeHand;
- (bool)accessibilityIsForSingleDayOverride;
- (double)accessibilityMaximumTimeInBed;
- (double)accessibilityMinimumTimeInBed;
- (id)accessibilityRoundedBedtimeComponents;
- (id)accessibilityRoundedWakeUpComponents;
- (void)accessibilitySetBedtimeAngle:(double)arg1 minimumTimeInBed:(double)arg2 maximumTimeInBed:(double)arg3;
- (void)accessibilitySetModel:(id)arg1 wakeUpComponents:(id)arg2 timeInBedGoal:(double)arg3 alarmEnabled:(bool)arg4;
- (void)accessibilitySetModel:(id)arg1 wakeUpComponents:(id)arg2 timeInBedGoal:(double)arg3 alarmEnabled:(bool)arg4 isForSingleDayOverride:(bool)arg5;
- (void)accessibilitySetWakeupAngle:(double)arg1 minimumTimeInBed:(double)arg2 maximumTimeInBed:(double)arg3;
- (double)accessibilityTimeInBed;
- (double)accessibilityTimeInBedGoal;
- (id)accessibilityWakeUpHand;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureRecognizerDidEnd:(id)arg1;
- (void)gestureRecognizerDidMove:(id)arg1;
- (void)gestureRecognizerDidStart:(id)arg1;
- (void)gestureReconizerDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;

@end
