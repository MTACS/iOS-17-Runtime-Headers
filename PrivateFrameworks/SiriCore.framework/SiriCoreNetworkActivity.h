
@interface SiriCoreNetworkActivity : NSObject {
    NSObject<OS_nw_activity> * _activity;
    NSMutableSet * _connections;
    bool  _hasStarted;
    long long  _parentLabel;
    long long  _state;
}

- (void).cxx_destruct;
- (int)_completionReasonToNWActivityCompletionReason:(long long)arg1;
- (void)_networkActivityAbort;
- (void)_networkActivityRestart;
- (void)_networkActivityState:(long long)arg1;
- (void)activate;
- (void)addConnection:(id)arg1;
- (bool)hasStarted;
- (id)initWithLabel:(long long)arg1 parent:(id)arg2;
- (id)nwActivity;
- (id)nwActivityToken;
- (long long)parentLabel;
- (void)removeConnection:(id)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)stopWithCompletionReason:(long long)arg1 andError:(id)arg2;

@end
