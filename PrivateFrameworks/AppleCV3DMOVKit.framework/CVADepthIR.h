
@interface CVADepthIR : NSObject {
    struct __CVBuffer { } * _dataBuffer;
    double  _timestamp;
}

@property (nonatomic) struct __CVBuffer { }*dataBuffer;
@property (nonatomic) double timestamp;

- (struct __CVBuffer { }*)dataBuffer;
- (void)dealloc;
- (id)initWithPixelBufferRef:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2;
- (void)setDataBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
