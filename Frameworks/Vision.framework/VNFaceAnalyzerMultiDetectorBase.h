
@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceprintAndAttributes> { 
        struct FaceprintAndAttributes {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mMultiHeadedFaceClassifier;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
+ (const void*)modelVersionForOptions:(id)arg1;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;
+ (unsigned long long)numberOfImageChannels;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addFaceAnalysisResultsFromMap:(void*)arg1 toFaceAttributeObject:(id)arg2 forOriginatingRequestSpecifier:(id)arg3;
- (bool)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)_saveFaceAttributes:(void*)arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)_saveFaceprint:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; })arg1 toFaceObservation:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;

@end
