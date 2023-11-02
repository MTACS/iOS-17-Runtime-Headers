
@interface ABPKImageData : NSObject {
    void pixelBuffer;
    void timestamp;
}

@property (nonatomic, retain) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 timestamp:(double)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
