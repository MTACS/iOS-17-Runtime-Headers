
@interface AVScheduledFloatValueRamp : AVScheduledParameterRamp {
    float  _endValue;
    float  _startValue;
}

@property (readonly) float endFloatValue;
@property (readonly) float startFloatValue;

+ (float)boundsAdjustedFloatValue:(float)arg1;
+ (float)defaultFloatValue;
+ (id)defaultValue;
+ (id)scheduledFloatValueRampWithStartValue:(float)arg1 endValue:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;

- (float)_interpolatedValueAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_makeRampWithTruncatedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 endValue:(float)arg2;
- (long long)_parameterRampMode;
- (float)endFloatValue;
- (id)endValue;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithStartValue:(float)arg1 endValue:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (id)propertyList;
- (id)scheduledParameterRampInterpolatedToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)startFloatValue;
- (id)startValue;

@end
