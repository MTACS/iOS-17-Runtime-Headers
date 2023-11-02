
@interface VNImageSignatureDetector : VNDetector {
    struct unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> { 
        struct __compressed_pair<vision::mod::ImageDescriptorProcessorHyperplaneLSH *, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> { 
            struct ImageDescriptorProcessorHyperplaneLSH {} *__value_; 
        } __ptr_; 
    }  _hyperplaneLSHProcessor;
    unsigned long long  _imageSignatureHashType;
    unsigned long long  _imageSignatureprintType;
}

@property (nonatomic, readonly) unsigned long long imageSignatureHashType;
@property (nonatomic, readonly) unsigned long long imageSignatureprintType;

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; })_calculateImageSignatureHashDescriptorFrom:(const void*)arg1 options:(id)arg2 error:(id*)arg3;
- (struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; })_calculateImageSignatureprintDescriptorFromOptions:(id)arg1 error:(id*)arg2;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (unsigned long long)imageSignatureHashType;
- (unsigned long long)imageSignatureprintType;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;

@end
