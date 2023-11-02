
@interface ADReprojection : NSObject {
    unsigned long long  _capacity;
    struct CGPoint { double x1; double x2; } * _dstCameraPixels;
    bool  _fullPassReprojectionAllowed;
    float * _inOutDepth;
    struct CGPoint { double x1; double x2; } * _intermediateUndistortedCameraPixels;
    unsigned long long  _length;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _points;
    bool  _singlePassOptimizationUsed;
    bool  _singlePassReprojectionAllowed;
    struct CGPoint { double x1; double x2; } * _srcCameraPixels;
    unsigned long long  _streakingInfill;
    struct __CVBuffer { } * _warpMap;
    int * _warpMaskX;
    int * _warpMaskY;
    float * _warpMaskZHelper;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic) bool fullPassReprojectionAllowed;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic) bool singlePassReprojectionAllowed;
@property (nonatomic) unsigned long long streakingInfill;

- (void)calculateWarpedPixelsFromSrcCalibration:(id)arg1 dstCalibration:(id)arg2 sourceToDestinationTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg3 validPixels:(unsigned long long)arg4;
- (unsigned long long)capacity;
- (void)dealloc;
- (void)deallocateBuffers;
- (bool)fullPassReprojectionAllowed;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 streakingInfill:(unsigned long long)arg2;
- (id)initWithStreakingInfill:(unsigned long long)arg1;
- (bool)isCalibrationUndistorted:(id)arg1;
- (unsigned long long)length;
- (void)setFullPassReprojectionAllowed:(bool)arg1;
- (void)setSinglePassReprojectionAllowed:(bool)arg1;
- (void)setStreakingInfill:(unsigned long long)arg1;
- (bool)singlePassReprojectionAllowed;
- (unsigned long long)streakingInfill;
- (bool)updateCapacity:(unsigned long long)arg1;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { }*)arg1 srcCalibration:(id)arg2 dstCalibration:(id)arg3 poseTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 warpedDepth:(struct __CVBuffer { }*)arg5;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { }*)arg1 srcCalibration:(id)arg2 dstCalibration:(id)arg3 sourceToDestinationTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 warpedDepth:(struct __CVBuffer { }*)arg5;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { }*)arg1 srcCalibration:(id)arg2 dstCalibration:(id)arg3 sourceToDestinationTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 warpedDepth:(struct __CVBuffer { }*)arg5 warpMap:(struct __CVBuffer { }*)arg6;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { }*)arg1 srcDepthUnits:(unsigned long long)arg2 dstDepthUnits:(unsigned long long)arg3 srcCalibration:(id)arg4 dstCalibration:(id)arg5 poseTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg6 warpedDepth:(struct __CVBuffer { }*)arg7;
- (long long)updateWarpMapWithDepth:(struct __CVBuffer { }*)arg1 srcDepthUnits:(unsigned long long)arg2 dstDepthUnits:(unsigned long long)arg3 srcCalibration:(id)arg4 dstCalibration:(id)arg5 sourceToDestinationTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg6 warpedDepth:(struct __CVBuffer { }*)arg7;
- (long long)updateWarpWithWarpedDepthBuffer:(struct __CVBuffer { }*)arg1 dimensions:(struct CGSize { double x1; double x2; })arg2 validPixels:(unsigned long long)arg3;
- (int)vectorizeCameraPixels:(struct __CVBuffer { }*)arg1;
- (long long)warpDepth:(struct __CVBuffer { }*)arg1 srcCalibration:(id)arg2 dstCalibration:(id)arg3 poseTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 warpedDepth:(struct __CVBuffer { }*)arg5;
- (long long)warpImage:(struct __CVBuffer { }*)arg1 intoImage:(struct __CVBuffer { }*)arg2;

@end
