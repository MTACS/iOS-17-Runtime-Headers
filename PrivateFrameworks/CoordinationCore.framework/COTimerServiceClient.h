
@interface COTimerServiceClient : COCoordinationServiceClient {
    NSObject<OS_nw_activity> * _clientLifetimeActivity;
    int  _clientLifetimeActivityCompletionReason;
    NSObject<OS_xpc_object> * _clientLifetimeActivityMetrics;
}

@property (nonatomic, readonly) NSObject<OS_nw_activity> *clientLifetimeActivity;
@property (nonatomic) int clientLifetimeActivityCompletionReason;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *clientLifetimeActivityMetrics;

- (void).cxx_destruct;
- (void)changeClientLifetimeActivityMetrics:(id /* block */)arg1;
- (id)clientLifetimeActivity;
- (int)clientLifetimeActivityCompletionReason;
- (id)clientLifetimeActivityMetrics;
- (void)dealloc;
- (void)donateClientLifetimeActivityCompletionReason:(int)arg1;
- (id)initWithConnection:(id)arg1;
- (void)setClientLifetimeActivityCompletionReason:(int)arg1;

@end
