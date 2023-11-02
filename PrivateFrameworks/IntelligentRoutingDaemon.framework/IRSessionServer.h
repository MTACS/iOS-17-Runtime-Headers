
@interface IRSessionServer : NSObject <IRServiceContainerDelegate> {
    IRAVOutputContextController * _audioAVOutputContextController;
    IRAVOutputDeviceProvider * _avOutputDeviceProvider;
    IRBackgroundActivitiesManager * _backgroundActivitiesManager;
    IRBiomeProvider * _biomeProvider;
    NSMutableDictionary * _connections;
    IRDisplayMonitor * _displayMonitor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    IRPersistenceManager * _persistenceManager;
    IRProximityProvider * _proximityProvider;
    NSObject<OS_dispatch_queue> * _queue;
    IRRapportProvider * _rapportProvider;
    NSMutableDictionary * _services;
    unsigned long long  _stateCaptureHandle;
}

@property (nonatomic, retain) IRAVOutputContextController *audioAVOutputContextController;
@property (nonatomic, retain) IRAVOutputDeviceProvider *avOutputDeviceProvider;
@property (nonatomic, retain) IRBackgroundActivitiesManager *backgroundActivitiesManager;
@property (nonatomic, retain) IRBiomeProvider *biomeProvider;
@property (nonatomic, retain) NSMutableDictionary *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IRDisplayMonitor *displayMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) IRPersistenceManager *persistenceManager;
@property (nonatomic, retain) IRProximityProvider *proximityProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) IRRapportProvider *rapportProvider;
@property (nonatomic, retain) NSMutableDictionary *services;
@property (nonatomic) unsigned long long stateCaptureHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logConnectionsAndServices;
- (void)_logStateOnStateCaptureEvent;
- (void)_refreshUpdateModeForServiceIdentifier:(id)arg1;
- (id)audioAVOutputContextController;
- (id)avOutputDeviceProvider;
- (id)backgroundActivitiesManager;
- (id)biomeProvider;
- (id)connections;
- (void)dealloc;
- (id)displayMonitor;
- (id)initWithQueue:(id)arg1;
- (bool)isGlobalLowLatencyMiLoWithPersistenceManager:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)performXPCActivityUnderServerContext:(id /* block */)arg1;
- (id)persistenceManager;
- (id)proximityProvider;
- (id)queue;
- (id)rapportProvider;
- (void)refreshUpdateModeForServiceIdentifier:(id)arg1;
- (id)registerWithServiceIdentifier:(id)arg1 withConnection:(id)arg2;
- (void)serviceContainer:(id)arg1 didUpdateContexts:(id)arg2 withReason:(id)arg3;
- (id)services;
- (void)setAudioAVOutputContextController:(id)arg1;
- (void)setAvOutputDeviceProvider:(id)arg1;
- (void)setBackgroundActivitiesManager:(id)arg1;
- (void)setBiomeProvider:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDisplayMonitor:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPersistenceManager:(id)arg1;
- (void)setProximityProvider:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRapportProvider:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setStateCaptureHandle:(unsigned long long)arg1;
- (bool)shouldAcceptNewConnection:(id)arg1;
- (unsigned long long)stateCaptureHandle;
- (bool)unregisterWithServiceIdentifier:(id)arg1 withConnection:(id)arg2;

@end
