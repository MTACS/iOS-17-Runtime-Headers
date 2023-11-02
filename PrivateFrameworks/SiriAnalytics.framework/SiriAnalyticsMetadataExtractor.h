
@interface SiriAnalyticsMetadataExtractor : NSObject <SiriAnalyticsDebounceDelegate> {
    void $__lazy_storage_$_flushPulse;
    void autoCommit;
    void componentIdsByClock;
    void connectedComponentsByClock;
    void dirtied;
    void metastore;
    void runtimeQueue;
}

- (void).cxx_destruct;
- (void)debounceFired:(id)arg1 maximumReached:(bool)arg2;
- (id)init;
- (id)initWithMetastore:(id)arg1 runtimeQueue:(id)arg2 autoCommit:(bool)arg3;
- (void)pruneWithClockIdentifier:(id)arg1;

@end
