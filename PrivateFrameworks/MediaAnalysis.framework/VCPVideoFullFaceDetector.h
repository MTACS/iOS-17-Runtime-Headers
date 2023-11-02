
@interface VCPVideoFullFaceDetector : VCPVideoFaceDetector {
    NSMutableArray * _allFaces;
    NSMutableArray * _allTorsos;
    NSArray * _existingFaceprints;
    NSMutableDictionary * _facePrints;
    NSMutableDictionary * _faceRanges;
    NSMutableDictionary * _faceTrackers;
    NSMutableArray * _frameFaceResults;
    VCPFrameAnalysisStats * _frameStats;
    GDVUStreamingGallery * _gallery;
    NSMutableDictionary * _keyFaces;
    float  _latestFrameArea;
    int  _latestTrackID;
    VCPCNNPoseEstimator * _poseEstimator;
    NSMutableArray * _reservedIDs;
    VCPCNNSmileDetector * _smileDetector;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastTracking;
    NSMutableDictionary * _torsoPrints;
}

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)clusterFaces;
- (bool)compareFace:(id)arg1 withFace:(id)arg2;
- (void)dealloc;
- (int)detectFaces:(struct __CVBuffer { }*)arg1 faces:(id)arg2 torsos:(id)arg3;
- (int)detectTrackFacesInFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 faces:(id)arg3 torsos:(id)arg4;
- (id)faceRanges;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)frameFaceResults;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 withExistingFaceprints:(id)arg2 frameStats:(id)arg3;
- (bool)locationChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 landscape:(bool)arg3;
- (float)minProcessTimeIntervalInSecs;
- (void)removeSmallestKeyFace;
- (int)updateWithExistingFaces;

@end
