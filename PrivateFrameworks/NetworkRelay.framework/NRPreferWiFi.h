
@interface NRPreferWiFi : NSObject {
    NSUUID * _agentUUID;
    unsigned long long  _assertCount;
    NSObject<OS_nw_path_evaluator> * _evaluator;
    bool  _isP2P;
    bool  _needsReassert;
    bool  _p2pNeededImmediately;
    NSObject<OS_nw_path> * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
