
@interface TimedBuffer : NSObject {
    struct __CVBuffer { } * _buffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timestamp;
}

@property (nonatomic) struct __CVBuffer { }*buffer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } timestamp;

- (struct __CVBuffer { }*)buffer;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 atTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timestamp;

@end
