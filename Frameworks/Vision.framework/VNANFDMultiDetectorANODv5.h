
@interface VNANFDMultiDetectorANODv5 : VNANFDMultiDetectorANODv4

+ (id)detectedObjectClassToRequestKey;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (Class)detectorClass;
+ (id)knownAnimalFaceIdentifiers;
+ (id)recognizedAnimalFaceObjectClassToAnimalFaceCategoryName;
+ (bool)shouldAlignFacesForRequestWithSpecifier:(id)arg1;

- (bool)processDetectedObject:(id)arg1 originatingRequestSpecifier:(id)arg2 objectBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 objectGroupId:(id)arg4 imageBuffer:(id)arg5 qosClass:(unsigned int)arg6 session:(id)arg7 warningRecorder:(id)arg8 detectedObjectResults:(id)arg9 error:(id*)arg10;
- (id)splitDetectedClassResultsIntoSubclasses:(id)arg1;
- (bool)updateRuntimeParametersFromOptions:(id)arg1 error:(id*)arg2;

@end
