
@interface VCFigAssetWriter : VCObject <VCMovieWriterProtocol> {
    struct OpaqueFigAssetWriter { } * _assetWriter;
    struct __CVPixelBufferPool { } * _bufferPool;
    unsigned int  _codec;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    struct __CFArray { } * _earlyLocalAudioBuffers;
    struct __CFArray { } * _earlyRemoteAudioBuffers;
    unsigned int  _endRTPTimeStamp;
    bool  _isEndRTPTimestampSet;
    double  _keyFrameIntervalDuration;
    int  _localAudioTrackID;
    int  _metadataTrackID;
    NSURL * _outputURL;
    int  _remoteAudioTrackID;
    bool  _resize;
    unsigned int  _startRTPTimeStamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    unsigned int  _state;
    unsigned char  _stillImageCameraStatusBit;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
    NSString * _transactionID;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    int  _videoTrackID;
    unsigned char  _writerMode;
}

@property unsigned int endRTPTimeStamp;
@property (nonatomic, retain) NSURL *outputURL;
@property unsigned int startRTPTimeStamp;
@property (readonly) unsigned char writerMode;

- (int)_setupWriter;
- (void)appendAudioBufferList:(struct __CFArray { }*)arg1 type:(unsigned char)arg2;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 mediaType:(unsigned char)arg2;
- (void)appendEarlyAudioBuffers;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
- (void)collectEarlyAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 type:(unsigned char)arg2;
- (struct OpaqueVTCompressionSession { }*)compressionSessionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)dealloc;
- (int)encodeAndAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned int)endRTPTimeStamp;
- (void)finishWritingWithHandler:(id /* block */)arg1;
- (id)initWithOutputURL:(id)arg1 transactionID:(id)arg2 videoCodec:(unsigned int)arg3 keyFrameIntervalDuration:(double)arg4;
- (id)outputURL;
- (void)setEndRTPTimeStamp:(unsigned int)arg1;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setStartRTPTimeStamp:(unsigned int)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillImageTimeInternal;
- (void)setupLivePhotoStillImageCameraStatusBit:(unsigned char)arg1 resize:(bool)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (void)setupWriterWithMode:(unsigned char)arg1;
- (bool)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2 mediaType:(unsigned char)arg3;
- (bool)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2 mediaType:(unsigned char)arg3;
- (unsigned int)startRTPTimeStamp;
- (int)trackIDForMediaType:(unsigned char)arg1;
- (int)trackIDForWriterMode:(unsigned char)arg1;
- (void)writeIdentifierMetadata:(id)arg1;
- (unsigned char)writerMode;

@end
