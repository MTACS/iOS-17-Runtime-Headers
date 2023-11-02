
@protocol ARImageSensorData <ARSensorData>

@required

- (float)ISO;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (double)exposureDuration;
- (float)exposureTargetOffset;
- (struct CGSize { double x1; double x2; })imageResolution;
- (unsigned long long)lensType;
- (id)radialDistortion;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setExposureDuration:(double)arg1;
- (void)setExposureTargetOffset:(float)arg1;
- (void)setISO:(float)arg1;
- (void)setImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setLensType:(unsigned long long)arg1;
- (void)setRadialDistortion;
- (void)setSignalToNoiseRatio:(float)arg1;
- (void)setTangentialDistortion;
- (void)setTemperature:(float)arg1;
- (float)signalToNoiseRatio;
- (id)tangentialDistortion;
- (float)temperature;

@end
