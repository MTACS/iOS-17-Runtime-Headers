
@interface CSSiriAudioMessageRequestClient : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
    NSString * _xpcConnectionUUIDString;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) NSString *xpcConnectionUUIDString;

- (void).cxx_destruct;
- (id)_connection;
- (id)_newConnection;
- (id)_service;
- (void)dealloc;
- (void)forceReleaseAllAudioMessageRetainLock;
- (void)getAudioFileWithRequestId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)queue;
- (void)releaseAudioMessageRetainLockFromRequestId:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionUUIDString:(id)arg1;
- (id)xpcConnection;
- (id)xpcConnectionUUIDString;

@end
