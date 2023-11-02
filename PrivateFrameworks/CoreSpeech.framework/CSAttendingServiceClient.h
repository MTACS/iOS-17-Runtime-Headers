
@interface CSAttendingServiceClient : NSObject <CSAttendingService, CSAttendingServiceDelegate> {
    NSXPCConnection * _attendingConnection;
    <CSAttendingServiceDelegate> * _delegate;
    id  _remoteObjectProxy;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (nonatomic, retain) NSXPCConnection *attendingConnection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSAttendingServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id remoteObjectProxy;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue;

- (void).cxx_destruct;
- (void)_createClientConnection;
- (bool)_isAttendingAllowedForUseCase:(long long)arg1;
- (void)_setupRemoteServiceProxyObject;
- (id)attendingConnection;
- (void)attendingStoppedWithReason:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (id)remoteObjectProxy;
- (void)setAttendingConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setXpcConnectionQueue:(id)arg1;
- (void)speechPauseDetected;
- (void)speechStartDetectedWithEventInfo:(id)arg1;
- (void)startAttendingWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)stopAttendingWithReason:(long long)arg1;
- (id)xpcConnectionQueue;

@end
