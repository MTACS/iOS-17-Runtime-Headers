
@interface HealthVisualization.AggregateChangeDetector : NSObject {
    void changesHandler;
    void deliveryQueue;
    void healthStore;
    void includeChangeDetails;
    void lock;
    void lock_dispatchPending;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lock_pendingChangeSet;
    void lock_pendingError;
    void lock_state;
    void name;
    void otherChangePublishers;
    void otherChanges;
    void queries;
}

- (void).cxx_destruct;
- (id)init;

@end
