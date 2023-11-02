
@interface BWBackPressureNode : BWNode {
    <BWNodeBackPressureSource> * _backPressureSourceNode;
    long long  _initialSemaphoreValue;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    int  _numEODMessagesReceived;
    unsigned int  _numberOfInputs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _presentationTimestampLock;
    bool  _receivedFirstFrame;
    NSMutableArray * _receivedPresentationTimestampByInput;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSObject<OS_dispatch_queue> * _semaphoreSignalQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
}

@property (nonatomic) <BWNodeBackPressureSource> *backPressureSourceNode;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *semaphoreSignalQueue;

+ (void)initialize;

- (void)_handleUpdatedPresentationTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forIndex:(unsigned long long)arg2;
- (void)_setSemaphore:(id)arg1;
- (id)backPressureSourceNode;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithNumberOfInputsAndOutputs:(unsigned int)arg1 initialSemaphoreValue:(long long)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)semaphore;
- (id)semaphoreSignalQueue;
- (void)setBackPressureSourceNode:(id)arg1;
- (void)setInitialSemaphoreValue:(int)arg1;
- (void)setSemaphoreSignalQueue:(id)arg1;

@end
