
@interface PTAssetReaderComposedFrame : NSObject {
    struct __CVBuffer { } * _auxBuffer;
    struct __CVBuffer { } * _colorBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (nonatomic, readonly) struct __CVBuffer { }*auxBuffer;
@property (nonatomic, readonly) struct __CVBuffer { }*colorBuffer;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (struct __CVBuffer { }*)auxBuffer;
- (struct __CVBuffer { }*)colorBuffer;
- (void)dealloc;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 colorBuffer:(struct __CVBuffer { }*)arg2 auxBuffer:(struct __CVBuffer { }*)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
