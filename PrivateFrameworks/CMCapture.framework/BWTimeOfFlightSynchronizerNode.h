
@interface BWTimeOfFlightSynchronizerNode : BWNode {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferServicingLock;
    BWDataBufferPool * _dataBufferPool;
    double  _lastEmittedPTS;
    int  _maxPointCloudBufferQueueDepth;
    int  _maxVideoBufferQueueDepth;
    int  _numEODMessagesReceived;
    NSMutableArray * _pointCloudBufferQueue;
    struct opaqueCMFormatDescription { } * _pointCloudFormatDescription;
    BWNodeInput * _pointCloudInput;
    NSMutableArray * _videoBufferQueue;
    BWNodeInput * _videoInput;
}

@property (readonly) BWNodeInput *pointCloudInput;
@property (readonly) BWNodeInput *videoInput;

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (id)pointCloudInput;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)videoInput;

@end
