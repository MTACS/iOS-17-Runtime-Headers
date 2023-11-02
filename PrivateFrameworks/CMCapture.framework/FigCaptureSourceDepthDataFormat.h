
@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;

- (bool)RGBIRStereoFusionSupported;
- (id)copyWithNewPixelFormat:(unsigned int)arg1;
- (struct { int x1; int x2; })depthEngineOutputDimensions;
- (float)fieldOfView;
- (bool)gainMapSupported;
- (id)highResStillImageDimensions;
- (bool)isStillImageOnlyDepthData;
- (unsigned int)mediaType;

@end
