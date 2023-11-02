
@interface SIPixelBufferWrapper : NSObject {
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic) struct __CVBuffer { }*pixelBuffer;

- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithResolution:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithResolution:(struct CGSize { double x1; double x2; })arg1 pixelformat:(unsigned int)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
