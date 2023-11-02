
@interface ARImageScalePass : NSObject {
    unsigned int  _conversionPixelFormatType;
    struct __CVPixelBufferPool { } * _scaledPixelBufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledSize;
    struct OpaqueVTPixelTransferSession { } * _vtPixelTransferSession;
}

@property (nonatomic, readonly) unsigned int conversionPixelFormatType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } scaledSize;

- (unsigned int)conversionPixelFormatType;
- (void)dealloc;
- (id)initWithDescription:(id)arg1;
- (struct __CVBuffer { }*)scalePixelBuffer:(struct __CVBuffer { }*)arg1;
- (struct CGSize { double x1; double x2; })scaledSize;
- (void)setConversionPixelFormatType:(unsigned int)arg1;

@end
