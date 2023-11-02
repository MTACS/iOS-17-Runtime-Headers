
@interface BWDepthSynchronizerNode : BWNode {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    NSMutableArray * _depthBufferQueue;
    int  _depthIDWrapAroundCounter;
    BWNodeInput * _depthInput;
    _Atomic bool  _depthInputHasReceivedEOD;
    bool  _discardsDegradedDepthBuffers;
    BWNodeError * _errorForDepthInput;
    BWNodeError * _errorForImageInput;
    bool  _flushOnDepthEOD;
    NSMutableArray * _imageBufferQueue;
    int  _imageIDWrapAroundCounter;
    BWNodeInput * _imageInput;
    int  _lastEmittedFrameCaptureID;
    unsigned long long  _lastReceivedDepthErrorSettingsID;
    int  _lastReceivedDepthID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastReceivedDepthPTS;
    int  _lastReceivedImageID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastReceivedImagePTS;
    int  _maxQueueDepth;
    int  _numEODMessagesReceived;
    bool  _separateDepthComponentsEnabled;
    bool  _streaming;
}

@property (readonly) BWNodeInput *depthInput;
@property (nonatomic) bool discardsDegradedDepthBuffers;
@property (nonatomic) bool flushOnDepthEOD;
@property (readonly) BWNodeInput *imageInput;

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)depthInput;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (bool)discardsDegradedDepthBuffers;
- (bool)flushOnDepthEOD;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)imageInput;
- (id)initForStreaming:(bool)arg1 maxQueueDepth:(int)arg2 separateDepthComponentsEnabled:(bool)arg3;
- (id)initForStreaming:(bool)arg1 separateDepthComponentsEnabled:(bool)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDiscardsDegradedDepthBuffers:(bool)arg1;
- (void)setFlushOnDepthEOD:(bool)arg1;

@end
