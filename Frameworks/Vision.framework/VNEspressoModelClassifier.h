
@interface VNEspressoModelClassifier : VNDetector {
    <MLComputeDeviceProtocol> * _computeDevice;
    NSSet * _disallowedIdentifiers;
    struct shared_ptr<vision::mod::ImageClassifierAbstract> { 
        struct ImageClassifierAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mClassifier;
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { 
        struct ImageDescriptorProcessorAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mDescriptorProcessor;
}

+ (id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (void)convertRelationships:(id)arg1 toStdRelationships:(void*)arg2;
+ (struct shared_ptr<vision::mod::ImageClassifierAbstract> { struct ImageClassifierAbstract {} *x1; struct __shared_weak_count {} *x2; })createClassifierWithDescriptor:(struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract {} *x1; struct __shared_weak_count {} *x2; })arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options { bool x1; unsigned long long x2; id x3; id x4; })arg6;
+ (struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { struct ImageDescriptorProcessorAbstract {} *x1; struct __shared_weak_count {} *x2; })createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options { bool x1; unsigned long long x2; id x3; id x4; })arg5;
+ (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel {} *x1; struct __shared_weak_count {} *x2; })createHierarchicalModelForOriginatingRequestSpecifier:(id)arg1 error:(id*)arg2;
+ (id)createObservationWithDescriptors:(id)arg1 forOriginatingRequestSpecifier:(id)arg2;
+ (void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)boundComputeStageDevices;
- (id)calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 canceller:(id)arg4 error:(id*)arg5;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)disallowedIdentifiers;
- (id)getLabels;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;

@end
