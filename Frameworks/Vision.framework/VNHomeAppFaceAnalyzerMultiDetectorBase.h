
@interface VNHomeAppFaceAnalyzerMultiDetectorBase : VNFaceAnalyzerMultiDetectorBase

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateCropRectForInputFace:(id)arg1 imageBuffer:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)prepare_vImageBufferForCVPixelBuffer:(struct __CVBuffer { }*)arg1 vImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2 error:(id*)arg3;

@end
