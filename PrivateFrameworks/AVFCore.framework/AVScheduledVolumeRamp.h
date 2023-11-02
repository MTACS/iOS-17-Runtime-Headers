
@interface AVScheduledVolumeRamp : AVScheduledFloatValueRamp {
    long long  _rampMode;
}

@property (readonly) float endVolume;
@property (readonly) long long rampMode;
@property (readonly) float startVolume;

+ (id)_defaultAdditionalFigRepresentationObjects;
+ (id)volumeRampWithStartVolume:(float)arg1 endVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 rampMode:(long long)arg4;

- (id)_additionalFigRepresentationObjects;
- (id)_makeRampWithTruncatedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 endValue:(float)arg2;
- (long long)_parameterRampMode;
- (float)endVolume;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithStartVolume:(float)arg1 endVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 rampMode:(long long)arg4;
- (id)propertyList;
- (long long)rampMode;
- (float)startVolume;

@end
