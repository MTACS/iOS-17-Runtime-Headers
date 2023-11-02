
@interface ADDepthScaler : NSObject {
    float  _interpThreshold;
    float  _noDepthOutputValue;
}

@property (nonatomic, readonly) float interpThreshold;
@property (nonatomic, readonly) float noDepthOutputValue;

+ (id)defaultScaler;
+ (id)scalerWithInterpThreshold:(float)arg1 andNoDepthOutputValue:(float)arg2;

- (float)interpThreshold;
- (float)noDepthOutputValue;
- (long long)scaleDepthBuffer:(struct __CVBuffer { }*)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toBuffer:(struct __CVBuffer { }*)arg3;
- (long long)scaleDepthBuffer:(struct __CVBuffer { }*)arg1 withZoomFactor:(float)arg2 toBuffer:(struct __CVBuffer { }*)arg3;

@end
