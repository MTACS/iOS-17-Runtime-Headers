
@interface BufferWithTimestamp : NSObject {
    struct __CVBuffer { } * _pixelBuffer;
    double  _timestamp;
}

@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) double timestamp;

- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 timstamp:(double)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (double)timestamp;

@end
