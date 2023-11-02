
@interface BWSlaveFrameSynchronizerNode : BWNode {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    bool  _differentInputFormatsSupported;
    NSMutableArray * _droppedFramePTSs;
    struct opaqueCMSimpleQueue {} ** _inputSampleBufferQueues;
    int  _mostRecentMasterInputIndex;
    int  _numBufferedFrames;
    int  _numEODMessagesReceived;
    int  _numSlaveFramesReceived;
    int  _numSlaveFramesToSkip;
    bool  _slaveStreamHasStarted;
    bool  _startEmittingMasterFramesBeforeSlaveStreamStarts;
    NSArray * _syncSlaveForMasterPortTypes;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)initWithDepthEnabled:(bool)arg1 numberOfInputs:(int)arg2 syncSlaveForMasterPortTypes:(id)arg3 separateDepthComponentsEnabled:(bool)arg4;
- (id)initWithDepthEnabled:(bool)arg1 numberOfInputs:(int)arg2 syncSlaveForMasterPortTypes:(id)arg3 separateDepthComponentsEnabled:(bool)arg4 differentInputFormatsSupported:(bool)arg5 bufferSize:(int)arg6 numberOfSlaveFramesToSkip:(int)arg7 startEmittingMasterFramesBeforeSlaveStreamStarts:(bool)arg8;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
