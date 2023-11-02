
@interface PTTapToTrack : NSObject {
    NSMutableArray * _detections;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _tmpCurrentRect;
    FTCinematicTapToTrack * _tracker;
}

@property (nonatomic, retain) NSMutableArray *detections;

+ (bool)isSupported;

- (void).cxx_destruct;
- (bool)addDetectionAndStartTrackingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 colorBuffer:(struct __CVBuffer { }*)arg3 disparityBuffer:(struct __CVBuffer { }*)arg4;
- (void)addDetectionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 disparityBuffer:(struct __CVBuffer { }*)arg3;
- (id)addDetectionForNextFrameAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 colorBuffer:(struct __CVBuffer { }*)arg2 disparityBuffer:(struct __CVBuffer { }*)arg3;
- (id)detections;
- (id)finalizeTrack;
- (id)getRectForPoint:(struct CGPoint { double x1; double x2; })arg1 colorBuffer:(struct __CVBuffer { }*)arg2;
- (id)initWithCommandQueue:(id)arg1;
- (void)resetTrack;
- (void)setDetections:(id)arg1;

@end
