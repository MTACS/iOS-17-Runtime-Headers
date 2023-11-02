
@interface VCPVideoLightFaceDetector : VCPVideoFaceDetector {
    VCPFrameAnalysisStats * _frameStats;
    float  _lastJawOpenness;
    float * _lastVertices;
    int  _lastestFaceID;
    VCPVideoFaceMeshAnalyzer * _meshAnalyzer;
    int  _numFacesLastFrame;
}

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (void)dealloc;
- (int)detectFaces:(struct __CVBuffer { }*)arg1 faces:(id)arg2;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 frameStats:(id)arg2 faceDominated:(bool)arg3;
- (float)minProcessTimeIntervalInSecs;

@end
