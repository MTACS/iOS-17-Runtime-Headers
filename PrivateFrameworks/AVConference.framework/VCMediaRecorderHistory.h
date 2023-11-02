
@interface VCMediaRecorderHistory : NSObject <VCMediaRecorderHistoryBufferDelegate> {
    struct __CFAllocator { } * _audioSampleBufferAllocator;
    struct __CVPixelBufferPool { } * _bufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _bufferPoolResolution;
    int  _captureHeight;
    int  _captureWidth;
    NSMutableDictionary * _completionHandlers;
    struct __CVPixelBufferPool { } * _copyPool;
    struct OpaqueVTPixelTransferSession { } * _copyTransferSession;
    struct __CFAllocator { } * _frameAllocator;
    VCMediaRecorderHistoryBuffer * _frameBuffer;
    int  _imageType;
    bool  _isFirstFrame;
    VCMediaRecorderHistoryBuffer * _localAudioBuffer;
    struct tagVCMediaRecorderHistoryAudioFormat { 
        struct opaqueCMFormatDescription {} *figFormat; 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } basicFormat; 
    }  _localFormat;
    NSString * _masterTransactionID;
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _recordingQueue;
    VCMediaRecorderHistoryBuffer * _remoteAudioBuffer;
    struct tagVCMediaRecorderHistoryAudioFormat { 
        struct opaqueCMFormatDescription {} *figFormat; 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } basicFormat; 
    }  _remoteFormat;
    bool  _resize;
    bool  _retainPixelBufferEnabled;
    NSMutableDictionary * _stillImageURLs;
    VideoAttributes * _targetScreenAttributes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _targetScreenAttributesLock;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    int  _videoCodec;
    <VCMovieWriterProtocol> * _writer;
    NSMutableDictionary * _writers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageType;
@property (readonly) Class superclass;
@property (nonatomic) int videoCodec;

- (id)_getActiveWriters;
- (unsigned char)_mediaTypeForBuffer:(id)arg1;
- (void)appendSampleWithWriter:(id)arg1 buffer:(id)arg2 sample:(struct opaqueCMSampleBuffer { }*)arg3 mediaType:(unsigned char)arg4;
- (void)cancelRequestWithTransactionID:(id)arg1;
- (void)cleanupTransferSession;
- (void)dealloc;
- (void)endRecording:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)flushHistoryBuffers;
- (id)getFilePathWithTransactionID:(id)arg1 type:(unsigned char)arg2;
- (void)getLivePhotoWithTransactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)getPhotoWithTransactionID:(id)arg1 timestamp:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)handlePendingRequestSuccessWithSourceURL:(id)arg1;
- (void)handlePendingRequestWithError:(id)arg1;
- (void)handlePendingRequestsWithSourceURL:(id)arg1 error:(id)arg2;
- (void)handleSinglePendingRequestWithTransactionID:(id)arg1 sourceURL:(id)arg2;
- (void)historyBuffer:(id)arg1 didDequeueSample:(struct opaqueCMSampleBuffer { }*)arg2 timestamp:(unsigned int)arg3;
- (int)imageType;
- (id)init;
- (void)registerDirectoryWithFilePath:(id)arg1;
- (int)rewriteMovieMetadataWithURL:(id)arg1 transactionID:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1 forTransactionID:(id)arg2;
- (void)setFrameRate:(float)arg1;
- (void)setImageType:(int)arg1;
- (void)setVideoCodec:(int)arg1;
- (void)setupResizingSessionsWithVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cameraStatusBit:(unsigned char)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })setupStillImageWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 cameraStatusBit:(char *)arg4 imageType:(int)arg5;
- (void)setupWriterWithTransactionID:(id)arg1 filePath:(id)arg2 stillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 cameraStatusBit:(unsigned char)arg5;
- (void)startRecording:(unsigned char)arg1 transactionID:(id)arg2 timestamp:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (int)videoCodec;
- (bool)writeToFileWithTimestamp:(unsigned int)arg1 transactionID:(id)arg2 URL:(id*)arg3 imageType:(int)arg4;
- (bool)writeToLivePhotoToFileWithFrame:(struct __CVBuffer { }*)arg1 transactionID:(id)arg2 URL:(id*)arg3 imageType:(int)arg4 cameraStatusBits:(unsigned char)arg5;

@end
