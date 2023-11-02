
@interface HMDProcessMonitor : HMFObject <HMFLogging, HMFTimerDelegate> {
    bool  _activeHomeKitApps;
    RBSProcessMonitor * _internal;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _pendingTerminatedApplications;
    NSMutableSet * _processes;
    HMFTimer * _spiClientTerminationDelayTimer;
    NSObject<OS_dispatch_queue> * _xpcListenerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *foregroundProcesses;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *pendingTerminatedApplications;
@property (readonly, copy) NSArray *processes;
@property (nonatomic, retain) HMFTimer *spiClientTerminationDelayTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *xpcListenerQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_processAppStateChange:(id)arg1;
- (void)_removeProcess:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)dealloc;
- (id)foregroundProcesses;
- (id)init;
- (id)initWithXpcListenerQueue:(id)arg1;
- (id)pendingTerminatedApplications;
- (id)processInfoForConnection:(id)arg1;
- (id)processInfoForPID:(int)arg1;
- (id)processes;
- (void)removeFromPendingTerminated:(id)arg1;
- (void)removeProcess:(id)arg1;
- (void)setSpiClientTerminationDelayTimer:(id)arg1;
- (id)spiClientTerminationDelayTimer;
- (void)timerDidFire:(id)arg1;
- (void)updateApplicationMonitor;
- (id)xpcListenerQueue;

@end
