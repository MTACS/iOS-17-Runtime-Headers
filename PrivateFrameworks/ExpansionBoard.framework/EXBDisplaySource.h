
@interface EXBDisplaySource : NSObject <EXBDisplaySourcing, FBSDisplayObserving> {
    FBDisplayManager * _displayManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _lock_observers;
}

@property (nonatomic, readonly, copy) NSSet *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayConfiguration *mainConfiguration;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *mainIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)configurationForIdentity:(id)arg1;
- (id)connectedIdentities;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)init;
- (id)initWithDisplayManager:(id)arg1;
- (id)mainConfiguration;
- (id)mainIdentity;
- (void)removeObserver:(id)arg1;
- (void)updateTransformsWithCompletion:(id /* block */)arg1;

@end
