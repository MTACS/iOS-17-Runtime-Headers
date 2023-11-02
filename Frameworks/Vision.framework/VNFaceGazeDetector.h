
@interface VNFaceGazeDetector : VNDetector {
    struct shared_ptr<vision::mod::GazeFollowPredictor> { 
        struct GazeFollowPredictor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _gazeFollowPredictor;
    struct shared_ptr<vision::mod::CamGazePredictor> { 
        struct CamGazePredictor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _gazePredictor;
}

+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;

@end
