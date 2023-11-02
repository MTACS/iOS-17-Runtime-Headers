
@interface ICCloudServerListenerEndpointProvider : NSObject <ICCloudServerListenerEndpointProviding> {
    NSXPCConnection * _listenerEndpointProviderConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_listenerEndpointProviderConnection;
- (void)dealloc;
- (id)init;
- (id)listenerEndpointForService:(long long)arg1 error:(id*)arg2;
- (void)notifyDeviceSetupFinishedWithCompletion:(id /* block */)arg1;

@end
