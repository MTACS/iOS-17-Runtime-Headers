
@interface _UIOServiceConnection : NSObject <_UIOverlayServiceClientToServerInterface> {
    BSServiceConnection<BSServiceConnectionHost> * _connection;
    NSHashTable * _observers;
    UIOServer * _server;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long pid;
@property (nonatomic, readonly) UIOServer *server;
@property (readonly) Class superclass;

+ (id)connectionWithBSServiceConnection:(id)arg1 toServer:(id)arg2;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)bundleIdentifier;
- (bool)clientHasEntitlement:(id)arg1;
- (id)connection;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (oneway void)performOverlayServerAction:(id)arg1;
- (long long)pid;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)sendAction:(id)arg1;
- (id)server;
- (void)serviceConnectionDidInvalidate;

@end
