
@interface DNDSRemoteAvailabilityServiceProvider : NSObject <BSServiceConnectionListenerDelegate, DNDRemoteAvailabilityServiceServerProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    DNDSClientDetailsProvider * _clientDetailsProvider;
    NSMutableSet * _connections;
    <DNDSRemoteAvailabilityServiceProviderDelegate> * _delegate;
    BSServiceConnectionListener * _requestListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSRemoteAvailabilityServiceProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_handleClientConnectionInterrupted:(id)arg1;
- (void)_handleClientConnectionInvalidated:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)getIsLocalUserAvailableWithRequestDetails:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithClientDetailsProvider:(id)arg1;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
