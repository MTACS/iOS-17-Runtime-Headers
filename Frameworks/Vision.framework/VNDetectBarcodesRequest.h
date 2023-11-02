
@interface VNDetectBarcodesRequest : VNImageBasedRequest {
    bool  _coalesceCompositeSymbologies;
    bool  _useSegmentationPregating;
}

@property (nonatomic) bool coalesceCompositeSymbologies;
@property (nonatomic, copy) NSString *locateMode;
@property (readonly, copy) NSArray *results;
@property (nonatomic) bool stopAtFirstPyramidWith2DCode;
@property (nonatomic, copy) NSArray *symbologies;
@property (nonatomic) bool useMLDetector;
@property (nonatomic) bool useSegmentationPregating;

// Image: /System/Library/Frameworks/Vision.framework/Vision

+ (id)ACBSBarcodeTypeForBarcodeSymbology:(id)arg1;
+ (struct __CFString { }*)MRCSymbologyForBarcodeSymbology:(id)arg1;
+ (id)_allBarcodeSymbologiesRev1;
+ (id)_allBarcodeSymbologiesRev2;
+ (id)_allBarcodeSymbologiesRev2Private;
+ (id)_allBarcodeSymbologiesRev3;
+ (id)_allBarcodeSymbologiesRev3Private;
+ (id)_allBarcodeSymbologiesRev4;
+ (id)_allBarcodeSymbologiesRev4Private;
+ (id)_ourACBSBarcodeTypeToBarcodeSymbologyMap;
+ (id)_ourBarcodeSymbologyToACBSBarcodeTypeMap;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMap;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapPrivate;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapRev3;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapRev3Private;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapRev4;
+ (id)_ourBarcodeSymbologyToMRCSymbologyMapRev4Private;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMap;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapPrivate;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapRev3;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapRev3Private;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapRev4;
+ (id)_ourMRCSymbologyToBarcodeSymbologyMapRev4Private;
+ (id)availableLocateModes;
+ (id)availableLocateModesRev1;
+ (id)availableLocateModesRev2;
+ (id)barcodeSymbologyForACBSBarcodeType:(id)arg1;
+ (id)barcodeSymbologyForMRCSymbology:(struct __CFString { }*)arg1;
+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)privateRevisionsSet;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (id)supportedSymbologies;
+ (id)supportedSymbologiesRev1;
+ (id)supportedSymbologiesRev2;
+ (id)supportedSymbologiesRev2Private;
+ (id)supportedSymbologiesRev3;
+ (id)supportedSymbologiesRev3Private;
+ (id)supportedSymbologiesRev4;
+ (id)supportedSymbologiesRev4Private;

- (int)_ACBarcodeRecognizerLocateMode;
- (long long)_MRCLocateMode;
- (id)_barcodesDetectedInImageBuffer:(id)arg1 usingACBSConfig:(struct ACBSConfig { }*)arg2 originatingRequestSpecifier:(id)arg3 error:(id*)arg4;
- (struct ACBSConfig { }*)_createACBSConfigAndReturnError:(id*)arg1;
- (id)_createMRCDecoderOptionsForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_getCornerPointsFromCodeLocationPoints:(id)arg1 bottomLeft:(struct CGPoint { double x1; double x2; }*)arg2 topLeft:(struct CGPoint { double x1; double x2; }*)arg3 topRight:(struct CGPoint { double x1; double x2; }*)arg4 bottomRight:(struct CGPoint { double x1; double x2; }*)arg5;
- (id)_machineReadableCodesDetectedInImageBuffer:(id)arg1 originatingRequestSpecifier:(id)arg2 inContext:(id)arg3 mrcDetector:(id)arg4 error:(id*)arg5;
- (id)_newVNBarcodeSymbologyAztecDescriptorForACBSBarcodeInfo:(id)arg1;
- (id)_newVNBarcodeSymbologyAztecDescriptorForMRCDescriptor:(struct __MRCDescriptor { }*)arg1 error:(id*)arg2;
- (id)_newVNBarcodeSymbologyPDF417DescriptorForACBSBarcodeInfo:(id)arg1;
- (id)_newVNBarcodeSymbologyPDF417DescriptorForMRCDescriptor:(struct __MRCDescriptor { }*)arg1 error:(id*)arg2;
- (id)_newVNBarcodeSymbologyQRDescriptorForACBSBarcodeInfo:(id)arg1;
- (id)_newVNBarcodeSymbologyQRDescriptorForMRCDescriptor:(struct __MRCDescriptor { }*)arg1 error:(id*)arg2;
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)availableLocateModesAndReturnError:(id*)arg1;
- (bool)coalesceCompositeSymbologies;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)locateMode;
- (id)newBarcodeObservationForACBSBarcodeInfo:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 roiCroppingPixelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 originatingRequestSpecifier:(id)arg5 error:(id*)arg6;
- (id)newBarcodeObservationForMRCDescriptor:(struct __MRCDescriptor { }*)arg1 roiCroppingPixelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 originatingRequestSpecifier:(id)arg3 error:(id*)arg4;
- (void)resolvedRevisionDidChangeFromRevision:(unsigned long long)arg1;
- (void)setCoalesceCompositeSymbologies:(bool)arg1;
- (void)setLocateMode:(id)arg1;
- (void)setStopAtFirstPyramidWith2DCode:(bool)arg1;
- (void)setSymbologies:(id)arg1;
- (void)setUseMLDetector:(bool)arg1;
- (void)setUseSegmentationPregating:(bool)arg1;
- (bool)stopAtFirstPyramidWith2DCode;
- (id)supportedComputeStageDevicesAndReturnError:(id*)arg1;
- (id)supportedSymbologiesAndReturnError:(id*)arg1;
- (id)symbologies;
- (bool)useMLDetector;
- (bool)useSegmentationPregating;
- (bool)warmUpSession:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)mad_defaultRequest;

@end
