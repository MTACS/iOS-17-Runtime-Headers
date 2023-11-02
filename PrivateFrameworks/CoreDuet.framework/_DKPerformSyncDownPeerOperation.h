
@interface _DKPerformSyncDownPeerOperation : _DKSyncCompositeOperation {
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    NSMutableArray * _operations;
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
