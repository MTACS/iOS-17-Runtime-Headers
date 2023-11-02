
@interface APXPCActionRequester : NSObject <APXPCActionRequesterProtocol> {
    APXPCRemoteConnection * _connection;
    NSUUID * _delegateID;
    Protocol * _exportedInterface;
    id  _exportedObject;
    id  _remoteObjectProxy;
}

@property (nonatomic, retain) APXPCRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUUID *delegateID;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Protocol *exportedInterface;
@property (nonatomic, readonly) id exportedObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id remoteObjectProxy;
@property (readonly) Class superclass;

+ (bool)canShareConnection;
+ (id)machService;
+ (id)unfairLock;

- (void).cxx_destruct;
- (id)connection;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)delegateID;
- (id)description;
- (id)exportedInterface;
- (id)exportedObject;
- (void)extendCollectionClassesForExportedInterface:(id)arg1;
- (void)extendCollectionClassesForRemoteInterface:(id)arg1;
- (void)finished;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (void)setConnection:(id)arg1;
- (void)setDelegateID:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
