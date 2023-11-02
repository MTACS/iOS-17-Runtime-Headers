
@interface IOSurfaceRemoteRemoteClient : NSObject {
    id /* block */  _disconnectedHandler;
    NSObject<OS_dispatch_queue> * _disconnectedQueue;
    int  _pid;
    NSObject<OS_xpc_object> * _remoteConnection;
    NSMutableDictionary * _surfaceStates;
}

@property (nonatomic, copy) id /* block */ disconnectedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *disconnectedQueue;
@property (nonatomic) int pid;
@property (nonatomic, retain) NSObject<OS_xpc_object> *remoteConnection;
@property (nonatomic, retain) NSMutableDictionary *surfaceStates;

- (void).cxx_destruct;
- (void)_addSurface:(struct __IOSurfaceClient { }*)arg1 mappedAddress:(void*)arg2 mappedSize:(unsigned long long)arg3 extraData:(id)arg4;
- (struct __IOSurfaceClient { }*)_getClient:(unsigned int)arg1 inboundExtradata:(id)arg2 outboundExtraData:(id*)arg3;
- (void)_handleError:(id)arg1;
- (void)_handleMessage:(id)arg1;
- (bool)_removeSurface:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id /* block */)disconnectedHandler;
- (id)disconnectedQueue;
- (id)initWithRemoteConnection:(id)arg1 disconnectedQueue:(id)arg2 disconnectedHandler:(id /* block */)arg3;
- (int)pid;
- (id)remoteConnection;
- (void)setDisconnectedHandler:(id /* block */)arg1;
- (void)setDisconnectedQueue:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setRemoteConnection:(id)arg1;
- (void)setSurfaceStates:(id)arg1;
- (id)surfaceStates;

@end
