
@interface VNImageAnalyzerMultiDetector : VNDetector {
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { 
        struct ImageAnalyzer_CustomClassifier {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifier;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { 
        struct ImageAnalyzer_CustomClassifier {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _VNVYvzEtX1JlUdu8xx5qhDICustomClassifier;
    struct shared_ptr<const std::vector<std::tuple<std::string, float, bool>>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _cachedAllSceneClassificationsFromLastAnalysis;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedAllSceneClassificationsFromLastAnalysisAccessLock;
    unsigned int  _cachedInferenceImagePixelFormatType;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { 
        struct ImageAnalyzer_CustomClassifier {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _cityNatureCustomClassifier_DO_NOT_ACCESS_DIRECTLY;
    int  _customClassifierEspressoDeviceID;
    int  _customClassifierEspressoEngine;
    struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { 
        struct ImageClassifier_HierarchicalModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _defaultSceneClassificationHierarchicalModel;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _entityNetIndexesToReport;
    bool  _hasherInitialized;
    struct shared_ptr<vision::mod::ImageAnalyzer> { 
        struct ImageAnalyzer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _imageAnalyzer;
    struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> { 
        struct __compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::default_delete<vision::mod::ImageAnalyzer_PCA>> { 
            struct ImageAnalyzer_PCA {} *__value_; 
        } __ptr_; 
    }  _imageAnalyzerPCA256_DO_NOT_ACCESS_DIRECTLY;
    VisionCoreSceneNetInferenceNetworkDescriptor * _inferenceDescriptor;
    VNRegionOfInterestTilingOptions * _inputImageTilingOptions;
    struct shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _junkCustomClassifiers_DO_NOT_ACCESS_DIRECTLY;
    unsigned long long  _model;
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache * _operationPointsCache;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { 
        struct ImageAnalyzer_CustomClassifier {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _potentialLandmarkCustomClassifier_DO_NOT_ACCESS_DIRECTLY;
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> { 
        struct ImageAnalyzer_CustomClassifier {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _significantEventCustomClassifier_DO_NOT_ACCESS_DIRECTLY;
}

@property (readonly) bool hasObjDetNet;
@property (readonly) bool hasSliderNet;

+ (bool)_getAssociatedBoundingBoxGeneratorClass:(Class*)arg1 options:(id*)arg2 forConfigurationOptions:(id)arg3 error:(id*)arg4;
+ (id)_inferenceDescriptorForOptions:(id)arg1 error:(id*)arg2;
+ (id)_newInferenceDescriptorForModel:(unsigned long long)arg1 configuredWithOptions:(id)arg2 error:(id*)arg3;
+ (id)_newSaliencyHeatmapBoundingBoxGeneratorOptionsForOptions:(id)arg1;
+ (id)_saliencyHeatmapBoundingBoxGeneratorTypeForOriginatingRequestSpecifier:(id)arg1;
+ (id)allPhotosAdjustmentKeys;
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel {} *x1; struct __shared_weak_count {} *x2; })createHierarchicalModelForInferenceDescriptor:(id)arg1 error:(id*)arg2;
+ (struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> { struct ImageClassifier_HierarchicalModel {} *x1; struct __shared_weak_count {} *x2; })createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 error:(id*)arg2;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)disallowedListForModel:(unsigned long long)arg1;
+ (unsigned long long)modelForRequestClass:(Class)arg1 revision:(unsigned long long)arg2;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_processFullImagePixelBuffer:(const struct __CVBuffer { }*)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)allCityNatureIdentifiersWithOptions:(id)arg1 error:(id*)arg2;
- (id)allJunkIdentifiersForOptions:(id)arg1 error:(id*)arg2;
- (id)allRecognizedObjectsIdentifiersWithOptions:(id)arg1 error:(id*)arg2;
- (id)allSceneIdentifiersWithOptions:(id)arg1 error:(id*)arg2;
- (id)allSignificantEventIdentifiersWithOptions:(id)arg1 error:(id*)arg2;
- (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithOptions:(id)arg1 error:(id*)arg2;
- (bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)description;
- (bool)hasObjDetNet;
- (bool)hasSliderNet;
- (id)initWithConfigurationOptions:(id)arg1;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg1 error:(id*)arg2;
- (bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;
- (unsigned long long)signPostAdditionalParameter;
- (bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;

@end
