
@interface BWPhotoDecompressor : NSObject {
    NSMutableDictionary * _decompressionOptions;
    struct __CVBuffer { } * _decompressionPixelBufferPool;
    struct CMPhotoDecompressionSession { } * _decompressionSession;
    bool  _decompressionSetupIsComplete;
    struct CMPhotoSurfacePool { } * _decompressionSurfacePool;
    bool  _forceAllocationsFromFigSurfacePool;
    int  _outputLargestDimension;
    BWPixelBufferPool * _outputPixelBufferPool;
    unsigned int  _outputPixelFormat;
    int  _poolSize;
    struct opaqueCMFormatDescription { } * _uncompressedFormatDescription;
}

@property (readonly) BWPixelBufferPool *outputPixelBufferPool;

- (void)dealloc;
- (void)flush;
- (id)initWithOutputPixelBufferPool:(id)arg1;
- (id)initWithPoolSize:(int)arg1 outputPixelFormat:(unsigned int)arg2 outputLargestDimension:(int)arg3;
- (struct __CVBuffer { }*)newUncompressedPixelBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct opaqueCMSampleBuffer { }*)newUncompressedSampleBufferFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)outputPixelBufferPool;

@end
