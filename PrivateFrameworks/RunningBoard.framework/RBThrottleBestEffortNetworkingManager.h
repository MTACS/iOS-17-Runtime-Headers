
@interface RBThrottleBestEffortNetworkingManager : NSObject <RBStateCapturing, RBThrottleBestEffortNetworkingManaging> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBProcessIndex * _processIndex;
    NSObject<OS_dispatch_queue> * _queue;
    RBProcessMap * _stateMap;
    bool  _throttleBestEffortNetworking;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addProcess:(id)arg1;
- (id)captureState;
- (id)debugDescription;
- (void)didUpdateProcessStates:(id)arg1;
- (id)init;
- (bool)isThrottleBestEffortNetworkingEnabled;
- (void)removeProcess:(id)arg1;
- (id)stateCaptureTitle;

@end
