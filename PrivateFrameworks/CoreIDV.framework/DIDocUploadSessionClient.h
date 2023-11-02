
@interface DIDocUploadSessionClient : NSObject <DIDocUploadSessionXPCProtocol> {
    DIXPCDisconnectHandler * _disconnectHandler;
    <DIDocUploadSessionXPCProtocol> * _remoteObjectProxy;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DIXPCDisconnectHandler *disconnectHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <DIDocUploadSessionXPCProtocol> *remoteObjectProxy;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelUploads;
- (void)dealloc;
- (id)disconnectHandler;
- (id)init;
- (id)remoteObjectProxy;
- (id)serverConnection;
- (void)setDisconnectHandler:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)uploadDocData:(id)arg1 uploadSettings:(id)arg2 completion:(id /* block */)arg3;

@end
