
@interface IMEmbeddedHardwareJPEGTranscoder : NSObject {
    bool  _canHardwareScaleImage;
    NSData * _imageData;
    struct __CFDictionary { } * _imageProperties;
    struct __IOSurface { } * _ioSurfaceRef;
    double  _targetJPEGCompressionValue;
}

@property (nonatomic) double targetJPEGCompressionValue;

- (bool)_decodeImageToIOSurface;
- (bool)_isJPEGImage:(struct CGImageSource { }*)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource { }*)arg2;
- (bool)scaleImageToFitLargestDimension:(id)arg1 outputData:(id*)arg2;
- (void)setTargetJPEGCompressionValue:(double)arg1;
- (double)targetJPEGCompressionValue;

@end
