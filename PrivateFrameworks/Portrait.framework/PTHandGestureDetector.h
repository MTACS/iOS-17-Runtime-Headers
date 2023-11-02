
@interface PTHandGestureDetector : NSObject {
    <PTHandGestureDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    bool  _useExternalHandDetections;
    VCPHandGestureVideoRequest * _vcpHandGestureRequest;
}

@property <PTHandGestureDelegate> *delegate;
@property (retain) VCPHandGestureVideoRequest *vcpHandGestureRequest;

- (void).cxx_destruct;
- (id)delegate;
- (void)detectGesturesFromBuffer:(struct __CVBuffer { }*)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withRotationDegrees:(int)arg3 withDetectedHands:(id)arg4 withDetectedFaces:(id)arg5;
- (struct CGSize { double x1; double x2; })frameSize;
- (id)initWithFrameSize:(struct CGSize { double x1; double x2; })arg1 asyncInitQueue:(id)arg2 externalHandDetectionsEnabled:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setVcpHandGestureRequest:(id)arg1;
- (id)vcpHandGestureRequest;

@end
