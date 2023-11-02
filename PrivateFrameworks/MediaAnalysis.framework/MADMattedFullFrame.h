
@interface MADMattedFullFrame : NSObject {
    double  _confidence;
    struct __CVBuffer { } * _pixelBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimestamp;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimestamp;

- (double)confidence;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 presentationTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 confidence:(double)arg3;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimestamp;
- (void)setPresentationTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
