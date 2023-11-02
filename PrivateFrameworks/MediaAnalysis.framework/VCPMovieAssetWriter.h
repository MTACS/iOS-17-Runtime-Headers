
@interface VCPMovieAssetWriter : NSObject {
    AVAsset * _asset;
    AVAssetReader * _assetReader;
    AVAssetWriterInput * _audioInput;
    AVAssetReaderTrackOutput * _audioOutput;
    NSObject<OS_dispatch_queue> * _audioQueue;
    AVAssetTrack * _audioTrack;
    NSObject<OS_dispatch_semaphore> * _dequeueSemaphore;
    bool  _enableAudio;
    NSObject<OS_dispatch_group> * _encodingGroup;
    NSObject<OS_dispatch_semaphore> * _enqueueSemaphore;
    AVAssetWriterInput * _input;
    NSMapTable * _inputToOutputMap;
    NSObject<OS_dispatch_semaphore> * _livePhotoInfoDequeueSemaphore;
    NSObject<OS_dispatch_semaphore> * _livePhotoInfoEnqueueSemaphore;
    AVAssetWriterInput * _livePhotoInfoInput;
    NSMutableArray * _livePhotoInfoQueue;
    NSObject<OS_dispatch_queue> * _metadataQueue;
    struct CF<__CVPixelBufferPool *> { 
        struct __CVPixelBufferPool {} *value_; 
    }  _pixelBufferPool;
    NSMutableArray * _sampleQueue;
    long long  _status;
    NSObject<OS_dispatch_queue> * _statusOperationQueue;
    AVAssetWriterInput * _stillImageInput;
    AVAssetReaderTrackOutput * _stillImageOutput;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillPTS;
    AVAssetTrack * _track;
    struct CF<OpaqueVTPixelTransferSession *> { 
        struct OpaqueVTPixelTransferSession {} *value_; 
    }  _transferSession;
    AVAssetWriterInput * _videoOrientationInput;
    AVAssetReaderTrackOutput * _videoOrientationOutput;
    NSObject<OS_dispatch_queue> * _videoQueue;
    AVAssetWriter * _writer;
}

@property (readonly) long long status;

+ (id)assetWriterWithURL:(id)arg1 andTrack:(id)arg2 andBitrate:(long long)arg3 withOutputSize:(struct CGSize { double x1; double x2; })arg4 enableAudio:(bool)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)addLivePhotoInfoBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)addPixelBuffer:(struct __CVBuffer { }*)arg1 withTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withAttachment:(id)arg3;
- (int)appendMetadataTrack;
- (void)cancel;
- (int)copyPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer {}**)arg2;
- (void)dealloc;
- (int)dispatchEncoding;
- (int)finish;
- (id)initWithURL:(id)arg1 andTrack:(id)arg2 andBitrate:(long long)arg3 withOutputSize:(struct CGSize { double x1; double x2; })arg4 enableAudio:(bool)arg5;
- (int)passthroughMetadataTrackFrom:(id)arg1 to:(id)arg2;
- (struct opaqueCMSampleBuffer { }*)popLivePhotoInfoSample;
- (struct opaqueCMSampleBuffer { }*)popSample;
- (int)processLivePhotoInfoMetadataTrack;
- (int)processStillImageMetadataTrack;
- (void)pushLivePhotoInfoSample:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)pushSample:(struct opaqueCMSampleBuffer { }*)arg1;
- (int)setupAudioTrack;
- (int)setupMetadataTrack;
- (int)setupVideoTrack:(long long)arg1 withOutputSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)status;
- (void)updateStillPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
