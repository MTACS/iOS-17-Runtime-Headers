
@interface BKSSystemShellService : NSObject <BKSSystemShellClientInterface, BKSSystemShellServiceConfiguration> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    BSAtomicSignal * _checkInCompleted;
    bool  _configurationFinished;
    BSServiceConnection * _connection;
    double  _idleSleepInterval;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_didCheckIn;
    bool  _lock_didFinishLaunching;
    bool  _waitForDataMigration;
    id /* block */  _watchdogPingBlock;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, copy) id /* block */ collectiveWatchdogPingBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double idleSleepInterval;
@property (readonly) Class superclass;
@property (nonatomic) bool waitForDataMigration;

- (void).cxx_destruct;
- (void)_activateServerConnectionWithIdleSleepInterval:(double)arg1;
- (void)_checkIn;
- (void)_reconnect:(id)arg1;
- (id)calloutQueue;
- (bool)collectiveWatchdogPing;
- (id /* block */)collectiveWatchdogPingBlock;
- (void)didFinishLaunching;
- (double)idleSleepInterval;
- (id)initWithConfigurator:(id /* block */)arg1;
- (void)restartWithOptions:(unsigned long long)arg1;
- (void)setCalloutQueue:(id)arg1;
- (void)setCollectiveWatchdogPingBlock:(id /* block */)arg1;
- (void)setIdleSleepInterval:(double)arg1;
- (void)setIndependentWatchdogEnabled:(bool)arg1;
- (void)setWaitForDataMigration:(bool)arg1;
- (void)start;
- (bool)waitForDataMigration;

@end
