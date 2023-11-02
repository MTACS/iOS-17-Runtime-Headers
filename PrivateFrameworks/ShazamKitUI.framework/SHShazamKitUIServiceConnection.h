
@interface SHShazamKitUIServiceConnection : NSObject <SHShazamKitUIService> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
    SHShazamKitUIServiceConnectionProvider * _connectionProvider;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } connectionLock;
@property (nonatomic, readonly) SHShazamKitUIServiceConnectionProvider *connectionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)attachDefaultConnectionHandlers;
- (id)connection;
- (struct os_unfair_lock_s { unsigned int x1; })connectionLock;
- (id)connectionProvider;
- (void)dealloc;
- (id)initWithConnectionProvider:(id)arg1;
- (void)presentMediaItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentMediaItem:(id)arg1 presentationSettings:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setConnectionLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)tearDownConnection;

@end
