
@interface VNScreenGazeDetector : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::ScreenGazePredictor> { 
        struct ScreenGazePredictor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _predictor;
}

+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;

@end
