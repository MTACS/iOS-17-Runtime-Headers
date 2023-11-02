
@interface CFXFrame : NSObject {
    ARFrame * _arFrame;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _latency;
    struct __CVBuffer { } * _pixelBuffer;
    PVFrameSet * _pvFrameSet;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _requestTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic, retain) ARFrame *arFrame;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } latency;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, retain) PVFrameSet *pvFrameSet;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } requestTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (void).cxx_destruct;
- (id)arFrame;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithARFrame:(id)arg1;
- (id)initWithFrameSet:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFrame:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })latency;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)pvFrameSet;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requestTime;
- (void)setArFrame:(id)arg1;
- (void)setLatency:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setPvFrameSet:(id)arg1;
- (void)setRequestTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
