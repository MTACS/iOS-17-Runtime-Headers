
@interface VCPCaptureAnalysisSession : NSObject {
    NSMutableDictionary * _aggregatedResults;
    NSObject<OS_dispatch_queue> * _analysisQueue;
    unsigned long long  _analysisTypes;
    VCPAudioAnalyzer * _audioAnalyzer;
    VCPImageBlurAnalyzer * _blurAnalyzer;
    VCPVideoFullFaceDetector * _faceDetector;
    float  _focalLengthInPixels;
    VCPHomeKitMotionAnalyzer * _homeKitMotionAnalyzer;
    VCPLightMotionAnalyzer * _lightMotionAnalyzer;
    VCPVideoFaceMeshAnalyzer * _meshAnalyzer;
    VCPVideoFacePoseAnalyzer * _poseAnalyzer;
    bool  _preWarmed;
    int  _preferredAngle;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredTransform;
    int  _rotationAngleForFacePose;
    struct Rotator { struct __CVPixelBufferPool {} *x1; int x2; int x3; int x4; struct OpaqueVTPixelRotationSession {} *x5; } * _rotator;
    struct Rotator { struct __CVPixelBufferPool {} *x1; int x2; int x3; int x4; struct OpaqueVTPixelRotationSession {} *x5; } * _rotatorForFacePose;
    VCPSceneChangeAnalyzer * _sceneChangeAnalyzer;
    VCPTrimAnalyzer * _trimAnalyzer;
    VCPFullVideoAnalyzer * _videoAnalysis;
}

@property (readonly) NSDictionary *aggregatedResults;

+ (id)aggregateAnalysisForTypes:(unsigned long long)arg1 withFramesMeta:(id)arg2 properties:(id)arg3;
+ (id)analyzerForAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 properties:(id)arg3;

- (void).cxx_destruct;
- (id)aggregatedResults;
- (int)analyzeAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)analyzeFrameWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 analysisData:(id)arg2;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 properties:(id)arg4 completion:(id /* block */)arg5;
- (id)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 properties:(id)arg4 error:(id*)arg5;
- (void)dealloc;
- (bool)finalizeAnalysis;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })flipTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)init;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 withPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 withFocalLengthInPixels:(float)arg3 withAnalysisQueue:(id)arg4 withTurbo:(bool)arg5;
- (int)prewarmWithProperties:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rotateTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 byAngle:(int)arg2;
- (bool)shouldCutAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 stillPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withCut:(bool)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForAngle:(int)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2;
- (bool)updatePreferredTransform:(const struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 properties:(id)arg2;

@end
