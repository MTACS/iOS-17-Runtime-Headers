
@interface VKViewVolume : NSObject {
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    }  _corners;
}

@property (nonatomic, readonly) const void*corners;

- (id).cxx_construct;
- (const void*)corners;
- (struct Matrix<double, 3, 1> { double x1[3]; })lerpPoint:(float*)arg1;
- (void)updateWithFrustum:(struct { bool x1; double x2; double x3; double x4; double x5; double x6; })arg1 matrix:(const void*)arg2;

@end
