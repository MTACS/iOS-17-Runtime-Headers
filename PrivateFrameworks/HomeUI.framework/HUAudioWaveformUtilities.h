
@interface HUAudioWaveformUtilities : NSObject

+ (double)disabledWaveformWidth:(double)arg1 forProgress:(float)arg2;
+ (double)floatToScreenScale:(double)arg1;
+ (float)progressForTime:(double)arg1 duration:(double)arg2;
+ (id)waveformImageforPowerLevels:(const double*)arg1 powerLevelsCount:(unsigned long long)arg2 color:(id)arg3;

@end
