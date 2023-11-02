
@interface FaceCoreDetector : NSObject {
    struct unique_ptr<apple::vision::libraries::facecore::FaceCoreAPI, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>> { 
        struct __compressed_pair<apple::vision::libraries::facecore::FaceCoreAPI *, std::default_delete<apple::vision::libraries::facecore::FaceCoreAPI>> { 
            struct FaceCoreAPI {} *__value_; 
        } __ptr_; 
    }  _api;
}

+ (void)_addLandmarkOfType:(id)arg1 fromMesh:(void*)arg2 indexes:(id)arg3 to:(id)arg4 image:(id)arg5;
+ (id)_convertRectsToString:(id)arg1;
+ (id)_createFCRFaceFromFace:(void*)arg1 image:(id)arg2;
+ (struct Face { int x1; struct coord { int x_2_1_1; int x_2_1_2; } x2; struct coord { int x_3_1_1; int x_3_1_2; } x3; struct coord { int x_4_1_1; int x_4_1_2; } x4; struct coord { int x_5_1_1; int x_5_1_2; } x5; float x6; int x7; int x8; struct vector<double, std::allocator<double>> { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_9_1_3; } x9; int x10; struct vector<apple::vision::libraries::facecore::coord, std::allocator<apple::vision::libraries::facecore::coord>> { struct coord {} *x_11_1_1; struct coord {} *x_11_1_2; struct __compressed_pair<apple::vision::libraries::facecore::coord *, std::allocator<apple::vision::libraries::facecore::coord>> { struct coord {} *x_3_2_1; } x_11_1_3; } x11; int x12; bool x13; bool x14; float x15; float x16; bool x17; float x18; bool x19; float x20; struct naturalSmileData {} *x21; })_createFaceFromFCRFace:(id)arg1 image:(id)arg2;
+ (struct image { char *x1; int x2; int x3; })_createImage:(id)arg1;
+ (float)_interpretAsFloat:(id)arg1 withDefault:(float)arg2;
+ (struct coord { int x1; int x2; })_makeYFlippedCoordFromPoint:(struct CGPoint { double x1; double x2; })arg1 image:(id)arg2;
+ (struct CGPoint { double x1; double x2; })_makeYFlippedPointFromCoord:(struct coord { int x1; int x2; }*)arg1 image:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_makeYFlippedRectFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 image:(id)arg2;
+ (id)_parseNumericOrBoolValue:(id)arg1;
+ (id)_parseOption:(id)arg1 value:(id)arg2;
+ (id)_parseRegionOfInterestParam:(id)arg1;
+ (id)_transformROIs:(id)arg1 image:(id)arg2 usingBlock:(id /* block */)arg3;
+ (void)_updateFCRFace:(id)arg1 fromFace:(void*)arg2 image:(id)arg3;
+ (id)faceDetector;
+ (id)faceDetectorWithOptions:(id)arg1;
+ (id)fastFaceDetector;
+ (int)findProfileInParameters:(id)arg1;
+ (id)keypointTrackingDetector;
+ (id)preciseFaceDetector;
+ (id)standardTrackingDetector;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createFaceCoreLightApiWithProfile:(int)arg1 parameters:(id)arg2;
- (void)_setParam:(id)arg1 toValue:(id)arg2 withDefaultValue:(id)arg3;
- (void)_updateDetectionParamsValues:(id)arg1;
- (void)_updateExtractionParamsValues:(id)arg1;
- (id)detectFacesInImage:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)extractDetailsForFaces:(id)arg1 inImage:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithOptions:(id)arg1;
- (id)initWithProfile:(int)arg1 parameters:(id)arg2;
- (id)version;

@end
