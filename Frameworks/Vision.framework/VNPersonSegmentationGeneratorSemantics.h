
@interface VNPersonSegmentationGeneratorSemantics : VNSegmentationGenerator

+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (bool)inputMaskRequired;
+ (id)outputMaskBlobNameToFeatureName;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;
+ (bool)rotateImageToMatchNetworkOrientation;

@end
