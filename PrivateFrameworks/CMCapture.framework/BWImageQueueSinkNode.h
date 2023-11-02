
@interface BWImageQueueSinkNode : BWSinkNode {
    bool  _CAVSyncIntervalWorkaroundEnabled;
    NSMutableArray * _bufferIDsInQueue;
    BWFigVideoCaptureDevice * _captureDevice;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    int  _clientPID;
    bool  _didCallFirstFrameAtHostTimeCallback;
    bool  _didCallFirstFrameCallback;
    bool  _didLogFirstOverCaptureFrame;
    bool  _driftCompensationTimestampFilteringEnabled;
    unsigned long long  _enqueuedBufferContextCount;
    struct _EnqueuedBufferContext {} ** _enqueuedBufferContexts;
    bool  _fasterLatencyRecoveryEnabled;
    bool  _fencePortGenerationIDWillChange;
    bool  _fenceSupportEnabled;
    long long  _firstFrameHostTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstFramePTS;
    long long  _firstOverCaptureFrameHostTime;
    BWStats * _frameDisplayLatencyStats;
    CMCaptureFrameSenderService * _frameSender;
    int  _framesSinceLastFence;
    int  _framesSinceLastFenceIDWillChange;
    unsigned long long  _framesSinceLastHarmonicCompensation;
    bool  _highLatencyJitterHandlingEnabled;
    NSObject<OS_os_transaction> * _holdingBuffersForClientAssertion;
    struct _CAImageQueue { } * _imageQueue;
    unsigned int  _imageQueueCapacity;
    CAContext * _imageQueueContext;
    unsigned long long  _imageQueueCurrentFreeSlots;
    unsigned int  _imageQueueHeight;
    unsigned int  _imageQueueRequiredFreeSlots;
    unsigned int  _imageQueueSlot;
    unsigned int  _imageQueueWidth;
    double  _lastDisplaySamplingTime;
    double  _lastDisplayTime;
    double  _lastDisplayVSyncInterval;
    long long  _lastFencedGenerationID;
    double  _lastFramePTS;
    double  _lastHarmonicFractionalVSyncInterval;
    double  _lateFrameIntervalStartPTS;
    int  _maxLossyCompressionLevel;
    unsigned long long  _numFramesReceived;
    unsigned long long  _numFramesReceivedBeforeFirstDisplayTimeout;
    NSMutableArray * _previewPTSHistory;
    struct OpaqueFigSimpleMutex { } * _previewPTSHistoryMutex;
    NSObject<OS_dispatch_queue> * _previewPTSHistoryQueue;
    struct OpaqueBWPreviewSynchronizer { } * _previewSynchronizer;
    <BWImageQueueSinkNodePreviewTapDelegate> * _previewTapDelegate;
    double  _previousFrameDuration;
    bool  _resetPreviewSynchronizerOnNextFrame;
    int  _savedSyncStrategy;
    unsigned long long * _sharedBufferIDs;
    unsigned long long  _sharedSurfaceCount;
    NSMutableArray * _sharedSurfaces;
    struct OpaqueFigSimpleMutex { } * _surfaceRegistrationMutex;
    int  _syncStrategy;
    struct FigCaptureVideoTransform { 
        bool mirrored; 
        int rotationDegrees; 
        struct { 
            int width; 
            int height; 
        } dimensions; 
    }  _transform;
    bool  _videoHDRImageStatisticsEnabled;
}

@property (nonatomic, retain) BWFigVideoCaptureDevice *captureDevice;
@property (nonatomic, readonly) struct _CAImageQueue { }*imageQueue;
@property (nonatomic, readonly) unsigned int imageQueueSlot;
@property (nonatomic) <BWImageQueueSinkNodePreviewTapDelegate> *previewTapDelegate;

+ (void)initialize;

- (id)captureDevice;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)fencePortGenerationIDWillChange;
- (bool)fenceSupportEnabled;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (bool)hasNonLiveConfigurationChanges;
- (struct _CAImageQueue { }*)imageQueue;
- (unsigned int)imageQueueSlot;
- (id)initWithHFRSupport:(bool)arg1 ispJitterCompensationEnabled:(bool)arg2 clientAuditToken:(struct { unsigned int x1[8]; })arg3 sinkID:(id)arg4;
- (void)inputConnectionWillBeEnabled;
- (void)makeCurrentConfigurationLive;
- (int)maxLossyCompressionLevel;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previewPTSAtHostTime:(unsigned long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })previewPTSDisplayedAtHostTime:(unsigned long long)arg1 allowingExtrapolation:(bool)arg2;
- (id)previewTapDelegate;
- (void)registerSurfacesFromSourcePool:(id)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setCaptureDevice:(id)arg1;
- (void)setFenceSupportEnabled:(bool)arg1;
- (void)setMaxLossyCompressionLevel:(int)arg1;
- (void)setPreviewTapDelegate:(id)arg1;
- (void)setSyncStrategy:(int)arg1;
- (void)setTransform:(struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })arg1;
- (void)setVideoHDRImageStatisticsEnabled:(bool)arg1;
- (int)syncStrategy;
- (struct FigCaptureVideoTransform { bool x1; int x2; struct { int x_3_1_1; int x_3_1_2; } x3; })transform;
- (bool)videoHDRImageStatisticsEnabled;

@end
