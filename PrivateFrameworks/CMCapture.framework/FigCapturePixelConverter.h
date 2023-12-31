
@interface FigCapturePixelConverter : NSObject {
    bool  _alwaysUseHardwareForConversion;
    BWVideoFormat * _outputFormat;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    BWPixelBufferPool * _pool;
    int  _poolCapacity;
    bool  _prefetchPool;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

@property (nonatomic, readonly) BWVideoFormat *outputFormat;

+ (void)initialize;

- (int)convertPixelBuffer:(struct __CVBuffer { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 allocateOutputFromBufferPool:(bool)arg3 outputPixelBuffer:(struct __CVBuffer {}**)arg4;
- (int)convertSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 outputSampleBuffer:(struct opaqueCMSampleBuffer {}**)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithPrefetchPool:(bool)arg1;
- (id)outputFormat;
- (int)updateOutputPixelFormat:(unsigned int)arg1 dimensions:(struct { int x1; int x2; })arg2 poolCapacity:(int)arg3 colorSpaceProperties:(int)arg4 alwaysUseHardwareForConversion:(bool)arg5;

@end
