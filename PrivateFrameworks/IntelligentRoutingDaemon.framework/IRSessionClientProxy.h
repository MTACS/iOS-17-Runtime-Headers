
@interface IRSessionClientProxy : NSObject <IRXPCSessionClient> {
    NSString * _clientIdentifier;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didUpdateContext:(id)arg1;
- (void)_sessionDidFailWithError:(id)arg1;
- (void)_sessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
- (void)_sessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;
- (id)clientIdentifier;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (void)invalidateXPCConnection;
- (id)queue;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;

@end
