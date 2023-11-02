
@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector {
    struct shared_ptr<vision::mod::LandmarkDetectorDNN> { 
        struct LandmarkDetectorDNN {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _landmarkDetector;
    struct vector<_Geometry2D_point2D_, std::allocator<_Geometry2D_point2D_>> { 
        struct _Geometry2D_point2D_ {} *__begin_; 
        struct _Geometry2D_point2D_ {} *__end_; 
        struct __compressed_pair<_Geometry2D_point2D_ *, std::allocator<_Geometry2D_point2D_>> { 
            struct _Geometry2D_point2D_ {} *__value_; 
        } __end_cap_; 
    }  _landmarkPoints65;
}

@property (readonly) void*landmarkPoints65;

+ (const void*)_requestConstellationToDetectorConstellationMap;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)inputBlobNames;
+ (id)outputBlobNames;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer {}**)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (bool)getConstellation:(unsigned long long*)arg1 cvmlConstellation:(int*)arg2 fromOptions:(id)arg3 error:(id*)arg4;
- (bool)getLandmarkErrorEstimates:(void*)arg1 forConstellation:(int)arg2 error:(id*)arg3;
- (bool)getLandmarkOcclusionFlags:(void*)arg1 forConstellation:(int)arg2 error:(id*)arg3;
- (bool)getLandmarkPoints:(void*)arg1 forConstellation:(int)arg2 error:(id*)arg3;
- (void*)landmarkPoints65;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 croppedPixelBuffer:(const struct __CVBuffer { }*)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id*)arg6 progressHandler:(id /* block */)arg7;
- (void)releaseResources;
- (bool)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:(void*)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 error:(id*)arg4;

@end
