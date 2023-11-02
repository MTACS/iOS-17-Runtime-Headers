
@interface BWIntermediateJPEGCompressor : NSObject {
    NSObject<OS_dispatch_semaphore> * _backPressureSemaphore;
    unsigned long long  _compressedBufferPoolAllocationTimeoutMS;
    unsigned long long  _compressedBufferSize;
    struct __CFDictionary { } * _compressionOptions;
    float  _compressionQuality;
    float  _compressionRate;
    struct CMPhotoCompressionSession { } * _compressionSession;
    struct __CFDictionary { } * _containerOptions;
    struct opaqueCMFormatDescription { } * _jpegFormatDescription;
    int  _jpegSurfacePoolHighWaterBufferCount;
    int  _jpegSurfacePoolLowWaterBufferCount;
    NSString * _name;
    int  _numberOfTimesWaitedOnBackPressureSemaphore;
    BWStats * _overallWaitStats;
    NSMutableDictionary * _qualityControllerParameters;
    BWMovingWindowStats * _recentWaitStats;
    bool  _setupIsComplete;
    struct CMPhotoSurfacePool { } * _surfacePool;
}

+ (void)initialize;

- (void)dealloc;
- (void)flush;
- (id)initWithCompressionQuality:(float)arg1 compressionRate:(float)arg2 jpegSurfacePoolLowWaterBufferCount:(int)arg3 jpegSurfacePoolHighWaterBufferCount:(int)arg4 compressedBufferPoolAllocationTimeoutMS:(unsigned long long)arg5 name:(id)arg6;
- (struct opaqueCMSampleBuffer { }*)newJPEGSampleBufferFromUncompressedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
