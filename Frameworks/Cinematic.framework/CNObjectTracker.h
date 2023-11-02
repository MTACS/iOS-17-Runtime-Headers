
@interface CNObjectTracker : NSObject {
    PTTapToTrack * _internalTapToTrack;
}

@property (retain) PTTapToTrack *internalTapToTrack;

+ (bool)isSupported;

- (void).cxx_destruct;
- (id)continueTrackingAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 sourceImage:(struct __CVBuffer { }*)arg2 sourceDisparity:(struct __CVBuffer { }*)arg3;
- (id)findObjectAtPoint:(struct CGPoint { double x1; double x2; })arg1 sourceImage:(struct __CVBuffer { }*)arg2;
- (id)finishDetectionTrack;
- (id)initWithCommandQueue:(id)arg1;
- (id)internalTapToTrack;
- (void)resetDetectionTrack;
- (void)setInternalTapToTrack:(id)arg1;
- (bool)startTrackingAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 within:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 sourceImage:(struct __CVBuffer { }*)arg3 sourceDisparity:(struct __CVBuffer { }*)arg4;

@end
