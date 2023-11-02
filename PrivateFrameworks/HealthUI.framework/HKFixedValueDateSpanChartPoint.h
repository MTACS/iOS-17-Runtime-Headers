
@interface HKFixedValueDateSpanChartPoint : NSObject <HKChartPoint> {
    HKQuantity * _averageValue;
    id /* block */  _fixedValueScalingBlock;
    NSString * _localizableTrendDescription;
    HKUnit * _preferredUnit;
    long long  _styleIdentifier;
    NSDate * _xEnd;
    NSDate * _xStart;
}

@property (nonatomic, readonly) HKQuantity *averageValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ fixedValueScalingBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizableTrendDescription;
@property (nonatomic, retain) HKUnit *preferredUnit;
@property (nonatomic, readonly) long long styleIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *xEnd;
@property (nonatomic, readonly) NSDate *xStart;

- (void).cxx_destruct;
- (id)_buildSinglePointData;
- (id)allYValues;
- (id)averageValue;
- (id /* block */)fixedValueScalingBlock;
- (id)initWithTrendSpan:(id)arg1 styleIdentifier:(long long)arg2 localizableTrendDescription:(id)arg3 fixedValueScalingBlock:(id /* block */)arg4;
- (id)localizableTrendDescription;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)preferredUnit;
- (void)setPreferredUnit:(id)arg1;
- (long long)styleIdentifier;
- (id)userInfo;
- (id)xEnd;
- (id)xStart;
- (id)xValueAsGenericType;
- (id)yValue;
- (id)yValueForKey:(id)arg1;

@end
