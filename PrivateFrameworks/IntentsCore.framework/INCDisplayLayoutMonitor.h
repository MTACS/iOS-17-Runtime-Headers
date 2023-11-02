
@interface INCDisplayLayoutMonitor : NSObject <FBSDisplayObserving> {
    bool  _alive;
    FBSDisplayMonitor * _displayMonitor;
    NSMutableDictionary * _layoutMonitorsByIdentity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    FBSDisplayLayoutMonitor * _singleDisplayLayoutMonitor;
    id /* block */  _transitionHandler;
}

@property (nonatomic) bool alive;
@property (nonatomic, readonly) NSDictionary *currentDisplayLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayMonitor *displayMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *layoutMonitorsByIdentity;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) FBSDisplayLayoutMonitor *singleDisplayLayoutMonitor;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transitionHandler;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)alive;
- (id)currentDisplayLayouts;
- (void)dealloc;
- (id)displayMonitor;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (void)executeBlockWithLock:(id /* block */)arg1;
- (bool)hasRenderServerAccess;
- (id)init;
- (void)invalidate;
- (id)layoutMonitorsByIdentity;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)lock_alive;
- (id)lock_currentDisplayLayouts;
- (void)lock_invalidate;
- (id)lock_layoutMonitorsByIdentity;
- (void)lock_resume;
- (void)lock_startLayoutMonitorForDisplay:(id)arg1;
- (bool)platformSupportsMultipleDisplays;
- (void)resume;
- (void)setAlive:(bool)arg1;
- (void)setLayoutMonitorsByIdentity:(id)arg1;
- (void)setTransitionHandler:(id /* block */)arg1;
- (bool)shouldObserveMultipleDisplays;
- (id)singleDisplayLayoutMonitor;
- (id /* block */)transitionHandler;

@end
