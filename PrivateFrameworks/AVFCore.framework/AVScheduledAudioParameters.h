
@interface AVScheduledAudioParameters : NSObject <NSCopying, NSMutableCopying> {
    AVScheduledAudioParametersInternal * _scheduledParametersInternal;
}

@property (getter=_ramps, setter=_setRamps:, nonatomic, copy) NSMutableDictionary *ramps;

- (id)_audioCurveOfClass:(Class)arg1;
- (id)_audioVolumeCurve;
- (id)_figAudioCurves;
- (id)_getRampOfClass:(Class)arg1 forTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg3;
- (bool)_isScheduledRampClass:(id)arg1;
- (id)_ramps;
- (id)_rampsOfClass:(Class)arg1;
- (void)_setRamp:(id)arg1;
- (void)_setRamps:(id)arg1;
- (id)_volumeCurveAsString;
- (id)_volumeCurveKeysForScheduledRampClassNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)getVolumeRampForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg4;
- (bool)getVolumeRampForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg4 rampMode:(long long*)arg5;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPropertyList:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyList;

@end
