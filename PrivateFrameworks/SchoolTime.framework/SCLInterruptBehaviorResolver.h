
@interface SCLInterruptBehaviorResolver : NSObject <NSXPCListenerDelegate, SCLInterruptBehaviorResolutionXPCServer, SCLSchoolModeServerObserver> {
    CNContactStore * _contactStore;
    SCLState * _currentState;
    NSXPCListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _resolutionRecords;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) SCLState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableArray *resolutionRecords;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addResolutionRecord:(id)arg1;
- (bool)_isEmergencyBypassEnabledForContact:(id)arg1;
- (bool)_isEntitledWithClientIdentifier:(id)arg1;
- (bool)_isRepeatSender:(id)arg1 date:(id)arg2 clientIdentifier:(id)arg3;
- (id)_resolveInterruptBehaviorForEvent:(id)arg1 date:(id)arg2 clientIdentifier:(id)arg3;
- (void)activate;
- (id)contactStore;
- (id)currentState;
- (void)dealloc;
- (id)initWithTargetQueue:(id)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)queue;
- (id)resolutionRecords;
- (oneway void)resolveBehaviorForEvent:(id)arg1 clientIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)server:(id)arg1 didUpdateState:(id)arg2 fromState:(id)arg3;
- (void)setContactStore:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResolutionRecords:(id)arg1;

@end
