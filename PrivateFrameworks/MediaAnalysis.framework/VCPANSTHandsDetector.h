
@interface VCPANSTHandsDetector : NSObject {
    ANSTISPAlgorithm * _anstAlgorithm;
    float  _extendRatio;
    struct Rotator { struct __CVPixelBufferPool {} *x1; int x2; int x3; int x4; struct OpaqueVTPixelRotationSession {} *x5; } * _rotator;
}

+ (id)anstHandsDetectorWithExtendRatio:(float)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (int)handsDetection:(struct __CVBuffer { }*)arg1 rotationInDegrees:(id)arg2 handsRegions:(id)arg3 cancel:(id /* block */)arg4;
- (id)initWithExtendRatio:(float)arg1;

@end
