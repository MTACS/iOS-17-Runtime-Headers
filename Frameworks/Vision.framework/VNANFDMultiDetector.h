
@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector {
    VNFaceBBoxAligner * _faceBBoxAligner;
    ShotflowDetector * _mMultiHeadedANFDDetector;
}

@property (nonatomic, readonly) ShotflowDetector *shotflowDetector;

+ (void)_printDebugInfo:(id)arg1 detectedObjectsRaw:(id)arg2 faceDetectorBGRAImage:(struct __CVBuffer { }*)arg3 tempImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg4 session:(id)arg5;
+ (Class)anfdMultiDetectorClassToProcessRequest:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)detectedObjectClassToRequestKey;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;
+ (id)knownAnimalIdentifiers;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;
+ (id)recognizedAnimalObjectClassToAnimalName;
+ (id)requestInfoForRequest:(id)arg1;
+ (bool)shouldAlignFacesForRequestWithSpecifier:(id)arg1;
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_alignFace:(id)arg1 imageBuffer:(id)arg2 qosClass:(unsigned int)arg3 session:(id)arg4 warningRecorder:(id)arg5 error:(id*)arg6;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 warningRecorder:(id)arg4 error:(id*)arg5 progressHandler:(id /* block */)arg6;
- (bool)isDetectedObject:(id)arg1 ofAGivenObjectSubClass:(id)arg2;
- (bool)processDetectedObject:(id)arg1 originatingRequestSpecifier:(id)arg2 objectBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 objectGroupId:(id)arg4 imageBuffer:(id)arg5 qosClass:(unsigned int)arg6 session:(id)arg7 warningRecorder:(id)arg8 detectedObjectResults:(id)arg9 error:(id*)arg10;
- (void)processRecognizedObjectWithIdentifier:(id)arg1 originatingRequestSpecifier:(id)arg2 objectBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 objectGroupId:(id)arg4 objectConfidence:(float)arg5 detectedObjectResults:(id)arg6;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (id)shotflowDetector;
- (id)splitDetectedClassResultsIntoSubclasses:(id)arg1;
- (bool)updateRuntimeParametersFromOptions:(id)arg1 error:(id*)arg2;

@end
