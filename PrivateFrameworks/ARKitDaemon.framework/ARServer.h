
@interface ARServer : NSObject <ARControlListenerDelegate, ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARDaemonServiceListenerDelegate, ARLoggingFullDescription> {
    unsigned long long  _batchServicesCount;
    NSMutableArray * _batchedServices;
    NSObject<OS_dispatch_semaphore> * _batchedServicesConfiguredSemaphore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _batchedServicesLock;
    ARControlListener * _controlListener;
    ARAlgorithmConfiguration * _currentConfiguration;
    bool  _inProcess;
    bool  _isKeybagUnlocked;
    NSMutableDictionary * _latestTaskErrorMap;
    ARDaemonService * _serviceBeingRemoved;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    NSMutableArray * _services;
    NSArray * _servicesBeingAdded;
    NSMutableDictionary * _servicesByPID;
    NSMutableSet * _servicesClasses;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _servicesLock;
    NSUUID * _sessionUUID;
    ARSystemTimeSnapshot * _spawnTime;
    ARDaemonStatusLogger * _statusLogger;
    NSObject<OS_dispatch_queue> * _statusQueue;
    NSObject<OS_dispatch_source> * _statusTimer;
    ARUserProfile * _userProfile;
}

@property (retain) ARAlgorithmConfiguration *currentConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isKeybagUnlocked;
@property (retain) ARDaemonService *serviceBeingRemoved;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain) NSArray *servicesBeingAdded;
@property (readonly) Class superclass;
@property (nonatomic, retain) ARUserProfile *userProfile;

- (void).cxx_destruct;
- (bool)_addServices:(id)arg1;
- (void)_configureServiceForExecution:(id)arg1;
- (id)_fullDescription;
- (void)_logDaemonStatusWithType:(id)arg1;
- (id)_peerServicesOfService:(id)arg1;
- (void)_removeService:(id)arg1;
- (void)_setupStatusTimer;
- (void)_updateServicesByPID;
- (bool)_updateWithServices:(id)arg1 error:(id*)arg2;
- (bool)commitServices:(id)arg1;
- (id)currentConfiguration;
- (id)daemonServiceForServiceNamed:(id)arg1;
- (void)dealloc;
- (void)didDiscoverControl:(id)arg1;
- (void)didDiscoverService:(id)arg1;
- (id)fullDescriptionWithWaitEndOfTransition:(bool)arg1;
- (id)initInProcess:(bool)arg1 spawnTime:(id)arg2 sessionUUID:(id)arg3 watchdogMonitor:(id)arg4 executionManager:(id)arg5;
- (void)invalidate;
- (bool)isKeybagUnlocked;
- (id)listenerEndPointForServiceNamed:(id)arg1;
- (long long)numberOfActiveConnectionsForService:(id)arg1;
- (void)resume;
- (id)service:(id)arg1 peerServiceOfType:(Class)arg2;
- (id)serviceBeingRemoved;
- (void)serviceDidInterrupt:(id)arg1;
- (void)serviceDidInvalidate:(id)arg1;
- (id)serviceQueue;
- (id)servicesBeingAdded;
- (void)setCurrentConfiguration:(id)arg1;
- (void)setIsKeybagUnlocked:(bool)arg1;
- (void)setServiceBeingRemoved:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setServicesBeingAdded:(id)arg1;
- (void)setUserProfile:(id)arg1;
- (id)statusDictionaryWithWaitEndOfTransition:(bool)arg1;
- (id)statusStringWithWaitEndOfTransition:(bool)arg1;
- (void)suspend;
- (bool)updateAlgorithmConfigurationWithService:(id)arg1;
- (bool)updateAlgorithmConfigurationWithServices:(id)arg1;
- (id)userProfile;

@end
