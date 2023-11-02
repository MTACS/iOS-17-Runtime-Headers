
@interface WFRemoteExtensionProxy : NSObject <INCExtensionProxy> {
    INCExtensionConnection * _connection;
    SARemoteDevice * _remoteDevice;
}

@property (nonatomic, readonly) INCExtensionConnection *connection;
@property (nonatomic, readonly, copy) SARemoteDevice *remoteDevice;

- (void).cxx_destruct;
- (void)confirmIntentWithCompletionHandler:(id /* block */)arg1;
- (id)connection;
- (void)handleIntentRemotelyWithRemoteOperation:(id)arg1 completion:(id /* block */)arg2;
- (void)handleIntentWithCompletionHandler:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 andDevice:(id)arg2;
- (id)remoteDevice;
- (void)resolveIntentSlotKeyPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveIntentSlotKeyPaths:(id)arg1 completionHandler:(id /* block */)arg2;

@end
