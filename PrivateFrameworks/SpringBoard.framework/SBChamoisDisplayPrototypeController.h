
@interface SBChamoisDisplayPrototypeController : NSObject <FBSDisplayObserving> {
    FBSDisplayConfiguration * _activeDisplayConfiguration;
    FBSDisplayIdentity * _activeDisplayIdentity;
    FBSDisplayMonitor * _displayMonitor;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_caEnvironmentVariablesForDisplayConfiguration:(id)arg1;
- (void)_updateState;
- (id)_xpcQueue_currentCAEnvironmentVariables;
- (id)_xpcQueue_environmentValueForKey:(id)arg1;
- (void)_xpcQueue_setValuesForEnvironmentVariables:(id)arg1;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)initWithDisplayMonitor:(id)arg1;

@end
