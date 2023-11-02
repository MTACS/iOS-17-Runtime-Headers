
@interface VCPVideoFacePoseAnalyzer : NSObject {
    VCPVideoFacePoseFilter * _filter;
    float  _focalLengthInPixels;
    int  _height;
    VCPCNNFaceLandmarkDetector * _landmarkDetector;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTimestamp;
    float  _points2D;
    float  _points3D;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _pose;
    VCPPnPSolver * _poseEstimator;
    int  _width;
}

@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } pose;

- (void).cxx_destruct;
- (int)analyzeFrameForPose:(struct __CVBuffer { }*)arg1 withFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)init;
- (id)initWithFocalLengthInPixels:(float)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })pose;
- (void)setPose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (bool)updateFocalLengthInPixels:(float)arg1;

@end
