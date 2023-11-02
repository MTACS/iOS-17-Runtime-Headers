
@interface VNImageBasedRequest : VNRequest <VNDetectedObjectObservationAcceptingInternal, VNFaceObservationAcceptingInternal, VNImageIdealImageSizeProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputDetectedObjectObservations;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (Class)configurationClass;

- (id)VNCoreMLTransformerDetectionprintAndReturnError:(id*)arg1;
- (id)VNCoreMLTransformerSceneprintsAndReturnError:(id*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })VNImageProcessingSessionRegionOfInterest;
- (id)_detectedObjectObservationsForRegionOfInterestContainingDetectedObjectObservations:(id)arg1 relationWithRegionOfInterest:(unsigned long long)arg2;
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)description;
- (bool)getOptionalValidatedInputDetectedObjectObservations:(id*)arg1 forObservationClass:(Class)arg2 relationWithRegionOfInterest:(unsigned long long)arg3 error:(id*)arg4;
- (bool)getOptionalValidatedInputFaceObservations:(id*)arg1 clippedToRegionOfInterest:(bool)arg2 error:(id*)arg3;
- (id)inputDetectedObjectObservations;
- (id)inputFaceObservations;
- (bool)isFullCoverageRegionOfInterest;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setInputDetectedObjectObservations:(id)arg1;
- (void)setInputFaceObservations:(id)arg1;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)supportedImageSizeSet;
- (bool)validateConfigurationAndReturnError:(id*)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (bool)_allowANE;
+ (id)vcp_sceneRequestWithRequestClass:(Class)arg1 andRevision:(unsigned long long)arg2;

- (bool)_configureRequestWithRevision:(unsigned long long)arg1;

@end
