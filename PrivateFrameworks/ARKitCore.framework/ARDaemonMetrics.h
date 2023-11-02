
@interface ARDaemonMetrics : NSObject {
    NSMutableDictionary * _activeServiceCountPerClient;
    NSMutableDictionary * _allServicesUsedPerClient;
    unsigned long long  _peakMemoryUsageInMegabytes;
    NSObject<OS_dispatch_queue> * _reportingQueue;
}

+ (id)sharedDaemonMetrics;

- (void).cxx_destruct;
- (void)_addServiceForClient:(id)arg1 serviceName:(id)arg2;
- (id)_getActiveServiceCountPerClient;
- (id)_getAllServicesUsedPerClient;
- (unsigned long long)_getPeakMemoryUsageInMegabytes;
- (bool)_removeServiceForClient:(id)arg1 serviceName:(id)arg2;
- (id)_reportCoreAnalyticsDaemonEventWithServiceName:(id)arg1 clientBundleIdentifier:(id)arg2 isServiceRemoved:(bool)arg3 isDisconnectingClient:(bool)arg4;
- (id)_reportDaemonHeartbeatForSessionUUID:(id)arg1 daemonUpTimeExcludingSleepMinutes:(unsigned long long)arg2 daemonUpTimeIncludingSleepMinutes:(unsigned long long)arg3 systemUpTimeMinutes:(unsigned long long)arg4 memoryFootprintInBytes:(unsigned long long)arg5;
- (id)init;
- (void)reportCoreAnalyticsDaemonEventWithServiceName:(id)arg1 clientBundleIdentifier:(id)arg2 isServiceRemoved:(bool)arg3 isDisconnectingClient:(bool)arg4;
- (void)reportDaemonHeartbeatForSessionUUID:(id)arg1 daemonUpTimeExcludingSleepMinutes:(unsigned long long)arg2 daemonUpTimeIncludingSleepMinutes:(unsigned long long)arg3 systemUpTimeMinutes:(unsigned long long)arg4 memoryFootprintInBytes:(unsigned long long)arg5;
- (void)reportMemoryFootprintInBytes:(unsigned long long)arg1;
- (void)reportServiceAddedWithName:(id)arg1 clientBundleIdentifier:(id)arg2;
- (void)reportServiceRemovedWithName:(id)arg1 clientBundleIdentifier:(id)arg2;
- (void)setCurrentMemoryFootprintAsPeak;

@end
