
@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation {
    unsigned long long  _batchNumber;
    bool  _foundDeletions;
    bool  _highPriority;
    NSDate * _highWaterMark;
    _DKSyncHistory * _history;
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    _DKSyncPeer * _peer;
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
