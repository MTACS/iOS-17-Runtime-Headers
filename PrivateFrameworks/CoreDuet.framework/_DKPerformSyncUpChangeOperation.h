
@interface _DKPerformSyncUpChangeOperation : _DKSyncCompositeOperation {
    NSArray * _deletedEventIDs;
    NSArray * _insertedEvents;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    struct _CDPerfEvent { 
        double startTime; 
        double endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _DKSync2Policy * _policy;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (void)endOperation;
- (bool)isAsynchronous;
- (void)main;

@end
