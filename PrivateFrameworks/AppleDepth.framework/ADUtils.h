
@interface ADUtils : NSObject

+ (long long)ADReturnFromOSStatus:(int)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })addAnglesToRotation:(void *)arg1 angles:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }
+ (void)calcRotationAngle:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })calcRotationMatrix;
+ (void)convertRGBAFloat:(struct __CVBuffer { }*)arg1 toPlanar:(struct __CVBuffer { }*)arg2;
+ (long long)convertToLevelsConfidence:(struct __CVBuffer { }*)arg1 confidenceOutput:(struct __CVBuffer { }*)arg2 confidenceLevelRanges:(id)arg3;
+ (long long)copyModifyNormalsPixelBuffer:(struct __CVBuffer { }*)arg1 output:(struct __CVBuffer { }*)arg2 normalsRotation:(long long)arg3;
+ (long long)filterInvalidsFromFloatImage:(struct __CVBuffer { }*)arg1 minValue:(float)arg2 maxValue:(float)arg3;
+ (long long)filterInvalidsFromFloatImage:(struct __CVBuffer { }*)arg1 minValue:(float)arg2 maxValue:(float)arg3 clampToMinMax:(bool)arg4;
+ (long long)fuseCurrentDepth:(struct __CVBuffer { }*)arg1 previousDepth:(struct __CVBuffer { }*)arg2 intoOutputDepth:(struct __CVBuffer { }*)arg3 currentConfidence:(struct __CVBuffer { }*)arg4 previousConfidence:(struct __CVBuffer { }*)arg5 intoOutputConfidence:(struct __CVBuffer { }*)arg6 currentNormals:(struct __CVBuffer { }*)arg7 previousNormals:(struct __CVBuffer { }*)arg8 intoOutputNormals:(struct __CVBuffer { }*)arg9 usingAlpha:(struct __CVBuffer { }*)arg10 defaultAlpha:(float)arg11 confidenceUnits:(unsigned long long)arg12;
+ (long long)fuseCurrentDepthAndConfidenceMaps:(struct __CVBuffer { }*)arg1 previousDepth:(struct __CVBuffer { }*)arg2 currentConfidence:(struct __CVBuffer { }*)arg3 previousConfidence:(struct __CVBuffer { }*)arg4 outputDepth:(struct __CVBuffer { }*)arg5 outputConfidence:(struct __CVBuffer { }*)arg6 defaultAlpha:(float)arg7 depthMaxDiff:(float)arg8;
+ (long long)fuseCurrentMap:(struct __CVBuffer { }*)arg1 previousMap:(struct __CVBuffer { }*)arg2 intoOutputMap:(struct __CVBuffer { }*)arg3 usingAlpha:(struct __CVBuffer { }*)arg4 defaultAlpha:(float)arg5 diffThreshold:(float)arg6;
+ (id)getStandardNameForBufferOfType:(id)arg1 moduleName:(id)arg2;
+ (long long)postProcessConfidence:(struct __CVBuffer { }*)arg1 confidenceOutput:(struct __CVBuffer { }*)arg2 rawConfidenceUnits:(unsigned long long)arg3 outConfidenceUnits:(unsigned long long)arg4 confidenceLevelRanges:(id)arg5;
+ (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 depthOutput:(struct __CVBuffer { }*)arg2;
+ (long long)postProcessDepth:(struct __CVBuffer { }*)arg1 depthOutput:(struct __CVBuffer { }*)arg2 inputRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (long long)postProcessNormals:(struct __CVBuffer { }*)arg1 normalsOutput:(struct __CVBuffer { }*)arg2 normalsRotation:(long long)arg3;
+ (long long)postProcessWithDepth:(struct __CVBuffer { }*)arg1 confidence:(struct __CVBuffer { }*)arg2 normals:(struct __CVBuffer { }*)arg3 depthOutput:(struct __CVBuffer { }*)arg4 confidenceOutput:(struct __CVBuffer { }*)arg5 normalsOutput:(struct __CVBuffer { }*)arg6 normalsRotation:(long long)arg7 rawConfidenceUnits:(unsigned long long)arg8 outConfidenceUnits:(unsigned long long)arg9 confidenceLevelRanges:(id)arg10;
+ (id)prioritizationAsString:(long long)arg1;
+ (long long)scaleConvertRotateImage:(struct __CVBuffer { }*)arg1 rotateBy:(unsigned char)arg2 cropBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scaleInto:(struct __CVBuffer { }*)arg4 intermediateScalingBuffer:(struct __CVBuffer {}**)arg5 intermediateRotatingBuffer:(struct __CVBuffer {}**)arg6;
+ (long long)scaleConvertRotateImage:(struct __CVBuffer { }*)arg1 rotateBy:(unsigned char)arg2 cropBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scaleInto:(struct __CVBuffer { }*)arg4 intermediateScalingBuffer:(struct __CVBuffer {}**)arg5 intermediateRotatingBuffer:(struct __CVBuffer {}**)arg6 useVT:(bool)arg7;
+ (id)undistortedCalibrationWithSameFOV:(id)arg1;
+ (bool)updatePixelBufferAllocationWithNewSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned int)arg2 pixelBuffer:(struct __CVBuffer {}**)arg3;
+ (void)updatePixelBufferIOSurfaceLabel:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2;
+ (long long)warpAndFuseWithCurrDepth:(struct __CVBuffer { }*)arg1 prevDepth:(struct __CVBuffer { }*)arg2 currNormals:(struct __CVBuffer { }*)arg3 prevNormals:(struct __CVBuffer { }*)arg4 opticalFlow:(struct __CVBuffer { }*)arg5 alphaMap:(struct __CVBuffer { }*)arg6 defaultAlpha:(float)arg7 depthOutput:(struct __CVBuffer { }*)arg8 normalsOutput:(struct __CVBuffer { }*)arg9;
+ (long long)warpMap:(struct __CVBuffer { }*)arg1 toOutput:(struct __CVBuffer { }*)arg2 usingOpticalFlow:(struct __CVBuffer { }*)arg3;
+ (long long)warpPreviousDepth:(struct __CVBuffer { }*)arg1 intoCurrentDepth:(struct __CVBuffer { }*)arg2 previousConfidence:(struct __CVBuffer { }*)arg3 intoCurrentConfidence:(struct __CVBuffer { }*)arg4 previousNormals:(struct __CVBuffer { }*)arg5 intoCurrentNormals:(struct __CVBuffer { }*)arg6 usingOpticalFlow:(struct __CVBuffer { }*)arg7;

@end
