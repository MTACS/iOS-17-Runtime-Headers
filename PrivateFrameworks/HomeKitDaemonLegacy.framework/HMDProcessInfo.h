
@interface HMDProcessInfo : HMFProcessInfo <HMFLogging> {
    HMDApplicationInfo * _applicationInfo;
    NSString * _bundleIdentifier;
    NSHashTable * _connections;
    bool  _entitledForAPIAccess;
    bool  _entitledForSPIAccess;
    HMFLocationAuthorization * _locationAuthorization;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    RBSProcessHandle * _processHandle;
    RBSProcessState * _processState;
    unsigned long long  _state;
}

@property (getter=isActive, readonly) bool active;
@property (readonly) HMDApplicationInfo *applicationInfo;
@property (getter=isBackgrounded, readonly) bool background;
@property (getter=isBackgroundUpgradedToForeground, readonly) bool backgroundUpgradedToForeground;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEntitledForAPIAccess, readonly) bool entitledForAPIAccess;
@property (getter=isEntitledForSPIAccess, readonly) bool entitledForSPIAccess;
@property (getter=isForegrounded, readonly) bool foreground;
@property (readonly) unsigned long long hash;
@property (readonly) HMFLocationAuthorization *locationAuthorization;
@property (nonatomic, readonly) RBSProcessHandle *processHandle;
@property (nonatomic, readonly, copy) RBSProcessState *processState;
@property (readonly) bool shouldMonitor;
@property unsigned long long state;
@property (readonly) Class superclass;
@property (getter=isSuspended, readonly) bool suspended;
@property (getter=isTerminated, readonly) bool terminated;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
+ (id)privateClientIdentifierSalt;
+ (id)processInfoWithConnection:(id)arg1;

- (void).cxx_destruct;
- (void)_updateProcessState:(id)arg1;
- (void)addConnection:(id)arg1;
- (id)applicationInfo;
- (id)attributeDescriptions;
- (id)bundleIdentifier;
- (id)clientIdentifierSalt:(id*)arg1;
- (id)connections;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithIdentifier:(int)arg1;
- (bool)isActive;
- (bool)isBackgroundUpgradedToForeground;
- (bool)isBackgrounded;
- (bool)isEntitledForAPIAccess;
- (bool)isEntitledForSPIAccess;
- (bool)isEqual:(id)arg1;
- (bool)isForegrounded;
- (bool)isSuspended;
- (bool)isTerminated;
- (id)locationAuthorization;
- (id)logIdentifier;
- (id)processHandle;
- (id)processState;
- (void)removeConnection:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldMonitor;
- (unsigned long long)state;

@end
