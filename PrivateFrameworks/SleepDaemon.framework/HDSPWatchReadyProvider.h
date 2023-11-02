
@interface HDSPWatchReadyProvider : NSObject <HDSPEnvironmentAware, HDSPSpringboardObserver, HDSPSystemReadyProvider> {
    <HDSPSystemReadyDelegate> * _delegate;
    HDSPEnvironment * _environment;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _observingRestore;
    HDSPSpringboardMonitor * _springboardMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSystemReadyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemReady;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) bool observingRestore;
@property (nonatomic, readonly) HDSPSpringboardMonitor *springboardMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishWaitingForInitialSync;
- (bool)_isInRootRobot;
- (bool)_waitForInitialSync;
- (void)_withLock:(id /* block */)arg1;
- (id)delegate;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (bool)isInRootRobotOrDemoMode;
- (bool)isSystemReady;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)observingRestore;
- (void)restoreDidFinish;
- (void)setDelegate:(id)arg1;
- (void)springboardDidStart;
- (id)springboardMonitor;

@end
