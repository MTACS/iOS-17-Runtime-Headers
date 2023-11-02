
@interface MADMattedFrame : NSObject {
    struct __CVBuffer { } * _pixelBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimestamp;
}

@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimestamp;

- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 presentationTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimestamp;

@end
