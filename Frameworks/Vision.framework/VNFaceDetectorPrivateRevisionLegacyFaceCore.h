
@interface VNFaceDetectorPrivateRevisionLegacyFaceCore : VNFaceDetector

+ (id)_convertVNOptionsToFaceCoreDetectOptions:(id)arg1;
+ (id)_convertVNOptionsToFaceCoreExtractOptions:(id)arg1;
+ (id)_convertVNOptionsToFaceCoreOptions:(id)arg1 optionsMap:(id)arg2;
+ (id)_convertVNOptionsToFaceCoreSetupOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;

@end
