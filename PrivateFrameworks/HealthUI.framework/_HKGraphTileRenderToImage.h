
@interface _HKGraphTileRenderToImage : NSObject {
    unsigned int  _bitmapInfo;
    unsigned long long  _bufferSize;
    unsigned long long  _bytesPerRow;
    struct CGColorSpace { } * _colorSpace;
    struct CGContext { } * _drawingContext;
    unsigned long long  _heightInPixels;
    bool  _invertedYAxis;
    struct CGImage { } * _lastRenderedImage;
    void * _rawBufferBytes;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeInPoints;
    unsigned long long  _widthInPixels;
}

@property (nonatomic, readonly) unsigned int bitmapInfo;
@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) struct CGColorSpace { }*colorSpace;
@property (nonatomic, readonly) struct CGContext { }*drawingContext;
@property (nonatomic, readonly) unsigned long long heightInPixels;
@property (nonatomic, readonly) bool invertedYAxis;
@property (nonatomic, readonly) struct CGImage { }*lastRenderedImage;
@property (nonatomic, readonly) void*rawBufferBytes;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPoints;
@property (nonatomic, readonly) unsigned long long widthInPixels;

- (unsigned int)bitmapInfo;
- (unsigned long long)bufferSize;
- (unsigned long long)bytesPerRow;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (struct CGImage { }*)drawToImage:(id /* block */)arg1;
- (struct CGContext { }*)drawingContext;
- (unsigned long long)heightInPixels;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 invertedYAxis:(bool)arg3;
- (bool)invertedYAxis;
- (struct CGImage { }*)lastRenderedImage;
- (void*)rawBufferBytes;
- (double)scale;
- (struct CGSize { double x1; double x2; })sizeInPoints;
- (unsigned long long)widthInPixels;

@end
