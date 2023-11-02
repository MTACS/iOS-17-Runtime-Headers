
@interface HKSleepStageCoordinate : HKSleepPeriodCoordinate {
    NSArray * _asleepCoreYValues;
    NSArray * _asleepDeepYValues;
    NSArray * _asleepRemYValues;
    NSArray * _asleepUnspecifiedYValues;
    NSArray * _awakeValues;
}

@property (nonatomic, readonly) NSArray *asleepCoreYValues;
@property (nonatomic, readonly) NSArray *asleepDeepYValues;
@property (nonatomic, readonly) NSArray *asleepRemYValues;
@property (nonatomic, readonly) NSArray *asleepUnspecifiedYValues;
@property (nonatomic, readonly) NSArray *awakeValues;

- (void).cxx_destruct;
- (id)asleepCoreYValues;
- (id)asleepDeepYValues;
- (id)asleepRemYValues;
- (id)asleepUnspecifiedYValues;
- (id)awakeValues;
- (id)copyWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(bool)arg2;
- (id)initWithXValue:(double)arg1 asleepUnspecifiedYValues:(id)arg2 asleepDeepYValues:(id)arg3 asleepCoreYValues:(id)arg4 asleepRemYValues:(id)arg5 awakeValues:(id)arg6 inBedYValues:(id)arg7 yValues:(id)arg8 highlighted:(bool)arg9 userInfo:(id)arg10;

@end
