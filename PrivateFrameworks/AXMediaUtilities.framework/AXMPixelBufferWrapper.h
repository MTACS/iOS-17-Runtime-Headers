
@interface AXMPixelBufferWrapper : NSObject {
    unsigned int  _orientation;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } orientedSize;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } unorientedSize;

+ (id)new;
+ (id)wrapperWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2;

- (id)_initWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2;
- (void)dealloc;
- (id)init;
- (unsigned int)orientation;
- (struct CGSize { double x1; double x2; })orientedSize;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct CGSize { double x1; double x2; })unorientedSize;

@end
