
@interface PTMSRResizeAdditionalOutput : NSObject {
    struct __IOSurface { } * _ioSurface;
    struct __CVBuffer { } * _pixelbuffer;
    int  _sourcePyramidIndex;
}

@property struct __IOSurface { }*ioSurface;
@property struct __CVBuffer { }*pixelbuffer;
@property int sourcePyramidIndex;

- (void)dealloc;
- (id)initWithSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 colorSpace:(struct CGColorSpace { }*)arg2;
- (struct __IOSurface { }*)ioSurface;
- (struct __CVBuffer { }*)pixelbuffer;
- (void)setIoSurface:(struct __IOSurface { }*)arg1;
- (void)setPixelbuffer:(struct __CVBuffer { }*)arg1;
- (void)setSourcePyramidIndex:(int)arg1;
- (int)sourcePyramidIndex;

@end
