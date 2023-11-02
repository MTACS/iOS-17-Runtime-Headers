
@interface BWFunnelNode : BWNode {
    bool  _holdMessagesUntilAllInputsAreLive;
    NSMutableArray * _inputsForQueuedMessages;
    NSMutableArray * _queuedMessages;
    bool  _running;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

+ (void)initialize;

- (void)_handleMessage:(id)arg1 fromInput:(id)arg2;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2;
- (id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned int)arg2;
- (id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned int)arg2 holdMessages:(bool)arg3;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
