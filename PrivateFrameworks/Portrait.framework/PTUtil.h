
@interface PTUtil : NSObject {
    <MTLComputePipelineState> * _addConstant;
    <MTLComputePipelineState> * _drawTurboLegend;
    <MTLComputePipelineState> * _drawTurboLegendYUV;
    <MTLComputePipelineState> * _fillWithColor;
    <MTLComputePipelineState> * _gaussianFilter3x3;
    <MTLComputePipelineState> * _gaussianNoise;
    <MTLComputePipelineState> * _kernelCopy;
    PTMetalContext * _metalContext;
    <MTLComputePipelineState> * _multiplyTex;
    <MTLComputePipelineState> * _reciprocal;
    <MTLComputePipelineState> * _renderDisparity;
    <MTLComputePipelineState> * _renderLine;
    <MTLComputePipelineState> * _renderRect;
    <MTLComputePipelineState> * _rotateTexture;
    <MTLComputePipelineState> * _sobelFilter;
    <MTLComputePipelineState> * _visualizeCircleUsingRect;
}

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })adjustIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 fromImageSize:(struct CGSize { double x1; double x2; })arg2 toViewPortSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)findMipmapLevel:(id)arg1 largerThan:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
+ (id)findMipmapLevel:(id)arg1 largerThan:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 fromLevel:(int)arg3;
+ (int)getRotationDegreesFromAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })mirrorMatrix4x4OverX:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (int)orientationForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2;
+ (unsigned int)orientationFromTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (unsigned int)orientationFromTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 inverse:(bool)arg2;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })perspectiveProjectionFieldOfView:(void *)arg1 aspectRatio:(void *)arg2 depthNearFar:(void *)arg3 reverseZ:(void *)arg4; // needs 4 arg types, found 3: float, float, bool
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })perspectiveProjectionFromIntrinsics:(void *)arg1 colorSize:(void *)arg2 depthNearFar:(void *)arg3 reverseZ:(void *)arg4; // needs 4 arg types, found 3: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }, bool
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projectionMatrixForOrientation:(void *)arg1 intrinsics:(void *)arg2 fromImageSize:(void *)arg3 viewportSize:(void *)arg4 reverseZ:(void *)arg5 depthNearFar:(void *)arg6; // needs 6 arg types, found 5: int, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, struct CGSize { double x1; double x2; }, struct CGSize { double x1; double x2; }, bool
+ (id)temporaryDirectory:(id)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transformFromRotation:(void *)arg1 translation:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }

- (void).cxx_destruct;
- (int)_drawTurboLegendTick:(id)arg1 outTexture:(id)arg2 rect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 maxValue:(float)arg4;
- (int)addConstant:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 value:(float)arg4;
- (int)copyTex:(id)arg1 inTex:(id)arg2 outTex:(id)arg3;
- (int)drawTurboLegend:(id)arg1 outLuma:(id)arg2 outChroma:(id)arg3 rect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 maxValue:(float)arg5;
- (int)drawTurboLegend:(id)arg1 outRGBA:(id)arg2 rect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 maxValue:(float)arg4;
- (int)fillWithColor:(void *)arg1 color:(void *)arg2 outTex:(void *)arg3; // needs 3 arg types, found 2: id, id
- (int)gaussianFilter3x3:(id)arg1 inRGB:(id)arg2 outRGB:(id)arg3;
- (int)gaussianNoise:(id)arg1 inNoise:(id)arg2 outTex:(id)arg3;
- (id)initWithMetalContext:(id)arg1;
- (int)multiplyTex:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 multiplier:(float)arg4;
- (int)reciprocalTex:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 epsilon:(float)arg4;
- (int)renderDisparity:(id)arg1 inDisparity:(id)arg2 outYUV:(id)arg3 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 drawLegend:(bool)arg5;
- (int)renderLine:(void *)arg1 line:(void *)arg2 color:(void *)arg3 outTexture:(void *)arg4; // needs 4 arg types, found 2: id, id
- (int)renderRect:(void *)arg1 rect:(void *)arg2 color:(void *)arg3 fill:(void *)arg4 outTexture:(void *)arg5; // needs 5 arg types, found 3: id, bool, id
- (void)rotateTexture:(id)arg1 inTex:(id)arg2 outTex:(id)arg3 rotationDegrees:(int)arg4;
- (int)sobelFilterSingleChannelColor:(id)arg1 input:(id)arg2 output:(id)arg3 scale:(float)arg4;
- (int)visualizeCircleUsingRect:(void *)arg1 center:(void *)arg2 radius:(void *)arg3 outTexture:(void *)arg4; // needs 4 arg types, found 3: id, float, id

@end
