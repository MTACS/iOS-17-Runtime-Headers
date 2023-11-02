
@protocol PTRenderState <NSObject>

@required

- (void)addRenderEffect:(id <PTRenderEffect>)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsicMatrix;
- (int)conversionGain;
- (float)focalLenIn35mmFilm;
- (int)hwModelID;
- (float)networkBias;
- (float)noiseScaleFactor;
- (bool)prepareForRendering;
- (bool)prepareForRendering:(bool)arg1;
- (int)quality;
- (int)rawSensorHeight;
- (int)rawSensorWidth;
- (int)readNoise_1x;
- (int)readNoise_8x;
- (unsigned long long)renderingVersion;
- (int)sensorID;
- (void)setConversionGain:(int)arg1;
- (void)setFocalLenIn35mmFilm:(float)arg1;
- (void)setHwModelID:(int)arg1;
- (void)setNetworkBias:(float)arg1;
- (void)setNoiseScaleFactor:(float)arg1;
- (void)setRawSensorHeight:(int)arg1;
- (void)setRawSensorWidth:(int)arg1;
- (void)setReadNoise_1x:(int)arg1;
- (void)setReadNoise_8x:(int)arg1;
- (void)setRenderingVersion:(unsigned long long)arg1;
- (void)setSensorID:(int)arg1;
- (void)setSourceColorBitDepth:(int)arg1;
- (void)setTotalSensorCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisCropFactor;
- (int)sourceColorBitDepth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })totalSensorCrop;
- (id)visCropFactor;

@end
