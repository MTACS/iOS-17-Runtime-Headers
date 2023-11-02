
@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {
    BWNodeInput * _input;
    bool  _messageCachingEnabled;
    NSMutableArray * _messagesToPropagate;
    BWNodeOutput * _output;
    BWPipelineStage * _pipelineStage;
    bool  _resumedForEventsOnly;
    bool  _resuming;
    bool  _suspended;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _suspensionLock;
    bool  _wantsMessageCachingWhileSuspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (readonly) BWPipelineStage *pipelineStage;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsMessageCachingWhileSuspended;

+ (void)initialize;

- (bool)attach;
- (void)consumeMessage:(id)arg1 fromOutput:(id)arg2;
- (void)dealloc;
- (bool)detach;
- (id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3;
- (id)input;
- (id)output;
- (id)pipelineStage;
- (bool)resolveCommonBufferFormat;
- (void)resumeForEventsOnly:(bool)arg1;
- (void)setWantsMessageCachingWhileSuspended:(bool)arg1;
- (void)suspendWithMessageCachingAllowed:(bool)arg1;
- (bool)wantsMessageCachingWhileSuspended;

@end
