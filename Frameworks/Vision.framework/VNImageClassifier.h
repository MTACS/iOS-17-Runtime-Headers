
@interface VNImageClassifier : NSObject

+ (bool)_dumpIntermediatesFullImage:(id)arg1 imageURL:(id)arg2 requiredImageSource:(const struct __CVBuffer { }*)arg3 imageProcessingType:(int)arg4 error:(id*)arg5;
+ (bool)_dumpIntermediatesTiles:(id)arg1 imageURL:(id)arg2 requiredImageSource:(const struct __CVBuffer { }*)arg3 imageProcessingType:(int)arg4 allocatedTileCount:(unsigned int)arg5 imageTiles:(const void*)arg6 bytesPerPixel:(int)arg7 numTiles:(unsigned int)arg8 scaleFactor:(float)arg9 augmentationMode:(unsigned int)arg10 scalingImage:(bool)arg11 error:(id*)arg12;
+ (id)classifyImageHierarchicallyWithDescriptors:(const void*)arg1 usingImageClassifier:(void*)arg2 hierarchicalClassifier:(struct ImageClassifier_HierarchicalModel { struct ImageClassfier_Graph {} *x1; }*)arg3 minimumClassificationConfidence:(float)arg4 minimumClassificationConfidenceRatio:(float)arg5 maximumLeafLabels:(unsigned long long)arg6 maximumHierarchicalLabels:(unsigned long long)arg7 options:(id)arg8 metalContext:(id)arg9 error:(id*)arg10;
+ (id)classifyImageWithDescriptors:(const void*)arg1 usingImageClassifier:(void*)arg2 andMinConfidenceForClassification:(float)arg3 options:(id)arg4 metalContext:(id)arg5 error:(id*)arg6;
+ (bool)computeImageCropWithImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract { int (**x1)(); }*)arg3 scalingImage:(bool)arg4 options:(id)arg5 pixelBuffer:(struct __CVBuffer {}**)arg6 error:(id*)arg7;
+ (bool)computeImageDescriptorsWithImage:(id)arg1 pixelBuffer:(const struct __CVBuffer { }*)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract { int (**x1)(); }*)arg4 tileCount:(int)arg5 augmentationMode:(unsigned int)arg6 resultantDescriptorBuffer:(void*)arg7 options:(id)arg8 metalContext:(id)arg9 canceller:(id)arg10 tileColumns:(unsigned long long*)arg11 tileRows:(unsigned long long*)arg12 error:(id*)arg13;
+ (bool)computeLabelsAndConfidence:(void*)arg1 usingDescriptorBuffer:(void*)arg2 populateLabelsAndConfidence:(void*)arg3 options:(id)arg4 metalContext:(id)arg5 error:(id*)arg6;

@end
