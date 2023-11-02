
@interface NWStatsMonitor : NSObject {
    NWStatsAppEventListener * _appEventListener;
    NWAppStateHandler * _appStateHandler;
    NSSet * _appendProcNameSet;
    NWStatsEntityMapperCoalitionWatcher * _coalitionUUIDMapper;
    bool  _debugMode;
    NWStatsEntityMapperDynamicLaunchServices * _dynamicLaunchServicesUUIDMapper;
    NSSet * _knownDaemonSet;
    NWStatsEntityMapperNEHelper * _neHelperUUIDMapper;
    NWStatsEntityMapperProcessWatcher * _processWatcherUUIDMapper;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _reportedLookupFailures;
    NWStatsEntityMapperStaticAssignment * _staticAssignmentCommCenterUUIDMapper;
    NWStatsEntityMapperStaticAssignment * _staticAssignmentSymptomsUUIDMapper;
    bool  _useCoalitionIDs;
    bool  _useLaunchServices;
    bool  _useNEHelper;
    NSSet * _useNEHelperSet;
    bool  _useProcessNames;
    bool  _useSymptomsMapping;
}

@property (readonly) bool debugMode;

- (void).cxx_destruct;
- (id)allIdentifiersForUUID:(id)arg1 EUUID:(id)arg2 pid:(int)arg3 epid:(int)arg4 procname:(char *)arg5;
- (id)bestIdentifierForUUID:(id)arg1 EUUID:(id)arg2 pid:(int)arg3 epid:(int)arg4 procname:(char *)arg5 derivation:(int*)arg6;
- (void)configure:(id)arg1;
- (bool)currentForegroundStateForProcessWithPid:(int)arg1;
- (bool)debugMode;
- (id)extensionNameForUUID:(id)arg1;
- (id)identifierForUUID:(id)arg1 derivation:(int*)arg2;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)noteFailedLookupFor:(id)arg1 processName:(char *)arg2 pid:(int)arg3;
- (void)noteUUID:(id)arg1 forPid:(int)arg2 procname:(BOOL*)arg3;
- (id)processNameForUUID:(id)arg1;
- (id)processNameForUUIDString:(id)arg1;
- (id)stateDictionary;

@end
