
@interface CVAVideoPipelineLibrary : NSObject

+ (id)colorCubePortraitGenericRequestForPortraitVideoPipeline:(id)arg1 sourceColorPixelBuffer:(struct __CVBuffer { }*)arg2 cubeData:(id)arg3 error:(id*)arg4;
+ (id)colorCubePortraitRequestForPortraitVideoPipeline:(id)arg1 withWithSourceColorPixelBuffer:(struct __CVBuffer { }*)arg2 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg3 cubeData:(id)arg4;
+ (id)colorCubeRequest:(id)arg1 isMono:(bool)arg2 error:(id*)arg3;
+ (id)colorCubeRequestWithBackgroundCube:(id)arg1 foregroundCube:(id)arg2 error:(id*)arg3;
+ (id)contourLightRequestWithFace:(id)arg1 error:(id*)arg2;
+ (id)contourLightRequestWithFace:(id)arg1 relightStyleStrength:(float)arg2 error:(id*)arg3;
+ (id)disparityPostprocessingVideoPipelineWithProperties:(id)arg1;
+ (id)disparityPostprocessingVideoPipelineWithProperties:(id)arg1 error:(id*)arg2;
+ (id)mattingVideoPipelineWithProperties:(id)arg1;
+ (id)mattingVideoPipelineWithProperties:(id)arg1 error:(id*)arg2;
+ (id)opaqueBackgroundRequestWithMattingRequest:(id)arg1 error:(id*)arg2;
+ (id)portraitRequestWithBackground:(id)arg1 light:(id)arg2 post:(id)arg3 error:(id*)arg4;
+ (id)portraitVideoPipelineWithProperties:(id)arg1 commandQueue:(id)arg2 error:(id*)arg3;
+ (id)portraitVideoPipelineWithProperties:(id)arg1 commandQueue:(id)arg2 notificationQueue:(id)arg3 error:(id*)arg4;
+ (id)portraitVideoPipelineWithProperties:(id)arg1 error:(id*)arg2;
+ (int)prewarm;
+ (id)sourceImageRequest:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
+ (id)stageLightPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4;
+ (id)stageLightPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4 vignetteIntensity:(float)arg5 stageLightIntensity:(float)arg6;
+ (id)studioLightRequestWithFace:(id)arg1 error:(id*)arg2;
+ (id)studioLightRequestWithFace:(id)arg1 relightStyleStrength:(float)arg2 error:(id*)arg3;
+ (id)syntheticDepthOfFieldBackgroundRequestWithMattingRequest:(id)arg1 simulatedFocalRatio:(float)arg2 sourceColorGain:(float)arg3 sourceColorLux:(float)arg4 metadata:(id)arg5 error:(id*)arg6;
+ (id)syntheticDepthOfFieldBackgroundRequestWithMattingRequest:(id)arg1 simulatedFocalRatio:(float)arg2 sourceColorGain:(float)arg3 sourceColorLux:(float)arg4 metadata:(id)arg5 renderingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 error:(id*)arg7;
+ (id)syntheticDepthOfFieldPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 backgroundColorCube:(id)arg3 foregroundColorCube:(id)arg4 colorCubeIntensity:(float)arg5 simulatedFocalRatio:(float)arg6 sourceColorGain:(float)arg7 sourceColorLux:(float)arg8;
+ (id)videoPipelinePropertiesForDevice:(unsigned long long)arg1;

@end
