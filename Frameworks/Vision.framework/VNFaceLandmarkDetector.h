
@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding> {
    struct shared_ptr<vision::mod::LandmarkAttributes> { 
        struct LandmarkAttributes {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _faceAttributesPupilRefiner;
    bool  _modelFilesWereMemmapped;
    bool  _requireFaceAttributesPupilRefiner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const void*)allLandmarksPointsIndexesForConstellation:(unsigned long long)arg1;
+ (struct _Geometry2D_point2D_ { float x1; float x2; })computeCentroidUsingPoints:(const struct _Geometry2D_point2D_ { float x1; float x2; }*)arg1 indicies:(const int*)arg2 numberOfIndicies:(int)arg3;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2;
+ (const struct _LandmarkDetector_faceMeshParts_ { int x1; int x2; int x3[23]; int x4; int x5[23]; int x6; int x7[23]; int x8; int x9[23]; int x10; int x11[23]; int x12; int x13[23]; int x14; int x15[23]; int x16; int x17[23]; int x18; int x19[23]; int x20; int x21[23]; int x22; int x23[23]; int x24; int x25[23]; int x26; int x27[23]; int x28; int x29[23]; int x30; int x31[23]; int x32; int x33[23]; int x34; int x35[23]; }*)landmarksMeshPartsForConstellation:(unsigned long long)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)calculatePupilLocationAndUpdateLandmarkPoints:(void*)arg1;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (id)computeLandmarksScoreOnImage:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 withFaceBoundingBox:(const struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 andLandmarks:(const void*)arg3 error:(id*)arg4;
- (void)dealloc;
- (bool)detectBlinkOnFaceImage:(const struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 landmarks:(const void*)arg4 warningRecorder:(id)arg5 error:(id*)arg6;
- (bool)loadRefinersAndReturnError:(id*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedFaceBBoxForLandmarks:(id)arg1;
- (bool)postprocessLandmarkResultsForLandmarks:(const void*)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 options:(id)arg4 warningRecorder:(id)arg5 error:(id*)arg6;

@end
