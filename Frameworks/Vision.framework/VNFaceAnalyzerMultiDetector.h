
@interface VNFaceAnalyzerMultiDetector : VNFaceAnalyzerMultiDetectorBase {
    struct shared_ptr<vision::mod::FaceFrontalizer> { 
        struct FaceFrontalizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mFaceFrontalizerImpl;
}

+ (float)faceBoundingBoxScalingFactorForFaceObservation:(unsigned long long)arg1;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateCropRectForInputFace:(id)arg1 imageBuffer:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)prepare_vImageBufferForCVPixelBuffer:(struct __CVBuffer { }*)arg1 vImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2 error:(id*)arg3;

@end
