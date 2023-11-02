
@interface _SBExternalDisplayServiceConnectionListener : NSObject <BSServiceConnectionListenerDelegate, SBSExternalDisplayServiceClientToServerInterface> {
    BSServiceConnectionListener * _connectionListener;
    <_SBExternalDisplayServiceConnectionListenerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMapTable * _lock_connectionToClientMap;
    FBServiceClientAuthenticator * _serviceClientAuthenticator;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SBExternalDisplayServiceConnectionListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientForConnection:(id)arg1;
- (id)_createClientForConnection:(id)arg1;
- (void)_handleDisconnectForServiceConnection:(id)arg1;
- (void)_removeClientForConnection:(id)arg1;
- (void)activate;
- (id)delegate;
- (oneway void)getConnectedDisplayInfoWithCompletion:(id /* block */)arg1;
- (id)initWithServiceQueue:(id)arg1;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)notifyObserversExternalDisplayDidConnect:(id)arg1;
- (void)notifyObserversExternalDisplayDidUpdateProperties:(id)arg1 requestingClient:(id)arg2;
- (void)notifyObserversExternalDisplayWillDisconnect:(id)arg1;
- (void)setDelegate:(id)arg1;
- (oneway void)setDisplayArrangement:(id)arg1 forDisplay:(id)arg2;
- (oneway void)setDisplayMirroringEnabled:(id)arg1 forDisplay:(id)arg2;
- (oneway void)setDisplayModeSettings:(id)arg1 forDisplay:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;

@end
