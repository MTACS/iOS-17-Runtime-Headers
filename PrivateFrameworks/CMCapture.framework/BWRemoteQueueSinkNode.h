
@interface BWRemoteQueueSinkNode : BWSinkNode {
    BWVideoDataOutputAnalyticsPayload * _analyticsPayload;
    bool  _attachDetectedObjectsInfo;
    bool  _attachPanoramaMetadata;
    struct opaqueCMFormatDescription { } * _cachedFormatDescription;
    bool  _cameraSupportsFlash;
    NSString * _clientApplicationID;
    bool  _clientIsRunningInMediaserverd;
    int  _clientVideoRetainedBufferCount;
    <BWRemoteQueueSinkNodeDelegate> * _delegate;
    bool  _disableFlatDictionaryVDOMetadata;
    bool  _discardsLateSampleBuffers;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstPTS;
    CMCaptureFrameSenderService * _frameSender;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPTS;
    struct localQueueOpaque { } * _localQueue;
    struct OpaqueFigFlatDictionaryKeySpec { } * _makerNoteKeySpec;
    bool  _mediaTypeIsPointCloud;
    bool  _mediaTypeIsVideo;
    unsigned int  _numberOfMediaBuffersLocallyDequeued;
    unsigned int  _numberOfMediaBuffersLocallyEnqueued;
    bool  _panoramaRequiresLTMLocking;
    struct OpaqueFigSimpleMutex { } * _peerTerminationMutex;
    bool  _proresVideo;
    struct { 
        unsigned int val[8]; 
    }  _receiverAuditToken;
    int  _receiverPID;
    struct remoteQueueSenderOpaque { } * _remoteQueueSender;
    bool  _removeCameraIntrinsicMatrixAttachment;
    FigCaptureTrie * _requestedBufferAttachmentsTrie;
    bool  _sentDiagnosticMetadataForPanorama;
    struct shmemPoolOpaque { } * _sharedMemoryPool;
    struct __CFAllocator { } * _sharedMemoryPoolCFAllocator;
    BWSceneStabilityMonitor * _stabilityMonitor;
    long long  _totalNumberOfFrames;
    long long  _totalNumberOfFramesDropped;
    long long  _totalNumberOfISPFramesDropped;
}

@property (nonatomic) <BWRemoteQueueSinkNodeDelegate> *delegate;

+ (void)initialize;

- (bool)attachPanoramaMetadata;
- (bool)cameraSupportsFlash;
- (int)clientVideoRetainedBufferCount;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didReachEndOfDataForInput:(id)arg1;
- (bool)discardsLateSampleBuffers;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1 clientAuditToken:(struct { unsigned int x1[8]; })arg2 sinkID:(id)arg3;
- (id)nodeSubType;
- (bool)panoramaRequiresLTMLocking;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)registerSurfacesFromSourcePool:(id)arg1;
- (bool)removeCameraIntrinsicMatrixAttachment;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)requestedBufferAttachmentsTrie;
- (bool)sceneStabilityMetadataEnabled;
- (void)setAttachPanoramaMetadata:(bool)arg1;
- (void)setCameraSupportsFlash:(bool)arg1;
- (void)setClientVideoRetainedBufferCount:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscardsLateSampleBuffers:(bool)arg1;
- (void)setPanoramaRequiresLTMLocking:(bool)arg1;
- (void)setRemoveCameraIntrinsicMatrixAttachment:(bool)arg1;
- (void)setRequestedBufferAttachmentsTrie:(id)arg1;
- (void)setSceneStabilityMetadataEnabled:(bool)arg1;

@end
