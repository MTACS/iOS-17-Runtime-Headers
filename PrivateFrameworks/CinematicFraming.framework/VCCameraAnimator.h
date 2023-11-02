
@interface VCCameraAnimator : NSObject {
    VCCamera * _animatedCamera;
    struct SpringAnimation<double, 6UL> { 
        double stiffness; 
        double mass; 
        double dampRatio; 
        struct NDVector<double, 6UL> { 
            double arr[6]; 
        } targetValue; 
        struct NDVector<double, 6UL> { 
            double arr[6]; 
        } currValue; 
        struct NDVector<double, 6UL> { 
            double arr[6]; 
        } velocity; 
        double duration; 
    }  _animation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTime;
    VCCamera * _targetCamera;
}

@property (nonatomic, readonly) VCCamera *animatedCamera;
@property (nonatomic, readonly) bool animating;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (nonatomic, readonly) float duration;
@property (nonatomic, readonly) VCCamera *targetCamera;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)animatedCamera;
- (bool)animating;
- (void)configureWithPreset:(unsigned long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (float)duration;
- (id)init;
- (void)interrupt;
- (void)reset;
- (void)startAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withCamera:(id)arg2;
- (void)stop;
- (id)targetCamera;
- (void)updateToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
