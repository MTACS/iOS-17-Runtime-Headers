
@interface HKAudiogramChartPoint : NSObject <HKChartPoint, HKGraphSeriesBlockCoordinateInfo> {
    HKAudiogramChartData * _chartData;
    NSNumber * _xValue;
    NSNumber * _yValue;
}

@property (nonatomic, readonly) HKAudiogramChartData *chartData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *xValue;
@property (nonatomic, readonly) NSNumber *yValue;

+ (id)_chartPointFromSensitivityPoint:(id)arg1 isLeftEar:(bool)arg2;
+ (double)axisValueFromFrequency:(double)arg1;
+ (id)chartPointsFromSensitivityPoints:(id)arg1 isLeftEar:(bool)arg2;
+ (double)frequencyFromAxisValue:(double)arg1;

- (void).cxx_destruct;
- (id)allYValues;
- (id)chartData;
- (id)initWithChartData:(id)arg1;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)userInfo;
- (id)xValue;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
