
@interface SiriAnalyticsMetastore : NSObject {
    void bootstrapped;
    void db;
    void schemas;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  storageURL;
}

- (void).cxx_destruct;
- (void)bootstrap;
- (void)checkpoint;
- (void)cleanupAbandonedClocksWithActiveClockIdentifier:(id)arg1;
- (void)createClock:(id)arg1 rootClockIdentifier:(id)arg2 bootSessionUUID:(id)arg3 startedOn:(unsigned long long)arg4;
- (id)createTagWithShim:(id)arg1 onClock:(id)arg2;
- (void)dealloc;
- (void)endClock:(id)arg1 endedOn:(unsigned long long)arg2 endedReason:(unsigned long long)arg3;
- (id)init;
- (void)prune;
- (void)pulseClock:(id)arg1 lastEventOn:(unsigned long long)arg2;
- (id)sensitiveConditionsWithBootSessionUUIDs:(id)arg1;

@end
