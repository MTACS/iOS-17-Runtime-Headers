
@interface BWRealtimeCinematographyNode : BWNode <PTCinematographyStreamDelegate> {
    float  _alphaLowLight;
    int  _alphaRampFrameCount;
    int  _autoFocusUpdateFrameDelay;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    BWFigVideoCaptureDevice * _captureDevice;
    BWNodeInput * _captureInput;
    bool  _captureInputEnabled;
    PTCinematographyStream * _cinematographyStream;
    bool  _currentStateIsBrightEnough;
    struct opaqueCMFormatDescription { } * _depthFormatDescription;
    BWNodeOutput * _detectedObjectsOutput;
    int  _framesSinceAutoFocusUpdate;
    PTGlobalCinematographyMetadataVersion1 * _globalCinematographyMetadata;
    PTGlobalVideoMetadata * _globalMetadata;
    PTGlobalRenderingMetadata * _globalRenderingMetadata;
    long long  _globalRenderingMetadataVersion;
    PTGlobalStabilizationMetadataVersion1 * _globalStabilizationMetadata;
    PTGlobalVideoHeaderMetadataVersion1 * _globalVideoHeaderMetadata;
    bool  _globalsWereSet;
    bool  _hasAutoFocus;
    bool  _hasSeenDepth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFixedFocusFinalCropRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFixedFocusRect;
    NSDictionary * _latestDetections;
    long long  _latestFocusDectionTrackID;
    int  _luxLevelThreshold;
    BWNodeOutput * _movieFileOutput;
    float  _networkBias;
    int  _numEODMessagesReceived;
    bool  _pastFramesWereBrightEnough;
    int  _pastFramesWereBrightEnoughPointer;
    BWNodeOutput * _previewOutput;
    NSMutableArray * _previewSampleBufferQueue;
    struct opaqueCMSampleBuffer { } * _previousSampleBuffer;
    float  _simulatedAperture;
    NSMutableArray * _videoCaptureSampleBufferQueue;
    int  focusMode;
}

@property (nonatomic, readonly) NSString *cinematographyModelVersionString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BWNodeOutput *detectedObjectsOutput;
@property (nonatomic, readonly) NSData *globalMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BWNodeOutput *movieFileOutput;
@property (nonatomic, readonly) BWNodeOutput *previewOutput;
@property (nonatomic) float simulatedAperture;
@property (readonly) Class superclass;

+ (void)initialize;

- (id)cinematographyModelVersionString;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)detectedObjectsOutput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)globalMetadata;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithObjectMetadataIdentifiers:(id)arg1 cachedSimulatedAperture:(float)arg2 captureDevice:(id)arg3 tuningParameters:(id)arg4 videoDepthConfiguration:(id)arg5 captureInputEnabled:(bool)arg6;
- (id)movieFileOutput;
- (id)nodeSubType;
- (id)nodeType;
- (id)previewOutput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setSimulatedAperture:(float)arg1;
- (float)simulatedAperture;

@end
