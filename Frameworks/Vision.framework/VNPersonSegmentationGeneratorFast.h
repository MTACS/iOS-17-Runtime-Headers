
@interface VNPersonSegmentationGeneratorFast : VNSegmentationGenerator

+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (bool)inputMaskRequired;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;
+ (bool)rotateImageToMatchNetworkOrientation;

@end
