
@interface PADAVFrame : NSObject {
    id  _pixelBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic) id pixelBuffer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (void).cxx_destruct;
- (id)pixelBuffer;
- (void)setPixelBuffer:(id)arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
