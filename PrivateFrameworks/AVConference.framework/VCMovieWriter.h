
@interface VCMovieWriter : VCObject <VCMovieWriterProtocol> {
    AVAssetWriterInputMetadataAdaptor * _adapter;
    AVAssetWriter * _assetWriter;
    struct __CVPixelBufferPool { } * _bufferPool;
    unsigned int  _codec;
    id /* block */  _completionHandler;
    unsigned int  _endRTPTimeStamp;
    bool  _hasStillImageMetadataTrack;
    bool  _isEndRTPTimestampSet;
    double  _keyFrameIntervalDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastLocalAudioPresentationTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastRemoteAudioPresentationTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastVideoPresentationTime;
    AVAssetWriterInput * _localAudioInput;
    struct opaqueCMBufferQueue { } * _localAudioQueue;
    unsigned int  _mediaState;
    AVAssetWriterInput * _metadataInput;
    NSURL * _outputURL;
    AVAssetWriterInput * _remoteAudioInput;
    struct opaqueCMBufferQueue { } * _remoteAudioQueue;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    unsigned int  _startRTPTimeStamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
    NSString * _transactionID;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    AVAssetWriterInput * _videoInput;
    struct opaqueCMBufferQueue { } * _videoQueue;
    double  _visibleHeight;
    double  _visibleWidth;
    unsigned char  _writerMode;
    bool  _writingStarted;
}

@property unsigned int endRTPTimeStamp;
@property (nonatomic, retain) NSURL *outputURL;
@property unsigned int startRTPTimeStamp;
@property (readonly) unsigned char writerMode;

- (id)addAudioTrackForLocalAudio:(bool)arg1;
- (id)addStillImageMetadataTrackWithTransactionID:(id)arg1;
- (id)addVideoTrackWithWidth:(int)arg1 height:(int)arg2;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 mediaType:(unsigned char)arg2;
- (void)appendMetaData;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
- (void)cleanupAssetWriter;
- (void)dealloc;
- (unsigned int)endRTPTimeStamp;
- (void)finishWritingWithHandler:(id /* block */)arg1;
- (id)initWithOutputURL:(id)arg1 transactionID:(id)arg2 videoCodec:(unsigned int)arg3 keyFrameIntervalDuration:(double)arg4;
- (id)outputURL;
- (void)processSampleQueue:(struct opaqueCMBufferQueue { }*)arg1 input:(id)arg2 lastPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
- (void)setEndRTPTimeStamp:(unsigned int)arg1;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setStartRTPTimeStamp:(unsigned int)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)setupAssetWriterWithWidth:(int)arg1 height:(int)arg2 transactionID:(id)arg3;
- (id)setupAudioAssetWriterWithTransactionID:(id)arg1;
- (void)setupInput:(id)arg1 queue:(struct opaqueCMBufferQueue { }*)arg2 dispatchGroup:(id)arg3 lastPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;
- (void)setupInputs;
- (id)setupLivePhotoAssetWithTransactionID:(id)arg1;
- (void)setupVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCaptureHeight:(int)arg2;
- (void)setupWriterWithMode:(unsigned char)arg1;
- (bool)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2 mediaType:(unsigned char)arg3;
- (bool)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2 mediaType:(unsigned char)arg3;
- (unsigned int)startRTPTimeStamp;
- (void)startWritingAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (unsigned char)writerMode;

@end
