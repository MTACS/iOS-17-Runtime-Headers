
@interface VNTrajectoryProcessor : NSObject {
    CIFilter * _absoluteDiffFilter;
    CIContext * _ciContext;
    CIFilter * _contrastFilter;
    unsigned long long  _currentImageHeight;
    unsigned long long  _currentImageWidth;
    VNDetectContoursRequest * _detectContoursRequest;
    CIFilter * _dilateFilter;
    float  _dilateRadius;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameAnalysisSpacing;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAnalyzedFramePTS;
    unsigned long long  _maximumImageDimension;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextFrameToBeAnalyzedPTS;
    ParabolaDetection * _parabolaDetector;
    float  _preScaleFactor;
    VNImageBuffer * _previousFrameBuffer;
    CIImage * _previousFrameImage;
    bool  _processAllFrames;
    struct CGColorSpace { } * _sRGB;
    CIFilter * _thresholdFilter;
}

- (void).cxx_destruct;
- (id)_VNPointsFromCGPoints:(const void*)arg1;
- (struct __CVBuffer { }*)_createCroppedAndScaledBufferFromVNImageBuffer:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withOptions:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)initWithFrameAnalysisSpacing:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trajectoryLength:(long long)arg2;
- (id)processVNImageBuffer:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withOptions:(id)arg3 warningRecorder:(id)arg4 requestUUID:(id)arg5 error:(id*)arg6;

@end
