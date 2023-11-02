
@interface ARDaemon : NSObject <ARMemoryPressureMonitorDelegate> {
    bool  _anonymousListenerEnabled;
    NSObject<OS_dispatch_source> * _heartbeatTimer;
    double  _lastDaemonHeartbeatEventReportedTimestamp;
    ARDaemonServiceListener * _listener;
    ARMemoryPressureMonitor * _memoryPressureMonitor;
    NSArray * _runningRemoteServices;
    ARServer * _server;
    NSUUID * _sessionUUID;
    ARSystemTimeSnapshot * _spawnTime;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARDaemonServiceListener *listener;
@property (nonatomic, readonly) NSArray *runningRemoteServices;
@property (nonatomic, readonly) ARServer *server;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (id)_fullDescription;
+ (id)_runningDaemons;
+ (id)createAnonymousListenerDaemon;
+ (id)createAnonymousListenerDaemonWithReplayURL:(id)arg1 deterministic:(bool)arg2 replayDelegate:(id)arg3;
+ (id)createAnonymousListenerDaemonWithReplayURL:(id)arg1 deterministic:(bool)arg2 replayDelegate:(id)arg3 isDryRun:(bool)arg4;
+ (id)localAnonymousListenerDaemon;

- (void).cxx_destruct;
- (id)_fullDescription;
- (void)_heartbeat;
- (void)dealloc;
- (id)initWithSpawnTime:(id)arg1 watchdogMonitor:(id)arg2;
- (id)initWithSpawnTime:(id)arg1 watchdogMonitor:(id)arg2 anonymousListenerEnabled:(bool)arg3 graphScheduler:(id)arg4 replayDelegate:(id)arg5;
- (id)listener;
- (id)listenerEndPointForServiceNamed:(id)arg1;
- (void)memoryPressureMonitor:(id)arg1 didUpdateProcessMemoryPressureCondition:(long long)arg2;
- (void)memoryPressureMonitor:(id)arg1 didUpdateSystemMemoryPressureCondition:(long long)arg2;
- (void)printInfo;
- (id)runningRemoteServices;
- (id)server;
- (void)setLocalAnonymousListenerDaemon:(id)arg1;
- (void)shutdown;
- (void)startWithServices:(id)arg1;
- (void)startup;
- (unsigned long long)state;

@end
