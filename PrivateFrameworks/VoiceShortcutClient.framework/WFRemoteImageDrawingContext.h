
@interface WFRemoteImageDrawingContext : NSObject <NSSecureCoding> {
    unsigned long long  _bitsPerComponent;
    void * _buffer;
    unsigned long long  _bufferSize;
    struct CGColorSpace { } * _colorSpace;
    bool  _drawAlphaOnly;
    unsigned long long  _imageCount;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _singleImageSize;
}

@property (nonatomic, readonly) unsigned int bitmapInfo;
@property (nonatomic, readonly) unsigned long long bitsPerComponent;
@property (nonatomic, readonly) void*buffer;
@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) struct CGColorSpace { }*colorSpace;
@property (nonatomic, readonly) bool drawAlphaOnly;
@property (nonatomic, readonly) unsigned long long imageCount;
@property (nonatomic, readonly) unsigned long long numberOfComponents;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } singleImageSize;
@property (nonatomic, readonly) unsigned long long sizePerImage;

+ (bool)supportsSecureCoding;

- (void)accessBitmapContextForImageAtIndex:(unsigned long long)arg1 accessBlock:(id /* block */)arg2;
- (bool)allocateSharedBuffer;
- (unsigned int)bitmapInfo;
- (unsigned long long)bitsPerComponent;
- (void*)buffer;
- (unsigned long long)bufferSize;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (bool)drawAlphaOnly;
- (void)encodeWithCoder:(id)arg1;
- (struct CGImage { }*)imageAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageCount;
- (id)initWithAlphaOnlyImageCount:(unsigned long long)arg1 singleImageSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageCount:(unsigned long long)arg1 singleImageSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)initWithImageCount:(unsigned long long)arg1 singleImageSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 colorSpace:(struct CGColorSpace { }*)arg4 buffer:(void*)arg5 bufferSize:(unsigned long long)arg6 drawAlphaOnly:(bool)arg7;
- (unsigned long long)numberOfComponents;
- (double)scale;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })singleImageSize;
- (unsigned long long)sizePerImage;

@end
