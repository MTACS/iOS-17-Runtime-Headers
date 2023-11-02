
@interface NEAppPushCallKitXPCClient : NSObject <CXNetworkExtensionVoIPXPCClient> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)voipNetworkExtensionPayloadReceived:(id)arg1 mustPostCall:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)voipNetworkExtensionRegistrationFailed;

@end
