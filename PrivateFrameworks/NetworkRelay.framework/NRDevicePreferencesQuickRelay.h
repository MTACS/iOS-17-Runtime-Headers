
@interface NRDevicePreferencesQuickRelay : NSObject {
    NSUUID * _agentUUID;
    unsigned long long  _assertCount;
    bool  _needsReassert;
    NSUUID * _nrUUID;
    NSObject<OS_nw_path> * _path;
    NSObject<OS_nw_path_evaluator> * _pathEvaluator;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)addQuickRelayRequest;
- (void)dealloc;
- (id)initWithNRUUID:(id)arg1;
- (void)removeAllQuickRelayRequests;
- (void)removeQuickRelayRequest;

@end
