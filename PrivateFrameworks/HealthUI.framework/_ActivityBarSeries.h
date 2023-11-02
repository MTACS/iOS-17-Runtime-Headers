
@interface _ActivityBarSeries : HKBarSeries {
    <HKActivityBarSeriesDelegate> * _activityBarDelegate;
    long long  _activityDisplayTypeIdentifier;
    HKDisplayTypeController * _displayTypeController;
    double  _lastLegendUpdateTime;
    HKFillStyle * _missedGoalUnselectedFillStyle;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (nonatomic) <HKActivityBarSeriesDelegate> *activityBarDelegate;
@property (nonatomic) long long activityDisplayTypeIdentifier;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic) double lastLegendUpdateTime;
@property (nonatomic, retain) HKFillStyle *missedGoalUnselectedFillStyle;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;

- (void).cxx_destruct;
- (void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (id)activityBarDelegate;
- (long long)activityDisplayTypeIdentifier;
- (id)displayTypeController;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 seriesRenderingDelegate:(id)arg6;
- (id)initWithUnitPreferenceController:(id)arg1 activityBarDelegate:(id)arg2 displayTypeController:(id)arg3;
- (double)lastLegendUpdateTime;
- (id)missedGoalUnselectedFillStyle;
- (void)setActivityBarDelegate:(id)arg1;
- (void)setActivityDisplayTypeIdentifier:(long long)arg1;
- (void)setLastLegendUpdateTime:(double)arg1;
- (void)setMissedGoalUnselectedFillStyle:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)unitPreferenceController;
- (void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2 drawingDuringScrolling:(bool)arg3;

@end
