
@interface HMDSiriRemoteInputServer : NSObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _siriSessions;
    NSObject<OS_xpc_object> * _xpcConnection;
    NSObject<OS_xpc_object> * _xpcServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSHashTable *siriSessions;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcServer;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)deregisterSiriSession:(id)arg1;
- (void)handleCheckInMsg:(id)arg1;
- (void)handleConnection:(id)arg1;
- (void)handleConnectionEvent:(id)arg1;
- (void)handleDisconnection;
- (void)handleMsg:(id)arg1;
- (void)handleServerEvent:(id)arg1;
- (void)handleStartStreamMsg:(id)arg1 args:(id)arg2;
- (void)handleStopStreamMsg:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (id)queue;
- (bool)registerSiriSession:(id)arg1;
- (void)sendMsg:(id)arg1 args:(id)arg2;
- (void)sendMsgIfCheckedIn:(id)arg1 args:(id)arg2;
- (id)sessionForIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSiriSessions:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcServer:(id)arg1;
- (id)siriSessions;
- (id)xpcConnection;
- (id)xpcServer;

@end
