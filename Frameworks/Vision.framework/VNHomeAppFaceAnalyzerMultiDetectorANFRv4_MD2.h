
@interface VNHomeAppFaceAnalyzerMultiDetectorANFRv4_MD2 : VNHomeAppFaceAnalyzerMultiDetectorBase

+ (id)_inferenceDescriptorForModelConfiguredWithOptions:(id)arg1 error:(id*)arg2;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelPathForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (const void*)modelVersionForOptions:(id)arg1;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;

- (bool)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
