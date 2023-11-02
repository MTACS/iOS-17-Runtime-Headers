
@interface MOVStreamFrame : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cmTimeStamp;
    id  _context;
    struct __CVBuffer { } * _pixelBuffer;
    double  _timeStamp;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } cmTimeStamp;
@property (readonly) id context;
@property (readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) double timeStamp;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cmTimeStamp;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 timeStamp:(double)arg2 context:(id)arg3;
- (struct __CVBuffer { }*)pixelBuffer;
- (double)timeStamp;

@end
