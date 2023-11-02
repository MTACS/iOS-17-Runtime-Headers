
@interface SMUSystemDisplayMonitor : NSObject <FBSDisplayObserving, SMUSystemDisplayMonitoring> {
    FBSDisplayMonitor * _displayMonitor;
    id /* block */  onDisplayConnected;
    id /* block */  onDisplayDisconnected;
}

@property (nonatomic, readonly) NSSet *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayMonitor *displayMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SMUSystemDisplayIdentity> *mainIdentity;
@property (nonatomic, copy) id /* block */ onDisplayConnected;
@property (nonatomic, copy) id /* block */ onDisplayDisconnected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connectedIdentities;
- (void)dealloc;
- (id)displayMonitor;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)init;
- (id)mainIdentity;
- (id /* block */)onDisplayConnected;
- (id /* block */)onDisplayDisconnected;
- (void)setOnDisplayConnected:(id /* block */)arg1;
- (void)setOnDisplayDisconnected:(id /* block */)arg1;

@end
