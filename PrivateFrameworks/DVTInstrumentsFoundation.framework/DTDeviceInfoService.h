
@interface DTDeviceInfoService : DTXService <DTDeviceInfoServiceAuthorizedAPI> {
    NSObject<OS_xpc_object> * _dtsecurityPidWatcher;
    bool  _expiredPidTrackingEnabled;
    struct kpep_db { } * _kpepDB;
    NSObject<OS_os_log> * _logHandle;
    NSMutableDictionary * _peerTrackingSelectorsByPid;
    DTDSCSymbolicatorCache * _sharedCacheSymbolicators;
    NSObject<OS_dispatch_queue> * _trackingSymbolicatorQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (id)_configurationProperties;
- (id)_getIOMFBProperties;
- (id)_lookupInt32Sysctl:(const char *)arg1;
- (id)_lookupInt64Sysctl:(const char *)arg1;
- (id)_processDictionaryForProcInfo:(id)arg1;
- (id)createSignatureFromLibraryUUID:(id)arg1 sharedCacheUUID:(id)arg2 andPath:(id)arg3;
- (id)deepSymbolOwnerSignatureForPid:(id)arg1 uuid:(id)arg2;
- (id)directoryListingForPath:(id)arg1;
- (void)enableExpiredPidTracking:(id)arg1;
- (id)execnameForPid:(id)arg1;
- (id)hardwareInformation;
- (int)hwCPU64BitCapable;
- (int)hwCPUsubtype;
- (int)hwCPUtype;
- (id)iconDescriptionFileForAppPath:(id)arg1;
- (id)initWithChannel:(id)arg1;
- (id)isRunningPid:(id)arg1;
- (id)kpepDatabase;
- (id)lookupSysctl:(const char *)arg1;
- (id)machKernelName;
- (id)machTimeInfo;
- (void)messageReceived:(id)arg1;
- (id)nameForGID:(id)arg1;
- (id)nameForUID:(id)arg1;
- (id)networkInformation;
- (int)numberOfCpus;
- (int)numberOfPhysicalCpus;
- (id)productVersion;
- (id)runningProcessWithPid:(id)arg1;
- (id)runningProcesses;
- (id)symbolicatorSignatureForPid:(id)arg1 trackingSelector:(id)arg2;
- (id)symbolicatorSignaturesForExpiredPids;
- (id)sysmonCoalitionAttributes;
- (id)sysmonProcessAttributes;
- (id)sysmonSystemAttributes;
- (id)traceCodesFile;
- (id)uniqueID;
- (void)unregisterSignatureTrackingForPid:(id)arg1;

@end
