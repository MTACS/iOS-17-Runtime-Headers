
@interface _DKPerformSyncUpHistoryAdditionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    _DKSyncHistory * _history;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _me;
    NSDate * _now;
    struct _CDPerfEvent { 
        double startTime; 
        double endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _DKSync2Policy * _policy;
    NSArray * _streamNames;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (void)endOperation;
- (bool)isAsynchronous;
- (void)main;

@end
