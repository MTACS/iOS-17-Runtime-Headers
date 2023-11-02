
@interface RBConnectionClient : NSObject <RBClientInheritanceManagerDelegate, RBEntitlementPossessing, RBStateCapturing> {
    NSMutableSet * _assertionIdentifiers;
    <RBAssertionManaging> * _assertionManager;
    NSObject<OS_xpc_object> * _connection;
    RBProcess * _containingProcess;
    <RBDaemonContextProviding> * _daemonContext;
    NSMutableSet * _deathMonitors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deathMonitorsLock;
    <RBEntitlementManaging> * _entitlementManager;
    <RBEntitlementPossessing> * _entitlements;
    unsigned int  _euid;
    RBSAssertionIdentifier * _expirationBoostAssertionIdentifier;
    RBClientInheritanceManager * _inheritanceManager;
    RBConnectionListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    RBProcess * _process;
    RBSProcessHandle * _processHandle;
    RBSProcessIdentifier * _processIdentifier;
    RBSProcessIdentity * _processIdentity;
    <RBProcessManaging> * _processManager;
    <RBProcessMonitoring> * _processMonitor;
    bool  _ready;
    <RBRequestManaging> * _requestManager;
    NSString * _shortDescription;
    <RBStateCaptureManaging> * _stateCaptureManager;
    RBProcessMonitorObserver * _stateObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)captureState;
- (id)description;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasEntitlementDomain:(unsigned long long)arg1;
- (void)inheritanceManager:(id)arg1 didChangeInheritances:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)stateCaptureTitle;

@end
