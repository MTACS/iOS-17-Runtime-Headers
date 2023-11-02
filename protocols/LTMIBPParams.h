
@protocol LTMIBPParams <NSObject>

@required

- (bool)calcGlobalHistOnROI;
- (bool)computeCurvesWoFaceBoost;
- (bool)computeHDRCurves;
- (bool)digitalFlash;
- (bool)enableAntiAliasing;
- (bool)enableHighlightCompression;
- (bool)forceDisableHR;
- (bool)forceDisableLTMFaceBoost;
- (bool)forceDisableLTMFaceExposureRatio;
- (<MTLTexture> *)inChromaTex;
- (<MTLTexture> *)inLumaTex;
- (NSDictionary *)inMetaData;
- (<MTLTexture> *)inRGBAFloatTex;
- (<MTLTexture> *)inRGBImageUInt16Tex;
- (unsigned short)ispDGainThreshold;
- (int)optimizationLevel;
- (NSDictionary *)outMetaData;
- (void)reset;
- (void)setCalcGlobalHistOnROI:(bool)arg1;
- (void)setComputeCurvesWoFaceBoost:(bool)arg1;
- (void)setComputeHDRCurves:(bool)arg1;
- (void)setDigitalFlash:(bool)arg1;
- (void)setEnableAntiAliasing:(bool)arg1;
- (void)setEnableHighlightCompression:(bool)arg1;
- (void)setForceDisableHR:(bool)arg1;
- (void)setForceDisableLTMFaceBoost:(bool)arg1;
- (void)setForceDisableLTMFaceExposureRatio:(bool)arg1;
- (void)setInChromaTex:(id <MTLTexture>)arg1;
- (void)setInLumaTex:(id <MTLTexture>)arg1;
- (void)setInMetaData:(NSDictionary *)arg1;
- (void)setInRGBAFloatTex:(id <MTLTexture>)arg1;
- (void)setInRGBImageUInt16Tex:(id <MTLTexture>)arg1;
- (void)setIspDGainThreshold:(unsigned short)arg1;
- (void)setOptimizationLevel:(int)arg1;
- (void)setOutMetaData:(NSDictionary *)arg1;
- (void)setValidBufferRect:(NSDictionary *)arg1;
- (NSDictionary *)validBufferRect;

@end
