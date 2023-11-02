
@interface MetalBuffer : NSObject {
    <MTLBuffer> * _buffer;
    double  _lastReuseTime;
}

@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic) double lastReuseTime;

- (void).cxx_destruct;
- (id)buffer;
- (id)initWithBuffer:(id)arg1;
- (double)lastReuseTime;
- (void)setBuffer:(id)arg1;
- (void)setLastReuseTime:(double)arg1;

@end
