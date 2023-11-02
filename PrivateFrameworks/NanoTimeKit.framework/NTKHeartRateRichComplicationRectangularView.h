
@interface NTKHeartRateRichComplicationRectangularView : NTKRichComplicationRectangularDailyGraphView {
    NSArray * _chartPoints;
    double  _cornerRadius;
    NSNumber * _highBPM;
    NSNumber * _lowBPM;
    NSDate * _measurementDate;
    NSDateInterval * _measurementDateDayInterval;
}

@property (nonatomic, retain) NSArray *chartPoints;
@property (nonatomic) double cornerRadius;
@property (nonatomic) NSNumber *highBPM;
@property (nonatomic) NSNumber *lowBPM;
@property (nonatomic, retain) NSDate *measurementDate;
@property (nonatomic, retain) NSDateInterval *measurementDateDayInterval;

- (void).cxx_destruct;
- (void)_loadLockedState;
- (void)_loadNoDataState;
- (void)_loadWithMetadata:(id)arg1;
- (void)_updateDailyLabel:(id)arg1 withBPM:(id)arg2;
- (double)_xValueForPointFromChartPoint:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_yValueForPointFromChartPointValue:(id)arg1 betweenHigh:(id)arg2 andLow:(id)arg3 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)chartPoints;
- (double)cornerRadius;
- (void)drawGraph:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)highBPM;
- (id)init;
- (void)loadWithMetadata:(id)arg1;
- (id)lowBPM;
- (id)measurementDate;
- (id)measurementDateDayInterval;
- (void)setChartPoints:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighBPM:(id)arg1;
- (void)setLowBPM:(id)arg1;
- (void)setMeasurementDate:(id)arg1;
- (void)setMeasurementDateDayInterval:(id)arg1;

@end
