
@interface EXBDisplayMonitor : NSObject <EXBDisplaySourceObserving, EXBDisplayTransformUpdating> {
    NSMutableDictionary * _connectedIdentityToRecordMap;
    <EXBDisplayMonitorDelegate> * _delegate;
    <EXBDisplaySourcing> * _displayManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_observers;
}

@property (nonatomic, readonly, copy) NSArray *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EXBDisplayMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *mainIdentity;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)_connectToIdentity:(id)arg1 withConfiguration:(id)arg2 forDisplayManagerInit:(bool)arg3;
- (id)addObserver:(id)arg1;
- (void)beginMonitoringForExternalDisplays;
- (id)configurationForIdentity:(id)arg1;
- (id)connectedIdentities;
- (void)dealloc;
- (id)delegate;
- (void)displaySource:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displaySource:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displaySource:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)init;
- (id)initWithDisplaySource:(id)arg1;
- (id)mainIdentity;
- (void)setDelegate:(id)arg1;
- (void)updateTransformsWithCompletion:(id /* block */)arg1;

@end
