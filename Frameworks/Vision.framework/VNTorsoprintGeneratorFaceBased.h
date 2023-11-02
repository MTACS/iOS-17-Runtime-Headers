
@interface VNTorsoprintGeneratorFaceBased : VNTorsoprintGeneratorBase

+ (float)magnifiedBBoxScaleFactor;
+ (float)minimumTorsoInsideInputImageThreshold;
+ (struct CGSize { double x1; double x2; })torsoprintDescriptorSize;
+ (struct CGSize { double x1; double x2; })torsoprintInputImageSizeForFaceOrientation:(int)arg1;

- (bool)_calculateTorsoBBoxFromFaceBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 insideImageWithSize:(struct CGSize { double x1; double x2; })arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 error:(id*)arg5;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)torsoprintForImageBuffer:(struct __CVBuffer { }*)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3;

@end
